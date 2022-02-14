
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct packing_data {size_t nr_objects; struct object_entry* objects; } ;
struct TYPE_2__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
struct island_bitmap {int dummy; } ;
typedef scalar_t__ khiter_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct island_bitmap*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct island_bitmap* FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct packing_data*,struct object_entry*,int) ;

int FUNC_5(struct packing_data *VAR_3)
{
 uint32_t VAR_4;

 if (!VAR_0 || !VAR_2)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_objects; ++VAR_4) {
  struct object_entry *VAR_5 = &VAR_3->objects[VAR_4];
  khiter_t VAR_6 = FUNC_2(VAR_2, VAR_5->idx.oid);

  FUNC_4(VAR_3, VAR_5, 1);

  if (VAR_6 < FUNC_1(VAR_2)) {
   struct island_bitmap *VAR_7 = FUNC_3(VAR_2, VAR_6);

   if (FUNC_0(VAR_7, VAR_1))
    FUNC_4(VAR_3, VAR_5, 0);
  }
 }

 return 2;
}
