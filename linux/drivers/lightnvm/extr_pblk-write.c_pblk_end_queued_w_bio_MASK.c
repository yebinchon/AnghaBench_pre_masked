
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_c_ctx {int list; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int dummy; } ;


 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (struct pblk*,struct nvm_rq*,struct pblk_c_ctx*) ;

__attribute__((used)) static unsigned long FUNC_2(struct pblk *VAR_0,
        struct nvm_rq *VAR_1,
        struct pblk_c_ctx *VAR_2)
{
 FUNC_0(&VAR_2->list);
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
