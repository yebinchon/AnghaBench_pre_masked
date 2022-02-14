
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_rec_ctx {int ws_rec; struct nvm_rq* rqd; struct pblk* pblk; } ;
struct pblk {int close_wq; int rec_pool; } ;
struct nvm_rq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct pblk_rec_ctx* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pblk*,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct pblk *VAR_2, struct nvm_rq *VAR_3)
{
 struct pblk_rec_ctx *VAR_4;

 VAR_4 = FUNC_1(&VAR_2->rec_pool, VAR_0);
 if (!VAR_4) {
  FUNC_2(VAR_2, "could not allocate recovery work\n");
  return;
 }

 VAR_4->pblk = VAR_2;
 VAR_4->rqd = VAR_3;

 FUNC_0(&VAR_4->ws_rec, VAR_1);
 FUNC_3(VAR_2->close_wq, &VAR_4->ws_rec);
}
