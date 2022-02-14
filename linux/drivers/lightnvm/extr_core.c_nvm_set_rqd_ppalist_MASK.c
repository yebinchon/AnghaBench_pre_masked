
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pl; } ;
struct ppa_addr {TYPE_1__ g; } ;
struct nvm_geo {int pln_mode; } ;
struct nvm_tgt_dev {struct nvm_geo geo; struct nvm_dev* parent; } ;
struct nvm_rq {int nr_ppas; struct ppa_addr* ppa_list; int dma_ppa_list; struct ppa_addr ppa_addr; } ;
struct nvm_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ppa_addr* FUNC_0 (struct nvm_dev*,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct nvm_tgt_dev *VAR_3, struct nvm_rq *VAR_4,
   const struct ppa_addr *VAR_5, int VAR_6)
{
 struct nvm_dev *VAR_7 = VAR_3->parent;
 struct nvm_geo *VAR_8 = &VAR_3->geo;
 int VAR_9, VAR_10, VAR_11;
 struct ppa_addr VAR_12;

 if (VAR_8->pln_mode == VAR_2 && VAR_6 == 1) {
  VAR_4->nr_ppas = VAR_6;
  VAR_4->ppa_addr = VAR_5[0];

  return 0;
 }

 VAR_4->nr_ppas = VAR_6;
 VAR_4->ppa_list = FUNC_0(VAR_7, VAR_1, &VAR_4->dma_ppa_list);
 if (!VAR_4->ppa_list) {
  FUNC_1("failed to allocate dma memory\n");
  return -VAR_0;
 }

 VAR_10 = VAR_8->pln_mode;
 VAR_4->nr_ppas *= VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
   VAR_12 = VAR_5[VAR_9];
   VAR_12.g.pl = VAR_11;
   VAR_4->ppa_list[(VAR_11 * VAR_6) + VAR_9] = VAR_12;
  }
 }

 return 0;
}
