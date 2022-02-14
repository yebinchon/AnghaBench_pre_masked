
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int type; } ;
struct dm_table {int num_targets; struct dm_target* targets; } ;


 int FUNC_0 (int ) ;

struct dm_target *FUNC_1(struct dm_table *VAR_0)
{

 if (VAR_0->num_targets > 1 ||
     !FUNC_0(VAR_0->targets[0].type))
  return ((void*)0);

 return VAR_0->targets;
}
