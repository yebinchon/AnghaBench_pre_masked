
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {unsigned int nr_levels; unsigned int* target_count; unsigned int last_target_nr_elts; unsigned int nr_top_levels; unsigned int nr_in_top_levels; scalar_t__ qs; scalar_t__ nr_elts; struct entry_space* es; } ;
struct entry_space {int dummy; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct queue *VAR_0, struct entry_space *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;

 VAR_0->es = VAR_1;
 VAR_0->nr_elts = 0;
 VAR_0->nr_levels = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_levels; VAR_3++) {
  FUNC_0(VAR_0->qs + VAR_3);
  VAR_0->target_count[VAR_3] = 0u;
 }

 VAR_0->last_target_nr_elts = 0u;
 VAR_0->nr_top_levels = 0u;
 VAR_0->nr_in_top_levels = 0u;
}
