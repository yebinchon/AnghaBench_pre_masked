
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ visible; scalar_t__ rotation; int dst; int src; TYPE_1__* fb; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_3__ {scalar_t__ modifier; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(const struct intel_plane_state *VAR_0,
     struct intel_plane_state *VAR_1)
{

 if (VAR_1->base.visible != VAR_0->base.visible)
  return 1;

 if (!VAR_0->base.fb || !VAR_1->base.fb)
  return 0;

 if (VAR_0->base.fb->modifier != VAR_1->base.fb->modifier ||
     VAR_0->base.rotation != VAR_1->base.rotation ||
     FUNC_1(&VAR_1->base.src) != FUNC_1(&VAR_0->base.src) ||
     FUNC_0(&VAR_1->base.src) != FUNC_0(&VAR_0->base.src) ||
     FUNC_1(&VAR_1->base.dst) != FUNC_1(&VAR_0->base.dst) ||
     FUNC_0(&VAR_1->base.dst) != FUNC_0(&VAR_0->base.dst))
  return 1;

 return 0;
}
