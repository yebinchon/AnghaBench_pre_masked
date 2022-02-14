
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_memory {struct page** pages; int page_count; } ;
struct agp_bridge_data {int dummy; } ;
struct TYPE_2__ {int current_memory_agp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page**,size_t) ;

int FUNC_5(struct agp_bridge_data *VAR_5, struct agp_memory *VAR_6, size_t VAR_7)
{
 struct page * VAR_8;
 int VAR_9, VAR_10 = -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_8 = FUNC_0(VAR_2 | VAR_1 | VAR_3);

  if (VAR_8 == ((void*)0))
   goto out;


  FUNC_3(VAR_8);

  FUNC_2(VAR_8);
  FUNC_1(&VAR_4->current_memory_agp);

  VAR_6->pages[VAR_9] = VAR_8;
  VAR_6->page_count++;
 }




 VAR_10 = 0;
out:
 return VAR_10;
}
