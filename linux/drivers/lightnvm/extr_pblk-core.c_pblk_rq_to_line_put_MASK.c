
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk {int dummy; } ;
struct nvm_rq {int nr_ppas; } ;


 struct ppa_addr* FUNC_0 (struct nvm_rq*) ;
 int FUNC_1 (struct pblk*,struct ppa_addr) ;

void FUNC_2(struct pblk *VAR_0, struct nvm_rq *VAR_1)
{
 struct ppa_addr *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_ppas; VAR_3++)
  FUNC_1(VAR_0, VAR_2[VAR_3]);
}
