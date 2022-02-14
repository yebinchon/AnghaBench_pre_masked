
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_bridge_data {TYPE_1__* driver; struct page* scratch_page_page; int * key_list; } ;
struct TYPE_2__ {int (* agp_destroy_page ) (struct page*,int ) ;scalar_t__ needs_scratch_page; int (* free_gatt_table ) (struct agp_bridge_data*) ;int (* cleanup ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct agp_bridge_data*) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct agp_bridge_data *VAR_2)
{
 if (VAR_2->driver->cleanup)
  VAR_2->driver->cleanup();
 if (VAR_2->driver->free_gatt_table)
  VAR_2->driver->free_gatt_table(VAR_2);

 FUNC_4(VAR_2->key_list);
 VAR_2->key_list = ((void*)0);

 if (VAR_2->driver->agp_destroy_page &&
     VAR_2->driver->needs_scratch_page) {
  struct page *VAR_3 = VAR_2->scratch_page_page;

  VAR_2->driver->agp_destroy_page(VAR_3, VAR_1);
  VAR_2->driver->agp_destroy_page(VAR_3, VAR_0);
 }
}
