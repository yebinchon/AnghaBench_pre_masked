
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pages_per_area; scalar_t__ nr_areas; int lock; int ** areas; int level; int buf_size; int name; } ;
typedef TYPE_1__ debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int,scalar_t__,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static debug_info_t *FUNC_5(debug_info_t *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 debug_info_t *VAR_5;
 int VAR_6, VAR_7;


 do {
  VAR_5 = FUNC_0(VAR_2->name, VAR_2->pages_per_area,
   VAR_2->nr_areas, VAR_2->buf_size, VAR_2->level, VAR_3);
  FUNC_3(&VAR_2->lock, VAR_4);
  if (!VAR_5)
   goto out;

  if ((VAR_5->pages_per_area == VAR_2->pages_per_area) &&
      (VAR_5->nr_areas == VAR_2->nr_areas)) {
   break;
  }
  FUNC_4(&VAR_2->lock, VAR_4);
  FUNC_1(VAR_5);
 } while (1);

 if (VAR_3 == VAR_0)
  goto out;

 for (VAR_6 = 0; VAR_6 < VAR_2->nr_areas; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_2->pages_per_area; VAR_7++)
   FUNC_2(VAR_5->areas[VAR_6][VAR_7], VAR_2->areas[VAR_6][VAR_7], VAR_1);
 }
out:
 FUNC_4(&VAR_2->lock, VAR_4);
 return VAR_5;
}
