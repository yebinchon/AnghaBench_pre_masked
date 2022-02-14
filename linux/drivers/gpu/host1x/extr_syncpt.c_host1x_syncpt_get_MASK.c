
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt {int dummy; } ;
struct host1x {struct host1x_syncpt* syncpt; TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int nb_pts; } ;



struct host1x_syncpt *FUNC_0(struct host1x *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 >= VAR_0->info->nb_pts)
  return ((void*)0);

 return VAR_0->syncpt + VAR_1;
}
