
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int submit; } ;
struct cppi41_dd {scalar_t__ ctrl_mem; TYPE_1__ td_queue; scalar_t__ qmgr_mem; int scratch_phys; int qmgr_scratch; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct device*,struct cppi41_dd*) ;
 int FUNC_3 (struct device*,int,int *,int ) ;
 int FUNC_4 (struct device*,struct cppi41_dd*) ;
 int FUNC_5 (struct cppi41_dd*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_8, struct cppi41_dd *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_6 > ((1 << 14) - 1));
 VAR_9->qmgr_scratch = FUNC_3(VAR_8, VAR_6,
   &VAR_9->scratch_phys, VAR_2);
 if (!VAR_9->qmgr_scratch)
  return -VAR_1;

 FUNC_1(VAR_9->scratch_phys, VAR_9->qmgr_mem + VAR_3);
 FUNC_1(VAR_7, VAR_9->qmgr_mem + VAR_5);
 FUNC_1(0, VAR_9->qmgr_mem + VAR_4);

 VAR_10 = FUNC_4(VAR_8, VAR_9);
 if (VAR_10)
  goto err_td;

 FUNC_1(VAR_9->td_queue.submit, VAR_9->ctrl_mem + VAR_0);
 FUNC_5(VAR_9);

 return 0;
err_td:
 FUNC_2(VAR_8, VAR_9);
 return VAR_10;
}
