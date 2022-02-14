
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct agp_memory {int type; int page_count; int is_flushed; int * pages; int bridge; } ;
typedef int off_t ;
struct TYPE_8__ {int num_active_entries; scalar_t__ pg_offset; } ;
struct TYPE_7__ {TYPE_1__* driver; scalar_t__ gatt_table; } ;
struct TYPE_6__ {int (* tlb_flush ) (struct agp_memory*) ;int (* mask_memory ) (TYPE_2__*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 () ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (struct agp_memory*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct agp_memory *VAR_6, off_t VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_6->bridge, VAR_8);
 if (VAR_11 != 0 || VAR_8 != VAR_6->type)
  return -VAR_1;

 if (VAR_6->page_count == 0)
  return 0;

 if ((VAR_7 + VAR_6->page_count) >
  (VAR_5.num_active_entries - VAR_4/VAR_2))
  return -VAR_1;

 for (VAR_10 = VAR_7; VAR_10 < (VAR_7 + VAR_6->page_count); VAR_10++) {
  if (!FUNC_0(VAR_3, FUNC_4(VAR_3->gatt_table+VAR_5.pg_offset+VAR_10)))
   return -VAR_0;
 }

 if (!VAR_6->is_flushed) {
  FUNC_2();
  VAR_6->is_flushed = 1;
 }
 for (VAR_9 = 0, VAR_10 = VAR_7; VAR_9 < VAR_6->page_count; VAR_9++, VAR_10++) {
  FUNC_7(VAR_3->driver->mask_memory(VAR_3,
          FUNC_3(VAR_6->pages[VAR_9]), VAR_11),
   VAR_3->gatt_table+VAR_5.pg_offset+VAR_10);
 }


 FUNC_4(VAR_3->gatt_table+VAR_5.pg_offset+VAR_10 - 1);

 VAR_3->driver->tlb_flush(VAR_6);
 return 0;
}
