
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_g_ctx {scalar_t__ private; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int error; struct pblk* private; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct pblk*,struct nvm_rq*,int) ;
 struct pblk_g_ctx* FUNC_1 (struct nvm_rq*) ;
 int FUNC_2 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_3(struct nvm_rq *VAR_0)
{
 struct pblk *VAR_1 = VAR_0->private;
 struct pblk_g_ctx *VAR_2 = FUNC_1(VAR_0);
 struct bio *VAR_3 = (struct bio *)VAR_2->private;

 FUNC_2(VAR_3, VAR_0->error);
 FUNC_0(VAR_1, VAR_0, 1);
}
