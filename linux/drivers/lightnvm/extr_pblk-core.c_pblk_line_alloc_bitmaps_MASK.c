
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int bitmap_pool; } ;
struct pblk_line_meta {int sec_bitmap_len; } ;
struct pblk_line {int * map_bitmap; void* invalid_bitmap; } ;
struct pblk {struct pblk_line_mgmt l_mg; struct pblk_line_meta lm; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pblk *VAR_2, struct pblk_line *VAR_3)
{
 struct pblk_line_meta *VAR_4 = &VAR_2->lm;
 struct pblk_line_mgmt *VAR_5 = &VAR_2->l_mg;

 VAR_3->map_bitmap = FUNC_0(VAR_5->bitmap_pool, VAR_1);
 if (!VAR_3->map_bitmap)
  return -VAR_0;

 FUNC_2(VAR_3->map_bitmap, 0, VAR_4->sec_bitmap_len);


 VAR_3->invalid_bitmap = FUNC_0(VAR_5->bitmap_pool, VAR_1);
 if (!VAR_3->invalid_bitmap) {
  FUNC_1(VAR_3->map_bitmap, VAR_5->bitmap_pool);
  VAR_3->map_bitmap = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
