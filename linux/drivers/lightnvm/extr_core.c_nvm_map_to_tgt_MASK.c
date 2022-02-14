
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t ch; size_t lun; } ;
struct ppa_addr {TYPE_1__ a; } ;
struct nvm_tgt_dev {struct nvm_dev* parent; } ;
struct nvm_dev_map {struct nvm_ch_map* chnls; } ;
struct nvm_dev {struct nvm_dev_map* rmap; } ;
struct nvm_ch_map {int* lun_offs; scalar_t__ ch_off; } ;



__attribute__((used)) static void FUNC_0(struct nvm_tgt_dev *VAR_0, struct ppa_addr *VAR_1)
{
 struct nvm_dev *VAR_2 = VAR_0->parent;
 struct nvm_dev_map *VAR_3 = VAR_2->rmap;
 struct nvm_ch_map *VAR_4 = &VAR_3->chnls[VAR_1->a.ch];
 int VAR_5 = VAR_4->lun_offs[VAR_1->a.lun];

 VAR_1->a.ch -= VAR_4->ch_off;
 VAR_1->a.lun -= VAR_5;
}
