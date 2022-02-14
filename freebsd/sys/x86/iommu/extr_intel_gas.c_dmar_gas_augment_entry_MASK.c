
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_map_entry {void* free_down; void* free_after; } ;


 void* FUNC_0 (void*,void*) ;
 struct dmar_map_entry* FUNC_1 (struct dmar_map_entry*,int ) ;
 struct dmar_map_entry* FUNC_2 (struct dmar_map_entry*,int ) ;
 struct dmar_map_entry* FUNC_3 (struct dmar_map_entry*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct dmar_map_entry *VAR_1)
{
 struct dmar_map_entry *VAR_2, *VAR_3;

 for (; VAR_1 != ((void*)0); VAR_1 = FUNC_2(VAR_1, VAR_0)) {
  VAR_2 = FUNC_1(VAR_1, VAR_0);
  VAR_3 = FUNC_3(VAR_1, VAR_0);
  if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0)) {
   VAR_1->free_down = VAR_1->free_after;
  } else if (VAR_2 == ((void*)0) && VAR_3 != ((void*)0)) {
   VAR_1->free_down = FUNC_0(VAR_1->free_after, VAR_3->free_down);
  } else if ( VAR_3 == ((void*)0)) {
   VAR_1->free_down = FUNC_0(VAR_1->free_after, VAR_2->free_down);
  } else {
   VAR_1->free_down = FUNC_0(VAR_1->free_after, VAR_2->free_down);
   VAR_1->free_down = FUNC_0(VAR_1->free_down, VAR_3->free_down);
  }
 }
}
