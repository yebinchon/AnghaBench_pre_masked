
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct drm_private_obj {TYPE_7__* funcs; } ;
struct drm_plane {TYPE_5__* funcs; } ;
struct drm_mode_config {int num_crtc; int num_total_plane; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_crtc {TYPE_3__* funcs; } ;
struct drm_connector {TYPE_1__* funcs; } ;
struct drm_atomic_state {int num_connector; int num_private_objs; int * fake_commit; TYPE_8__* private_objs; TYPE_6__* planes; TYPE_4__* crtcs; TYPE_2__* connectors; struct drm_device* dev; } ;
struct TYPE_16__ {int * new_state; int * old_state; int * state; struct drm_private_obj* ptr; } ;
struct TYPE_15__ {int (* atomic_destroy_state ) (struct drm_private_obj*,int *) ;} ;
struct TYPE_14__ {int * new_state; int * old_state; int * state; struct drm_plane* ptr; } ;
struct TYPE_13__ {int (* atomic_destroy_state ) (struct drm_plane*,int *) ;} ;
struct TYPE_12__ {int * commit; int * new_state; int * old_state; int * state; struct drm_crtc* ptr; } ;
struct TYPE_11__ {int (* atomic_destroy_state ) (struct drm_crtc*,int *) ;} ;
struct TYPE_10__ {int * new_state; int * old_state; int * state; struct drm_connector* ptr; } ;
struct TYPE_9__ {int (* atomic_destroy_state ) (struct drm_connector*,int *) ;} ;


 int FUNC_0 (char*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (struct drm_crtc*,int *) ;
 int FUNC_5 (struct drm_plane*,int *) ;
 int FUNC_6 (struct drm_private_obj*,int *) ;

void FUNC_7(struct drm_atomic_state *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_mode_config *VAR_2 = &VAR_1->mode_config;
 int VAR_3;

 FUNC_0("Clearing atomic state %p\n", VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->num_connector; VAR_3++) {
  struct drm_connector *VAR_4 = VAR_0->connectors[VAR_3].ptr;

  if (!VAR_4)
   continue;

  VAR_4->funcs->atomic_destroy_state(VAR_4,
             VAR_0->connectors[VAR_3].state);
  VAR_0->connectors[VAR_3].ptr = ((void*)0);
  VAR_0->connectors[VAR_3].state = ((void*)0);
  VAR_0->connectors[VAR_3].old_state = ((void*)0);
  VAR_0->connectors[VAR_3].new_state = ((void*)0);
  FUNC_1(VAR_4);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_crtc; VAR_3++) {
  struct drm_crtc *VAR_5 = VAR_0->crtcs[VAR_3].ptr;

  if (!VAR_5)
   continue;

  VAR_5->funcs->atomic_destroy_state(VAR_5,
        VAR_0->crtcs[VAR_3].state);

  VAR_0->crtcs[VAR_3].ptr = ((void*)0);
  VAR_0->crtcs[VAR_3].state = ((void*)0);
  VAR_0->crtcs[VAR_3].old_state = ((void*)0);
  VAR_0->crtcs[VAR_3].new_state = ((void*)0);

  if (VAR_0->crtcs[VAR_3].commit) {
   FUNC_2(VAR_0->crtcs[VAR_3].commit);
   VAR_0->crtcs[VAR_3].commit = ((void*)0);
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_total_plane; VAR_3++) {
  struct drm_plane *VAR_6 = VAR_0->planes[VAR_3].ptr;

  if (!VAR_6)
   continue;

  VAR_6->funcs->atomic_destroy_state(VAR_6,
         VAR_0->planes[VAR_3].state);
  VAR_0->planes[VAR_3].ptr = ((void*)0);
  VAR_0->planes[VAR_3].state = ((void*)0);
  VAR_0->planes[VAR_3].old_state = ((void*)0);
  VAR_0->planes[VAR_3].new_state = ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->num_private_objs; VAR_3++) {
  struct drm_private_obj *VAR_7 = VAR_0->private_objs[VAR_3].ptr;

  VAR_7->funcs->atomic_destroy_state(VAR_7,
       VAR_0->private_objs[VAR_3].state);
  VAR_0->private_objs[VAR_3].ptr = ((void*)0);
  VAR_0->private_objs[VAR_3].state = ((void*)0);
  VAR_0->private_objs[VAR_3].old_state = ((void*)0);
  VAR_0->private_objs[VAR_3].new_state = ((void*)0);
 }
 VAR_0->num_private_objs = 0;

 if (VAR_0->fake_commit) {
  FUNC_2(VAR_0->fake_commit);
  VAR_0->fake_commit = ((void*)0);
 }
}
