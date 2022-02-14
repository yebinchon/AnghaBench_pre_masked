
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int bitmap_pool; } ;
struct pblk_line {int invalid_bitmap; int map_bitmap; struct pblk* pblk; } ;
struct pblk {struct pblk_line_mgmt l_mg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pblk_line*) ;

void FUNC_2(struct pblk_line *VAR_0)
{
 struct pblk *VAR_1 = VAR_0->pblk;
 struct pblk_line_mgmt *VAR_2 = &VAR_1->l_mg;

 FUNC_0(VAR_0->map_bitmap, VAR_2->bitmap_pool);
 FUNC_0(VAR_0->invalid_bitmap, VAR_2->bitmap_pool);

 FUNC_1(VAR_0);
}
