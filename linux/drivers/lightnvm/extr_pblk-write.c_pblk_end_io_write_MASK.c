
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_c_ctx {int dummy; } ;
struct pblk {int inflight_io; } ;
struct nvm_rq {TYPE_1__* bio; scalar_t__ error; struct pblk* private; } ;
struct TYPE_2__ {int bi_status; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct pblk_c_ctx* FUNC_2 (struct nvm_rq*) ;
 int FUNC_3 (struct pblk*,struct nvm_rq*) ;
 int FUNC_4 (struct pblk*,struct nvm_rq*,struct pblk_c_ctx*) ;
 int FUNC_5 (struct pblk*,struct nvm_rq*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct nvm_rq *VAR_0)
{
 struct pblk *VAR_1 = VAR_0->private;
 struct pblk_c_ctx *VAR_2 = FUNC_2(VAR_0);

 if (VAR_0->error) {
  FUNC_5(VAR_1, VAR_0);
  return;
 } else {
  if (FUNC_6())
   FUNC_3(VAR_1, VAR_0);



 }

 FUNC_4(VAR_1, VAR_0, VAR_2);
 FUNC_1(&VAR_1->inflight_io);
}
