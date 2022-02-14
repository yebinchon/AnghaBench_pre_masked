
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct agp_bridge_data {scalar_t__ gatt_table_real; int gatt_table; void* current_size; } ;
struct TYPE_4__ {int page_order; } ;
struct TYPE_3__ {int pages_arr; } ;


 TYPE_2__* FUNC_0 (void*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (int ) ;
 TYPE_1__ VAR_1 ;
 struct page* FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct agp_bridge_data *VAR_2)
{
 int VAR_3;
 char *VAR_4, *VAR_5;
 void *VAR_6;
 struct page *VAR_7;

 VAR_6 = VAR_2->current_size;
 VAR_3 = FUNC_0(VAR_6)->page_order;






 FUNC_5(VAR_2->gatt_table);
 FUNC_3(VAR_1.pages_arr);
 VAR_4 = (char *) VAR_2->gatt_table_real;
 VAR_5 = VAR_4 + ((VAR_0 * (1 << VAR_3)) - 1);

 for (VAR_7 = FUNC_4(VAR_4); VAR_7 <= FUNC_4(VAR_5); VAR_7++)
  FUNC_1(VAR_7);

 FUNC_2((unsigned long) VAR_2->gatt_table_real, VAR_3);

 return 0;
}
