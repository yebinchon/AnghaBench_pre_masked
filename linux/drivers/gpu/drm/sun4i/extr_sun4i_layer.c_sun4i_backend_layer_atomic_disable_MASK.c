
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_layer_state {scalar_t__ uses_frontend; } ;
struct sun4i_layer {int id; struct sun4i_backend* backend; } ;
struct sun4i_backend {int frontend_teardown; int frontend_lock; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;


 struct sun4i_layer* FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct sun4i_layer_state* FUNC_3 (struct drm_plane_state*) ;
 int FUNC_4 (struct sun4i_backend*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_0,
            struct drm_plane_state *VAR_1)
{
 struct sun4i_layer_state *VAR_2 = FUNC_3(VAR_1);
 struct sun4i_layer *VAR_3 = FUNC_0(VAR_0);
 struct sun4i_backend *VAR_4 = VAR_3->backend;

 FUNC_4(VAR_4, VAR_3->id, 0);

 if (VAR_2->uses_frontend) {
  unsigned long VAR_5;

  FUNC_1(&VAR_4->frontend_lock, VAR_5);
  VAR_4->frontend_teardown = 1;
  FUNC_2(&VAR_4->frontend_lock, VAR_5);
 }
}
