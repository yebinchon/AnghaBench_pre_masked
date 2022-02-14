
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {int page; } ;
struct dm_integrity_c {int n_bitmap_blocks; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long*,unsigned long*) ;
 unsigned long* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dm_integrity_c *VAR_2, struct page_list *VAR_3, struct page_list *VAR_4)
{
 unsigned VAR_5 = FUNC_0(VAR_2->n_bitmap_blocks, VAR_1 / VAR_0);
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  unsigned long *VAR_7 = FUNC_2(VAR_3[VAR_6].page);
  unsigned long *VAR_8 = FUNC_2(VAR_4[VAR_6].page);
  FUNC_1(VAR_7, VAR_8);
 }
}
