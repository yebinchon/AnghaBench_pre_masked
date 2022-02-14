
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int e_rq_pool; int r_rq_pool; int w_rq_pool; } ;
struct nvm_rq {int dummy; } ;
typedef int mempool_t ;


 int VAR_0 ;



 struct nvm_rq* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct nvm_rq*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

struct nvm_rq *FUNC_2(struct pblk *VAR_3, int VAR_4)
{
 mempool_t *VAR_5;
 struct nvm_rq *VAR_6;
 int VAR_7;

 switch (VAR_4) {
 case 129:
 case 128:
  VAR_5 = &VAR_3->w_rq_pool;
  VAR_7 = VAR_2;
  break;
 case 130:
  VAR_5 = &VAR_3->r_rq_pool;
  VAR_7 = VAR_1;
  break;
 default:
  VAR_5 = &VAR_3->e_rq_pool;
  VAR_7 = VAR_1;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_6, 0, VAR_7);

 return VAR_6;
}
