
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt {int name; } ;
struct host1x {TYPE_1__* info; struct host1x_syncpt* syncpt; } ;
struct TYPE_2__ {unsigned int nb_pts; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct host1x *VAR_0)
{
 struct host1x_syncpt *VAR_1 = VAR_0->syncpt;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->nb_pts; VAR_2++, VAR_1++)
  FUNC_0(VAR_1->name);
}
