
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_pad_rq {int ref; struct pblk* pblk; } ;
struct pblk {int inflight_io; } ;
struct nvm_rq {struct pblk_pad_rq* private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct ppa_addr* FUNC_2 (struct nvm_rq*) ;
 int FUNC_3 (struct pblk*,struct nvm_rq*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct pblk*,struct ppa_addr) ;

__attribute__((used)) static void FUNC_5(struct nvm_rq *VAR_2)
{
 struct ppa_addr *VAR_3 = FUNC_2(VAR_2);
 struct pblk_pad_rq *VAR_4 = VAR_2->private;
 struct pblk *VAR_5 = VAR_4->pblk;

 FUNC_4(VAR_5, VAR_3[0]);

 FUNC_3(VAR_5, VAR_2, VAR_0);

 FUNC_0(&VAR_5->inflight_io);
 FUNC_1(&VAR_4->ref, VAR_1);
}
