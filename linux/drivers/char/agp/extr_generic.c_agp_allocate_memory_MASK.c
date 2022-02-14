
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct agp_memory {struct agp_bridge_data* bridge; int page_count; struct page** pages; } ;
struct agp_bridge_data {int max_memory_agp; TYPE_1__* driver; int current_memory_agp; } ;
struct TYPE_2__ {struct page* (* agp_alloc_page ) (struct agp_bridge_data*) ;scalar_t__ (* agp_alloc_pages ) (struct agp_bridge_data*,struct agp_memory*,size_t) ;struct agp_memory* (* alloc_by_type ) (size_t,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct agp_memory* FUNC_0 (int) ;
 int FUNC_1 (struct agp_memory*) ;
 struct agp_memory* FUNC_2 (size_t,scalar_t__) ;
 int FUNC_3 (int *) ;
 struct agp_memory* FUNC_4 (size_t,scalar_t__) ;
 scalar_t__ FUNC_5 (struct agp_bridge_data*,struct agp_memory*,size_t) ;
 struct page* FUNC_6 (struct agp_bridge_data*) ;

struct agp_memory *FUNC_7(struct agp_bridge_data *VAR_2,
     size_t VAR_3, u32 VAR_4)
{
 int VAR_5;
 struct agp_memory *VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (!VAR_2)
  return ((void*)0);

 VAR_8 = FUNC_3(&VAR_2->current_memory_agp);
 if ((VAR_8 + VAR_3 > VAR_2->max_memory_agp) ||
     (VAR_8 + VAR_3 < VAR_3))
  return ((void*)0);

 if (VAR_4 >= VAR_0) {
  VAR_6 = FUNC_2(VAR_3, VAR_4);
  if (VAR_6)
   VAR_6->bridge = VAR_2;
  return VAR_6;
 }

 if (VAR_4 != 0) {
  VAR_6 = VAR_2->driver->alloc_by_type(VAR_3, VAR_4);
  if (VAR_6)
   VAR_6->bridge = VAR_2;
  return VAR_6;
 }

 VAR_5 = (VAR_3 + VAR_1 - 1) / VAR_1;

 VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 == ((void*)0))
  return ((void*)0);

 if (VAR_2->driver->agp_alloc_pages) {
  if (VAR_2->driver->agp_alloc_pages(VAR_2, VAR_6, VAR_3)) {
   FUNC_1(VAR_6);
   return ((void*)0);
  }
  VAR_6->bridge = VAR_2;
  return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct page *VAR_9 = VAR_2->driver->agp_alloc_page(VAR_2);

  if (VAR_9 == ((void*)0)) {
   FUNC_1(VAR_6);
   return ((void*)0);
  }
  VAR_6->pages[VAR_7] = VAR_9;
  VAR_6->page_count++;
 }
 VAR_6->bridge = VAR_2;

 return VAR_6;
}
