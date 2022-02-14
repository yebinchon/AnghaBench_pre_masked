
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int free_lock; struct pblk_line* data_line; } ;
struct pblk_line {int meta_line; int emeta; int smeta; int invalid_bitmap; int map_bitmap; } ;
struct pblk {int rl; struct pblk_line_mgmt l_mg; } ;


 scalar_t__ FUNC_0 (struct pblk*,struct pblk_line*) ;
 struct pblk_line* FUNC_1 (struct pblk*) ;
 int FUNC_2 (struct pblk_line*) ;
 int FUNC_3 (int *,struct pblk_line*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct pblk_line *FUNC_6(struct pblk *VAR_0,
      struct pblk_line *VAR_1)
{
 struct pblk_line_mgmt *VAR_2 = &VAR_0->l_mg;
 struct pblk_line *VAR_3;

retry:
 FUNC_4(&VAR_2->free_lock);
 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3) {
  VAR_2->data_line = ((void*)0);
  FUNC_5(&VAR_2->free_lock);
  return ((void*)0);
 }

 VAR_3->map_bitmap = VAR_1->map_bitmap;
 VAR_3->invalid_bitmap = VAR_1->invalid_bitmap;
 VAR_3->smeta = VAR_1->smeta;
 VAR_3->emeta = VAR_1->emeta;
 VAR_3->meta_line = VAR_1->meta_line;

 FUNC_2(VAR_1);

 VAR_2->data_line = VAR_3;
 FUNC_5(&VAR_2->free_lock);

 FUNC_3(&VAR_0->rl, VAR_1, 0);

 if (FUNC_0(VAR_0, VAR_3))
  goto retry;

 return VAR_3;
}
