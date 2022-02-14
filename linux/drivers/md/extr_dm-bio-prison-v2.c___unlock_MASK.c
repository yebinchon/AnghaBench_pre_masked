
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_v2 {int cells; } ;
struct dm_bio_prison_cell_v2 {int node; scalar_t__ exclusive_lock; scalar_t__ shared_count; int bios; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio_list*,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool FUNC_4(struct dm_bio_prison_v2 *VAR_0,
       struct dm_bio_prison_cell_v2 *VAR_1,
       struct bio_list *VAR_2)
{
 FUNC_0(!VAR_1->exclusive_lock);

 FUNC_2(VAR_2, &VAR_1->bios);
 FUNC_1(&VAR_1->bios);

 if (VAR_1->shared_count) {
  VAR_1->exclusive_lock = 0;
  return 0;
 }

 FUNC_3(&VAR_1->node, &VAR_0->cells);
 return 1;
}
