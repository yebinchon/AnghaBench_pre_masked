
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int visible; int * fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct intel_plane {scalar_t__ id; } ;
struct TYPE_3__ {int active; } ;
struct intel_crtc_state {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 struct intel_plane* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const struct intel_crtc_state *VAR_1,
       const struct intel_plane_state *VAR_2)
{
 struct intel_plane *VAR_3 = FUNC_0(VAR_2->base.plane);


 if (!VAR_1->base.active)
  return 0;
 if (VAR_3->id == VAR_0)
  return VAR_2->base.fb != ((void*)0);
 else
  return VAR_2->base.visible;
}
