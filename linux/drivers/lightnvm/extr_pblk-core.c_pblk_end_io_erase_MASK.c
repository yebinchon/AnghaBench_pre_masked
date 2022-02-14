
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int e_rq_pool; } ;
struct nvm_rq {struct pblk* private; } ;


 int FUNC_0 (struct pblk*,struct nvm_rq*) ;
 int FUNC_1 (struct nvm_rq*,int *) ;

__attribute__((used)) static void FUNC_2(struct nvm_rq *VAR_0)
{
 struct pblk *VAR_1 = VAR_0->private;

 FUNC_0(VAR_1, VAR_0);
 FUNC_1(VAR_0, &VAR_1->e_rq_pool);
}
