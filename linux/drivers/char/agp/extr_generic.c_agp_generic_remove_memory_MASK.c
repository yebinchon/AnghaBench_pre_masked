
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_memory {int page_count; int type; struct agp_bridge_data* bridge; } ;
struct agp_bridge_data {TYPE_1__* driver; scalar_t__ gatt_table; int scratch_page; } ;
typedef int off_t ;
struct TYPE_2__ {int (* agp_type_to_mask_type ) (struct agp_bridge_data*,int) ;int (* tlb_flush ) (struct agp_memory*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct agp_bridge_data*,int) ;
 int FUNC_3 (struct agp_memory*) ;
 int FUNC_4 (int ,scalar_t__) ;

int FUNC_5(struct agp_memory *VAR_1, off_t VAR_2, int VAR_3)
{
 size_t VAR_4;
 struct agp_bridge_data *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_1->bridge;
 if (!VAR_5)
  return -VAR_0;

 if (VAR_1->page_count == 0)
  return 0;

 if (VAR_3 != VAR_1->type)
  return -VAR_0;

 VAR_7 = FUNC_0();
 if (((VAR_2 + VAR_1->page_count) > VAR_7) ||
     ((VAR_2 + VAR_1->page_count) < VAR_2))
  return -VAR_0;

 VAR_6 = VAR_5->driver->agp_type_to_mask_type(VAR_5, VAR_3);
 if (VAR_6 != 0) {

  return -VAR_0;
 }


 for (VAR_4 = VAR_2; VAR_4 < (VAR_1->page_count + VAR_2); VAR_4++) {
  FUNC_4(VAR_5->scratch_page, VAR_5->gatt_table+VAR_4);
 }
 FUNC_1(VAR_5->gatt_table+VAR_4-1);

 VAR_5->driver->tlb_flush(VAR_1);
 return 0;
}
