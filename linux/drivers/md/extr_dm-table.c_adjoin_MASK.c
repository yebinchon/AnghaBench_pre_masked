
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {scalar_t__ begin; scalar_t__ len; } ;
struct dm_table {int num_targets; struct dm_target* targets; } ;



__attribute__((used)) static int FUNC_0(struct dm_table *VAR_0, struct dm_target *VAR_1)
{
 struct dm_target *VAR_2;

 if (!VAR_0->num_targets)
  return !VAR_1->begin;

 VAR_2 = &VAR_0->targets[VAR_0->num_targets - 1];
 return (VAR_1->begin == (VAR_2->begin + VAR_2->len));
}
