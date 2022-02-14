
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct agp_memory {int type; int page_count; int is_flushed; int * pages; } ;
struct _parisc_agp_info {int io_pages_per_kpage; int gatt_entries; scalar_t__* gatt; scalar_t__ io_page_size; } ;
typedef int off_t ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct TYPE_5__ {int (* tlb_flush ) (struct agp_memory*) ;scalar_t__ (* agp_type_to_mask_type ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int ) ;
 struct _parisc_agp_info VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*,unsigned long,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct agp_memory*) ;

__attribute__((used)) static int
FUNC_5(struct agp_memory *VAR_4, off_t VAR_5, int VAR_6)
{
 struct _parisc_agp_info *VAR_7 = &VAR_3;
 int VAR_8, VAR_9;
 off_t VAR_10, VAR_11;
 int VAR_12;

 if (VAR_6 != VAR_4->type ||
  VAR_2->driver->agp_type_to_mask_type(VAR_2, VAR_6)) {
  return -VAR_1;
 }

 VAR_11 = VAR_7->io_pages_per_kpage * VAR_5;
 VAR_12 = VAR_7->io_pages_per_kpage * VAR_4->page_count;
 if ((VAR_11 + VAR_12) > VAR_7->gatt_entries) {
  return -VAR_1;
 }

 VAR_10 = VAR_11;
 while (VAR_10 < (VAR_11 + VAR_12)) {
  if (VAR_7->gatt[VAR_10])
   return -VAR_0;
  VAR_10++;
 }

 if (!VAR_4->is_flushed) {
  FUNC_0();
  VAR_4->is_flushed = 1;
 }

 for (VAR_8 = 0, VAR_10 = VAR_11; VAR_8 < VAR_4->page_count; VAR_8++) {
  unsigned long VAR_13;

  VAR_13 = FUNC_1(VAR_4->pages[VAR_8]);
  for (VAR_9 = 0;
       VAR_9 < VAR_7->io_pages_per_kpage;
       VAR_9++, VAR_10++, VAR_13 += VAR_7->io_page_size) {
   VAR_7->gatt[VAR_10] =
    FUNC_2(VAR_2,
     VAR_13, VAR_6);
  }
 }

 VAR_2->driver->tlb_flush(VAR_4);

 return 0;
}
