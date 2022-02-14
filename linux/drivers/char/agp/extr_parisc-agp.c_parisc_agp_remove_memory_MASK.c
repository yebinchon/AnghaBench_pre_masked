
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct agp_memory {int type; int page_count; } ;
struct _parisc_agp_info {int io_pages_per_kpage; int * gatt; } ;
typedef int off_t ;
struct TYPE_5__ {TYPE_1__* driver; int scratch_page; } ;
struct TYPE_4__ {int (* tlb_flush ) (struct agp_memory*) ;scalar_t__ (* agp_type_to_mask_type ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct _parisc_agp_info VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct agp_memory*) ;

__attribute__((used)) static int
FUNC_2(struct agp_memory *VAR_3, off_t VAR_4, int VAR_5)
{
 struct _parisc_agp_info *VAR_6 = &VAR_2;
 int VAR_7, VAR_8, VAR_9;

 if (VAR_5 != VAR_3->type ||
  VAR_1->driver->agp_type_to_mask_type(VAR_1, VAR_5)) {
  return -VAR_0;
 }

 VAR_8 = VAR_6->io_pages_per_kpage * VAR_4;
 VAR_9 = VAR_6->io_pages_per_kpage * VAR_3->page_count;
 for (VAR_7 = VAR_8; VAR_7 < VAR_9 + VAR_8; VAR_7++) {
  VAR_6->gatt[VAR_7] = VAR_1->scratch_page;
 }

 VAR_1->driver->tlb_flush(VAR_3);
 return 0;
}
