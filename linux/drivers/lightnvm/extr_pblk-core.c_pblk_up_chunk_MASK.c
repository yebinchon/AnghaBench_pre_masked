
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_lun {int wr_sem; } ;
struct pblk {struct pblk_lun* luns; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int FUNC_0 (struct nvm_geo*,struct ppa_addr) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct pblk *VAR_0, struct ppa_addr VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 struct pblk_lun *VAR_4;
 int VAR_5 = FUNC_0(VAR_3, VAR_1);

 VAR_4 = &VAR_0->luns[VAR_5];
 FUNC_1(&VAR_4->wr_sem);
}
