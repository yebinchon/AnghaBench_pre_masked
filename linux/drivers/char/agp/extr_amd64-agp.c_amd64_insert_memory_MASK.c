
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef long long u32 ;
struct agp_memory {int type; unsigned long page_count; int is_flushed; int * pages; struct agp_bridge_data* bridge; } ;
struct agp_bridge_data {TYPE_1__* driver; } ;
typedef int off_t ;
struct TYPE_8__ {scalar_t__ gatt_table; TYPE_2__* driver; } ;
struct TYPE_7__ {long long (* mask_memory ) (TYPE_3__*,int ,int) ;} ;
struct TYPE_6__ {int (* agp_type_to_mask_type ) (struct agp_bridge_data*,int) ;} ;


 int FUNC_0 (long long) ;
 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_3__* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct agp_memory*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct agp_bridge_data*,int) ;
 long long FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (long long,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct agp_memory *VAR_5, off_t VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 long long VAR_11;
 int VAR_12;
 struct agp_bridge_data *VAR_13 = VAR_5->bridge;
 u32 VAR_14;

 VAR_10 = FUNC_2();

 if (VAR_7 != VAR_5->type)
  return -VAR_1;
 VAR_12 = VAR_13->driver->agp_type_to_mask_type(VAR_13, VAR_7);
 if (VAR_12 != 0)
  return -VAR_1;




 if (((unsigned long)VAR_6 + VAR_5->page_count) > VAR_10)
  return -VAR_1;

 VAR_9 = VAR_6;


 while (VAR_9 < (VAR_6 + VAR_5->page_count)) {
  if (!FUNC_1(VAR_4, FUNC_6(VAR_4->gatt_table+VAR_9)))
   return -VAR_0;
  VAR_9++;
 }

 if (!VAR_5->is_flushed) {
  FUNC_4();
  VAR_5->is_flushed = 1;
 }

 for (VAR_8 = 0, VAR_9 = VAR_6; VAR_8 < VAR_5->page_count; VAR_8++, VAR_9++) {
  VAR_11 = VAR_4->driver->mask_memory(VAR_4,
            FUNC_5(VAR_5->pages[VAR_8]),
            VAR_12);

  FUNC_0(VAR_11 & 0xffffff0000000ffcULL);
  VAR_14 = (VAR_11 & 0x000000ff00000000ULL) >> 28;
  VAR_14 |=(VAR_11 & 0x00000000fffff000ULL);
  VAR_14 |= VAR_3 | VAR_2;

  FUNC_9(VAR_14, VAR_4->gatt_table+VAR_9);
  FUNC_6(VAR_4->gatt_table+VAR_9);
 }
 FUNC_3(VAR_5);
 return 0;
}
