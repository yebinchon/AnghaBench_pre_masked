
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_v2 {int cells; int wq; } ;
struct dm_bio_prison_cell_v2 {int node; int * quiesce_continuation; scalar_t__ exclusive_lock; int shared_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static bool FUNC_3(struct dm_bio_prison_v2 *VAR_0,
    struct dm_bio_prison_cell_v2 *VAR_1)
{
 FUNC_0(!VAR_1->shared_count);
 VAR_1->shared_count--;


 if (!VAR_1->shared_count) {
  if (VAR_1->exclusive_lock){
   if (VAR_1->quiesce_continuation) {
    FUNC_1(VAR_0->wq, VAR_1->quiesce_continuation);
    VAR_1->quiesce_continuation = ((void*)0);
   }
  } else {
   FUNC_2(&VAR_1->node, &VAR_0->cells);
   return 1;
  }
 }

 return 0;
}
