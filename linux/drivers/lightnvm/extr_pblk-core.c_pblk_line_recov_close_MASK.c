
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk_line_mgmt {int bitmap_pool; } ;
struct pblk_line {int * emeta; int * smeta; int * map_bitmap; } ;
struct pblk {struct pblk_line_mgmt l_mg; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct pblk *VAR_0, struct pblk_line *VAR_1)
{
 struct pblk_line_mgmt *VAR_2 = &VAR_0->l_mg;

 FUNC_0(VAR_1->map_bitmap, VAR_2->bitmap_pool);
 VAR_1->map_bitmap = ((void*)0);
 VAR_1->smeta = ((void*)0);
 VAR_1->emeta = ((void*)0);
}
