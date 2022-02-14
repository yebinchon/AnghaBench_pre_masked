
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_c_ctx {int lun_bitmap; } ;
struct pblk {int e_rq_pool; int r_rq_pool; int w_rq_pool; } ;
struct nvm_rq {int dummy; } ;
typedef int mempool_t ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvm_rq*,int *) ;
 scalar_t__ FUNC_2 (struct nvm_rq*) ;
 int FUNC_3 (struct pblk*,char*) ;
 int FUNC_4 (struct pblk*,struct nvm_rq*) ;

void FUNC_5(struct pblk *VAR_0, struct nvm_rq *VAR_1, int VAR_2)
{
 mempool_t *VAR_3;

 switch (VAR_2) {
 case 129:
  FUNC_0(((struct pblk_c_ctx *)FUNC_2(VAR_1))->lun_bitmap);

 case 128:
  VAR_3 = &VAR_0->w_rq_pool;
  break;
 case 130:
  VAR_3 = &VAR_0->r_rq_pool;
  break;
 case 131:
  VAR_3 = &VAR_0->e_rq_pool;
  break;
 default:
  FUNC_3(VAR_0, "trying to free unknown rqd type\n");
  return;
 }

 FUNC_4(VAR_0, VAR_1);
 FUNC_1(VAR_1, VAR_3);
}
