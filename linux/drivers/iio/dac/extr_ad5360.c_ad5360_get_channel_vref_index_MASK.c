
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad5360_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {unsigned int channels_per_group; unsigned int num_vrefs; } ;



__attribute__((used)) static unsigned int FUNC_0(struct ad5360_state *VAR_0,
 unsigned int VAR_1)
{
 unsigned int VAR_2;



 VAR_2 = VAR_1 / VAR_0->chip_info->channels_per_group;
 if (VAR_2 >= VAR_0->chip_info->num_vrefs)
  VAR_2 = VAR_0->chip_info->num_vrefs - 1;

 return VAR_2;
}
