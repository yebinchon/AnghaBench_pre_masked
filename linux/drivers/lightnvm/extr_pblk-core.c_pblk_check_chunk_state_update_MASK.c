
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int nr_ppas; } ;
struct nvm_chk_meta {int cnlb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ppa_addr* FUNC_0 (struct nvm_rq*) ;
 struct nvm_chk_meta* FUNC_1 (struct pblk*,struct ppa_addr) ;
 scalar_t__ FUNC_2 (struct pblk*,struct ppa_addr) ;
 int FUNC_3 (struct pblk*) ;
 int FUNC_4 (int ,struct ppa_addr*,int ) ;

void FUNC_5(struct pblk *VAR_2, struct nvm_rq *VAR_3)
{
 struct ppa_addr *VAR_4 = FUNC_0(VAR_3);

 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->nr_ppas; VAR_5++) {
  struct ppa_addr *VAR_6 = &VAR_4[VAR_5];
  struct nvm_chk_meta *VAR_7 = FUNC_1(VAR_2, *VAR_6);
  u64 VAR_8 = FUNC_2(VAR_2, *VAR_6);

  if (VAR_8 == 0)
   FUNC_4(FUNC_3(VAR_2),
       VAR_6, VAR_1);
  else if (VAR_8 == (VAR_7->cnlb - 1))
   FUNC_4(FUNC_3(VAR_2),
       VAR_6, VAR_0);
 }
}
