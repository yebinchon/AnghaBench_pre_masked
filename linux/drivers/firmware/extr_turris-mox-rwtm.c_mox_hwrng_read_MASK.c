
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int retval; } ;
struct mox_rwtm {int buf_phys; int busy; int buf; TYPE_1__ reply; int cmd_done; int mbox; } ;
struct hwrng {scalar_t__ priv; } ;
struct armada_37xx_rwtm_tx_msg {int* args; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct armada_37xx_rwtm_tx_msg*) ;
 int FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hwrng *VAR_2, void *VAR_3, size_t VAR_4, bool VAR_5)
{
 struct mox_rwtm *VAR_6 = (struct mox_rwtm *) VAR_2->priv;
 struct armada_37xx_rwtm_tx_msg VAR_7;
 int VAR_8;

 if (VAR_4 > 4096)
  VAR_4 = 4096;

 VAR_7.command = VAR_1;
 VAR_7.args[0] = 1;
 VAR_7.args[1] = VAR_6->buf_phys;
 VAR_7.args[2] = (VAR_4 + 3) & ~3;

 if (!VAR_5) {
  if (!FUNC_4(&VAR_6->busy))
   return -VAR_0;
 } else {
  FUNC_3(&VAR_6->busy);
 }

 VAR_8 = FUNC_0(VAR_6->mbox, &VAR_7);
 if (VAR_8 < 0)
  goto unlock_mutex;

 VAR_8 = FUNC_6(&VAR_6->cmd_done);
 if (VAR_8 < 0)
  goto unlock_mutex;

 VAR_8 = FUNC_2(VAR_1, VAR_6->reply.retval);
 if (VAR_8 < 0)
  goto unlock_mutex;

 FUNC_1(VAR_3, VAR_6->buf, VAR_4);
 VAR_8 = VAR_4;

unlock_mutex:
 FUNC_5(&VAR_6->busy);
 return VAR_8;
}
