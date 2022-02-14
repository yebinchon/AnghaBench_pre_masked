
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct nvm_tgt_dev {int dummy; } ;
struct nvm_rq {int nr_ppas; } ;


 int FUNC_0 (struct nvm_tgt_dev*,struct ppa_addr*,int ) ;
 struct ppa_addr* FUNC_1 (struct nvm_rq*) ;

__attribute__((used)) static void FUNC_2(struct nvm_tgt_dev *VAR_0, struct nvm_rq *VAR_1)
{
 struct ppa_addr *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_2, VAR_1->nr_ppas);
}
