
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qxl_bo {TYPE_3__* shadow; } ;
struct drm_plane_state {TYPE_4__* fb; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_8__ {struct drm_gem_object** obj; } ;
struct TYPE_6__ {int base; } ;
struct TYPE_7__ {TYPE_2__ tbo; } ;
struct TYPE_5__ {TYPE_4__* fb; } ;


 int FUNC_0 (int *) ;
 struct qxl_bo* FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct qxl_bo*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct drm_gem_object *VAR_2;
 struct qxl_bo *VAR_3;

 if (!VAR_1->fb) {




  return;
 }

 VAR_2 = VAR_1->fb->obj[0];
 VAR_3 = FUNC_1(VAR_2);
 FUNC_2(VAR_3);

 if (VAR_1->fb != VAR_0->state->fb && VAR_3->shadow) {
  FUNC_0(&VAR_3->shadow->tbo.base);
  VAR_3->shadow = ((void*)0);
 }
}
