
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_lun {int bppa; } ;
struct pblk_line_meta {int blk_per_line; } ;
struct pblk_line {int erase_bitmap; TYPE_1__* chks; int blk_in_line; } ;
struct pblk {struct pblk_lun* luns; struct nvm_tgt_dev* dev; struct pblk_line_meta lm; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvm_geo*,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct pblk *VAR_1, struct pblk_line *VAR_2)
{
 struct pblk_line_meta *VAR_3 = &VAR_1->lm;
 struct nvm_tgt_dev *VAR_4 = VAR_1->dev;
 struct nvm_geo *VAR_5 = &VAR_4->geo;
 int VAR_6 = FUNC_0(&VAR_2->blk_in_line);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->blk_per_line; VAR_7++) {
  struct pblk_lun *VAR_8 = &VAR_1->luns[VAR_7];
  int VAR_9 = FUNC_1(VAR_5, VAR_8->bppa);
  int VAR_10 = VAR_2->chks[VAR_9].state;


  if (VAR_10 & VAR_0) {
   FUNC_2(FUNC_1(VAR_5, VAR_8->bppa),
       VAR_2->erase_bitmap);
   VAR_6--;
  }
 }

 return VAR_6;
}
