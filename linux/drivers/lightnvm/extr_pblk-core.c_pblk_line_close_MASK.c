
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pblk_lun {int bppa; } ;
struct pblk_line_mgmt {int gc_lock; int bitmap_pool; int free_lock; int meta_bitmap; } ;
struct pblk_line_meta {int blk_per_line; int sec_per_line; } ;
struct pblk_line {scalar_t__ state; int id; int lock; TYPE_1__* chks; int * emeta; int * smeta; int * map_bitmap; int list; int meta_line; } ;
struct pblk {struct pblk_lun* luns; struct pblk_line_mgmt l_mg; struct pblk_line_meta lm; struct nvm_tgt_dev* dev; } ;
struct nvm_geo {int dummy; } ;
struct nvm_tgt_dev {struct nvm_geo geo; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct pblk*) ;
 struct list_head* FUNC_6 (struct pblk*,struct pblk_line*) ;
 int FUNC_7 (struct nvm_geo*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ,scalar_t__) ;

void FUNC_12(struct pblk *VAR_4, struct pblk_line *VAR_5)
{
 struct nvm_tgt_dev *VAR_6 = VAR_4->dev;
 struct nvm_geo *VAR_7 = &VAR_6->geo;
 struct pblk_line_meta *VAR_8 = &VAR_4->lm;
 struct pblk_line_mgmt *VAR_9 = &VAR_4->l_mg;
 struct list_head *VAR_10;
 int VAR_11;






 FUNC_8(&VAR_9->free_lock);
 FUNC_1(!FUNC_10(VAR_5->meta_line, &VAR_9->meta_bitmap));
 FUNC_9(&VAR_9->free_lock);

 FUNC_8(&VAR_9->gc_lock);
 FUNC_8(&VAR_5->lock);
 FUNC_1(VAR_5->state != VAR_3);
 VAR_5->state = VAR_2;
 VAR_10 = FUNC_6(VAR_4, VAR_5);
 FUNC_3(&VAR_5->list, VAR_10);

 FUNC_4(VAR_5->map_bitmap, VAR_9->bitmap_pool);
 VAR_5->map_bitmap = ((void*)0);
 VAR_5->smeta = ((void*)0);
 VAR_5->emeta = ((void*)0);

 for (VAR_11 = 0; VAR_11 < VAR_8->blk_per_line; VAR_11++) {
  struct pblk_lun *VAR_12 = &VAR_4->luns[VAR_11];
  int VAR_13 = FUNC_7(VAR_7, VAR_12->bppa);
  int VAR_14 = VAR_5->chks[VAR_13].state;

  if (!(VAR_14 & VAR_1))
   VAR_14 = VAR_0;
 }

 FUNC_9(&VAR_5->lock);
 FUNC_9(&VAR_9->gc_lock);

 FUNC_11(FUNC_5(VAR_4), VAR_5->id,
     VAR_5->state);
}
