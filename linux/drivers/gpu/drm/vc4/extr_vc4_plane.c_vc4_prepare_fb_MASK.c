
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_bo {int dummy; } ;
struct drm_plane_state {scalar_t__ fb; } ;
struct drm_plane {TYPE_1__* state; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {scalar_t__ fb; } ;


 TYPE_2__* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct drm_plane*,struct drm_plane_state*) ;
 struct vc4_bo* FUNC_2 (int *) ;
 int FUNC_3 (struct vc4_bo*) ;

__attribute__((used)) static int FUNC_4(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct vc4_bo *VAR_2;
 int VAR_3;

 if (!VAR_1->fb)
  return 0;

 VAR_2 = FUNC_2(&FUNC_0(VAR_1->fb, 0)->base);

 FUNC_1(VAR_0, VAR_1);

 if (VAR_0->state->fb == VAR_1->fb)
  return 0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
