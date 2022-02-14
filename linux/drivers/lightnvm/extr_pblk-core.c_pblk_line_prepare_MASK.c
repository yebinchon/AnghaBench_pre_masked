
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_meta {int min_blk_line; int meta_distance; int blk_per_line; } ;
struct pblk_line {scalar_t__ state; int sec_to_update; int ref; int lock; int meta_distance; int left_seblks; int left_eblks; int id; int blk_bitmap; int erase_bitmap; int blk_in_line; } ;
struct pblk {struct pblk_line_meta lm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pblk*) ;
 int FUNC_6 (struct pblk*,struct pblk_line*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct pblk *VAR_5, struct pblk_line *VAR_6)
{
 struct pblk_line_meta *VAR_7 = &VAR_5->lm;
 int VAR_8 = FUNC_1(&VAR_6->blk_in_line);
 int VAR_9;


 FUNC_3(VAR_6->erase_bitmap, VAR_6->blk_bitmap, VAR_7->blk_per_line);

 FUNC_7(&VAR_6->lock);




 if (VAR_6->state == VAR_3) {
  VAR_9 = FUNC_6(VAR_5, VAR_6);
  VAR_6->state = VAR_2;
  FUNC_9(FUNC_5(VAR_5), VAR_6->id,
     VAR_6->state);
 } else {
  VAR_9 = VAR_8;
 }

 if (VAR_8 < VAR_7->min_blk_line) {
  FUNC_8(&VAR_6->lock);
  return -VAR_0;
 }

 if (VAR_6->state != VAR_2) {
  FUNC_0(1, "pblk: corrupted line %d, state %d\n",
       VAR_6->id, VAR_6->state);
  FUNC_8(&VAR_6->lock);
  return -VAR_1;
 }

 VAR_6->state = VAR_4;
 FUNC_9(FUNC_5(VAR_5), VAR_6->id,
    VAR_6->state);

 FUNC_2(&VAR_6->left_eblks, VAR_9);
 FUNC_2(&VAR_6->left_seblks, VAR_9);

 VAR_6->meta_distance = VAR_7->meta_distance;
 FUNC_8(&VAR_6->lock);

 FUNC_4(&VAR_6->ref);
 FUNC_2(&VAR_6->sec_to_update, 0);

 return 0;
}
