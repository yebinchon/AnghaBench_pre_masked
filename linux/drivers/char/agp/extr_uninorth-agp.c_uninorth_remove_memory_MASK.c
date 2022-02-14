
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int type; size_t page_count; } ;
typedef size_t off_t ;
struct TYPE_5__ {int * gatt_table; TYPE_1__* driver; } ;
struct TYPE_4__ {int (* agp_type_to_mask_type ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct agp_memory*) ;

__attribute__((used)) static int FUNC_3(struct agp_memory *VAR_3, off_t VAR_4, int VAR_5)
{
 size_t VAR_6;
 u32 *VAR_7;
 int VAR_8;

 if (VAR_5 != VAR_3->type)
  return -VAR_0;

 VAR_8 = VAR_1->driver->agp_type_to_mask_type(VAR_1, VAR_5);
 if (VAR_8 != 0) {

  return -VAR_0;
 }

 if (VAR_3->page_count == 0)
  return 0;

 VAR_7 = (u32 *) &VAR_1->gatt_table[VAR_4];
 for (VAR_6 = 0; VAR_6 < VAR_3->page_count; ++VAR_6) {
  VAR_7[VAR_6] = VAR_2;
 }
 FUNC_0();
 FUNC_2(VAR_3);

 return 0;
}
