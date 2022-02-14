
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_areas; int pages_per_area; int lock; scalar_t__*** areas; scalar_t__* active_pages; scalar_t__* active_entries; scalar_t__ active_area; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(debug_info_t *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_2 || !VAR_2->areas)
  return;
 FUNC_1(&VAR_2->lock, VAR_4);
 if (VAR_3 == VAR_0) {
  VAR_2->active_area = 0;
  FUNC_0(VAR_2->active_entries, 0, VAR_2->nr_areas * sizeof(int));
  for (VAR_5 = 0; VAR_5 < VAR_2->nr_areas; VAR_5++) {
   VAR_2->active_pages[VAR_5] = 0;
   for (VAR_6 = 0; VAR_6 < VAR_2->pages_per_area; VAR_6++)
    FUNC_0(VAR_2->areas[VAR_5][VAR_6], 0, VAR_1);
  }
 } else if (VAR_3 >= 0 && VAR_3 < VAR_2->nr_areas) {
  VAR_2->active_entries[VAR_3] = 0;
  VAR_2->active_pages[VAR_3] = 0;
  for (VAR_5 = 0; VAR_5 < VAR_2->pages_per_area; VAR_5++)
   FUNC_0(VAR_2->areas[VAR_3][VAR_5], 0, VAR_1);
 }
 FUNC_2(&VAR_2->lock, VAR_4);
}
