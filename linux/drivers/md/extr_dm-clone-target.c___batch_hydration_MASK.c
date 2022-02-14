
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_region_hydration {scalar_t__ region_nr; int list; struct clone* clone; } ;
struct clone {int hydration_batch_size; } ;
struct batch_info {unsigned int nr_batched_regions; struct dm_clone_region_hydration* head; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_clone_region_hydration*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct batch_info *VAR_0,
         struct dm_clone_region_hydration *VAR_1)
{
 struct clone *VAR_2 = VAR_1->clone;
 unsigned int VAR_3 = FUNC_1(VAR_2->hydration_batch_size);

 if (VAR_0->head) {

  if (VAR_0->nr_batched_regions < VAR_3 &&
      (VAR_0->head->region_nr + VAR_0->nr_batched_regions) == VAR_1->region_nr) {
   FUNC_3(&VAR_1->list, &VAR_0->head->list);
   VAR_0->nr_batched_regions++;
   VAR_1 = ((void*)0);
  }


  if (VAR_0->nr_batched_regions >= VAR_3 || VAR_1) {
   FUNC_2(VAR_0->head, VAR_0->nr_batched_regions);
   VAR_0->head = ((void*)0);
   VAR_0->nr_batched_regions = 0;
  }
 }

 if (!VAR_1)
  return;


 if (VAR_3 <= 1) {
  FUNC_2(VAR_1, 1);
  return;
 }


 FUNC_0(!FUNC_4(&VAR_1->list));
 VAR_0->head = VAR_1;
 VAR_0->nr_batched_regions = 1;
}
