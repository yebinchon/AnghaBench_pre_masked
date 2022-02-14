
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt_base {int requested; } ;
struct host1x {TYPE_1__* info; struct host1x_syncpt_base* bases; } ;
struct TYPE_2__ {unsigned int nb_bases; } ;



__attribute__((used)) static struct host1x_syncpt_base *
FUNC_0(struct host1x *VAR_0)
{
 struct host1x_syncpt_base *VAR_1 = VAR_0->bases;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->nb_bases; VAR_2++)
  if (!VAR_1[VAR_2].requested)
   break;

 if (VAR_2 >= VAR_0->info->nb_bases)
  return ((void*)0);

 VAR_1[VAR_2].requested = 1;
 return &VAR_1[VAR_2];
}
