
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int type; int page_count; int * pages; } ;
typedef int off_t ;
struct TYPE_9__ {int num_entries; } ;
struct TYPE_8__ {TYPE_2__* dev; int * gatt_table; void* current_size; TYPE_1__* driver; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int (* agp_type_to_mask_type ) (TYPE_3__*,int) ;} ;


 TYPE_5__* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,int) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (struct agp_memory*) ;

__attribute__((used)) static int FUNC_9(struct agp_memory *VAR_6, off_t VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 void *VAR_11;
 u32 *VAR_12;
 int VAR_13;

 if (VAR_8 != VAR_6->type)
  return -VAR_1;

 VAR_13 = VAR_3->driver->agp_type_to_mask_type(VAR_3, VAR_8);
 if (VAR_13 != 0) {

  return -VAR_1;
 }

 if (VAR_6->page_count == 0)
  return 0;

 VAR_11 = VAR_3->current_size;
 VAR_10 = FUNC_0(VAR_11)->num_entries;

 if ((VAR_7 + VAR_6->page_count) > VAR_10)
  return -VAR_1;

 VAR_12 = (u32 *) &VAR_3->gatt_table[VAR_7];
 for (VAR_9 = 0; VAR_9 < VAR_6->page_count; ++VAR_9) {
  if (VAR_12[VAR_9] != VAR_5) {
   FUNC_3(&VAR_3->dev->dev,
     "uninorth_insert_memory: entry 0x%x occupied (%x)\n",
     VAR_9, VAR_12[VAR_9]);
   return -VAR_0;
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->page_count; VAR_9++) {
  if (VAR_4)
   VAR_12[VAR_9] = (FUNC_6(VAR_6->pages[VAR_9]) >> VAR_2) | 0x80000000UL;
  else
   VAR_12[VAR_9] = FUNC_2((FUNC_6(VAR_6->pages[VAR_9]) & 0xFFFFF000UL) |
         0x1UL);
  FUNC_4((unsigned long)FUNC_1(FUNC_6(VAR_6->pages[VAR_9])),
       (unsigned long)FUNC_1(FUNC_6(VAR_6->pages[VAR_9]))+0x1000);
 }
 FUNC_5();
 FUNC_8(VAR_6);

 return 0;
}
