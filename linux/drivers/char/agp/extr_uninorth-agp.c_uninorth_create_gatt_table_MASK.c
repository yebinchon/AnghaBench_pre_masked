
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct agp_bridge_data {int aperture_size_idx; int* gatt_table; int gatt_bus_addr; int * gatt_table_real; void* current_size; TYPE_1__* driver; } ;
struct TYPE_8__ {int size; int page_order; int num_entries; } ;
struct TYPE_7__ {int scratch_page_page; } ;
struct TYPE_6__ {struct page** pages_arr; } ;
struct TYPE_5__ {scalar_t__ size_type; int num_aperture_sizes; } ;


 void* FUNC_0 (struct agp_bridge_data*) ;
 TYPE_4__* FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 TYPE_3__* VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned long,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (struct page**) ;
 struct page** FUNC_8 (int,int,int ) ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 struct page* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int* FUNC_12 (struct page**,int,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct agp_bridge_data *VAR_11)
{
 char *VAR_12;
 char *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 void *VAR_18;
 struct page *VAR_19;


 if (VAR_11->driver->size_type == VAR_3)
  return -VAR_0;

 VAR_12 = ((void*)0);
 VAR_17 = VAR_11->aperture_size_idx;
 VAR_18 = VAR_11->current_size;
 VAR_14 = VAR_15 = VAR_16 = 0;

 do {
  VAR_14 = FUNC_1(VAR_18)->size;
  VAR_15 = FUNC_1(VAR_18)->page_order;
  VAR_16 = FUNC_1(VAR_18)->num_entries;

  VAR_12 = (char *) FUNC_3(VAR_2, VAR_15);

  if (VAR_12 == ((void*)0)) {
   VAR_17++;
   VAR_11->current_size = FUNC_0(VAR_11);
  } else {
   VAR_11->aperture_size_idx = VAR_17;
  }
 } while (!VAR_12 && (VAR_17 < VAR_11->driver->num_aperture_sizes));

 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_10.pages_arr = FUNC_8(1 << VAR_15,
      sizeof(struct page *),
      VAR_2);
 if (VAR_10.pages_arr == ((void*)0))
  goto enomem;

 VAR_13 = VAR_12 + ((VAR_6 * (1 << VAR_15)) - 1);

 for (VAR_19 = FUNC_10(VAR_12), VAR_17 = 0; VAR_19 <= FUNC_10(VAR_13);
      VAR_19++, VAR_17++) {
  FUNC_2(VAR_19);
  VAR_10.pages_arr[VAR_17] = VAR_19;
 }

 VAR_11->gatt_table_real = (u32 *) VAR_12;

 FUNC_5((unsigned long)VAR_12,
      (unsigned long)VAR_13 + 1);
 VAR_11->gatt_table = FUNC_12(VAR_10.pages_arr, (1 << VAR_15), 0, VAR_4);

 if (VAR_11->gatt_table == ((void*)0))
  goto enomem;

 VAR_11->gatt_bus_addr = FUNC_11(VAR_12);

 if (VAR_8)
  VAR_9 = (FUNC_9(VAR_7->scratch_page_page) >> VAR_5) | 0x80000000UL;
 else
  VAR_9 = FUNC_4((FUNC_9(VAR_7->scratch_page_page) & 0xFFFFF000UL) |
    0x1UL);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
  VAR_11->gatt_table[VAR_17] = VAR_9;

 return 0;

enomem:
 FUNC_7(VAR_10.pages_arr);
 if (VAR_12)
  FUNC_6((unsigned long)VAR_12, VAR_15);
 return -VAR_1;
}
