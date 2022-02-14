
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct sun4i_layer {struct sun4i_backend* backend; } ;
struct sun4i_backend {int frontend; } ;
struct drm_plane_state {TYPE_2__* fb; int plane; } ;
struct TYPE_4__ {int modifier; TYPE_1__* format; } ;
struct TYPE_3__ {int format; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct sun4i_layer* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_plane_state*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct drm_plane_state *VAR_0)
{
 struct sun4i_layer *VAR_1 = FUNC_1(VAR_0->plane);
 struct sun4i_backend *VAR_2 = VAR_1->backend;
 uint32_t VAR_3 = VAR_0->fb->format->format;
 uint64_t VAR_4 = VAR_0->fb->modifier;

 if (FUNC_0(VAR_2->frontend))
  return 0;

 if (!FUNC_4(VAR_3, VAR_4))
  return 0;

 if (!FUNC_2(VAR_3, VAR_4))
  return 1;
 if (FUNC_3(VAR_0))
  return 1;





 return 0;
}
