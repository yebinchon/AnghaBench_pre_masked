
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct nouveau_dmem_chunk* zone_device_data; } ;
struct nouveau_dmem_chunk {unsigned long pfn_first; int lock; int callocated; int bitmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int ) ;
 unsigned long FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct page *VAR_0)
{
 struct nouveau_dmem_chunk *VAR_1 = VAR_0->zone_device_data;
 unsigned long VAR_2 = FUNC_2(VAR_0) - VAR_1->pfn_first;
 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_2, VAR_1->bitmap);
 FUNC_0(!VAR_1->callocated);
 VAR_1->callocated--;




 FUNC_4(&VAR_1->lock);
}
