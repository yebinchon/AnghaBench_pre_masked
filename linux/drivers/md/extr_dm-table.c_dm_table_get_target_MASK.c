
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int dummy; } ;
struct dm_table {unsigned int num_targets; struct dm_target* targets; } ;



struct dm_target *FUNC_0(struct dm_table *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 >= VAR_0->num_targets)
  return ((void*)0);

 return VAR_0->targets + VAR_1;
}
