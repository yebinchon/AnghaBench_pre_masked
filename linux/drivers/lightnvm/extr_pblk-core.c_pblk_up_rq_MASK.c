
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_lun {int wr_sem; } ;
struct pblk {struct pblk_lun* luns; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int all_luns; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;


 int FUNC_0 (unsigned long*,int,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct pblk *VAR_0, unsigned long *VAR_1)
{
 struct nvm_tgt_dev *VAR_2 = VAR_0->dev;
 struct nvm_geo *VAR_3 = &VAR_2->geo;
 struct pblk_lun *VAR_4;
 int VAR_5 = VAR_3->all_luns;
 int VAR_6 = -1;

 while ((VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_6 + 1)) < VAR_5) {
  VAR_4 = &VAR_0->luns[VAR_6];
  FUNC_1(&VAR_4->wr_sem);
 }
}
