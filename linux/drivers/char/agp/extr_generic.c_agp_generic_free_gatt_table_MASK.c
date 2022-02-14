
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_bridge_data {scalar_t__ gatt_bus_addr; int * gatt_table_real; int * gatt_table; TYPE_1__* driver; void* current_size; } ;
struct TYPE_10__ {int page_order; } ;
struct TYPE_9__ {int page_order; } ;
struct TYPE_8__ {int page_order; } ;
struct TYPE_7__ {int page_order; } ;
struct TYPE_6__ {int size_type; } ;


 TYPE_5__* FUNC_0 (void*) ;
 TYPE_4__* FUNC_1 (void*) ;
 TYPE_3__* FUNC_2 (void*) ;
 TYPE_2__* FUNC_3 (void*) ;
 int FUNC_4 (struct page*) ;
 int VAR_0 ;


 int VAR_1 ;



 int * VAR_2 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned long,int) ;
 struct page* FUNC_8 (char*) ;

int FUNC_9(struct agp_bridge_data *VAR_3)
{
 int VAR_4;
 char *VAR_5, *VAR_6;
 void *VAR_7;
 struct page *VAR_8;

 VAR_7 = VAR_3->current_size;

 switch (VAR_3->driver->size_type) {
 case 128:
  VAR_4 = FUNC_2(VAR_7)->page_order;
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_7)->page_order;
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_7)->page_order;
  break;
 case 132:
  VAR_4 = FUNC_3(VAR_7)->page_order;
  break;
 case 131:

  return -VAR_0;
 default:
  VAR_4 = 0;
  break;
 }
 FUNC_6(VAR_3->gatt_table);

 VAR_5 = (char *) VAR_3->gatt_table_real;
 VAR_6 = VAR_5 + ((VAR_1 * (1 << VAR_4)) - 1);

 for (VAR_8 = FUNC_8(VAR_5); VAR_8 <= FUNC_8(VAR_6); VAR_8++)
  FUNC_4(VAR_8);

 FUNC_5(VAR_3->gatt_table_real, VAR_4);

 VAR_2 = ((void*)0);
 VAR_3->gatt_table = ((void*)0);
 VAR_3->gatt_table_real = ((void*)0);
 VAR_3->gatt_bus_addr = 0;

 return 0;
}
