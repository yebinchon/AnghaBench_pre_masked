
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {scalar_t__ last_target_nr_elts; scalar_t__ nr_elts; scalar_t__ nr_top_levels; scalar_t__ nr_levels; scalar_t__ nr_in_top_levels; } ;


 int FUNC_0 (struct queue*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct queue *VAR_0)
{
 if (VAR_0->last_target_nr_elts == VAR_0->nr_elts)
  return;

 VAR_0->last_target_nr_elts = VAR_0->nr_elts;

 if (VAR_0->nr_top_levels > VAR_0->nr_levels)
  FUNC_0(VAR_0, VAR_0->nr_elts, 0, VAR_0->nr_levels);

 else {
  FUNC_0(VAR_0, VAR_0->nr_in_top_levels,
     VAR_0->nr_levels - VAR_0->nr_top_levels, VAR_0->nr_levels);

  if (VAR_0->nr_in_top_levels < VAR_0->nr_elts)
   FUNC_0(VAR_0, VAR_0->nr_elts - VAR_0->nr_in_top_levels,
      0, VAR_0->nr_levels - VAR_0->nr_top_levels);
  else
   FUNC_0(VAR_0, 0, 0, VAR_0->nr_levels - VAR_0->nr_top_levels);
 }
}
