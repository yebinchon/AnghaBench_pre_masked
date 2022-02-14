
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_layer_state {scalar_t__ uses_frontend; } ;
struct sun4i_layer {int id; struct sun4i_backend* backend; } ;
struct sun4i_frontend {int dummy; } ;
struct sun4i_backend {struct sun4i_frontend* frontend; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int state; } ;


 int VAR_0 ;
 struct sun4i_layer* FUNC_0 (struct drm_plane*) ;
 struct sun4i_layer_state* FUNC_1 (int ) ;
 int FUNC_2 (struct sun4i_backend*,int ) ;
 int FUNC_3 (struct sun4i_backend*,int ,int) ;
 int FUNC_4 (struct sun4i_backend*,int ,struct drm_plane*) ;
 int FUNC_5 (struct sun4i_backend*,int ,struct drm_plane*) ;
 int FUNC_6 (struct sun4i_backend*,int ,struct drm_plane*) ;
 int FUNC_7 (struct sun4i_backend*,int ,int ) ;
 int FUNC_8 (struct sun4i_backend*,int ,struct drm_plane*) ;
 int FUNC_9 (struct sun4i_frontend*) ;
 int FUNC_10 (struct sun4i_frontend*) ;
 int FUNC_11 (struct sun4i_frontend*,struct drm_plane*) ;
 int FUNC_12 (struct sun4i_frontend*,struct drm_plane*) ;
 int FUNC_13 (struct sun4i_frontend*,struct drm_plane*,int ) ;

__attribute__((used)) static void FUNC_14(struct drm_plane *VAR_1,
           struct drm_plane_state *VAR_2)
{
 struct sun4i_layer_state *VAR_3 = FUNC_1(VAR_1->state);
 struct sun4i_layer *VAR_4 = FUNC_0(VAR_1);
 struct sun4i_backend *VAR_5 = VAR_4->backend;
 struct sun4i_frontend *VAR_6 = VAR_5->frontend;

 FUNC_2(VAR_5, VAR_4->id);

 if (VAR_3->uses_frontend) {
  FUNC_10(VAR_6);
  FUNC_12(VAR_6, VAR_1);
  FUNC_11(VAR_6, VAR_1);
  FUNC_13(VAR_6, VAR_1,
           VAR_0);
  FUNC_7(VAR_5, VAR_4->id,
          VAR_0);
  FUNC_9(VAR_6);
 } else {
  FUNC_6(VAR_5, VAR_4->id, VAR_1);
  FUNC_4(VAR_5, VAR_4->id, VAR_1);
 }

 FUNC_5(VAR_5, VAR_4->id, VAR_1);
 FUNC_8(VAR_5, VAR_4->id, VAR_1);
 FUNC_3(VAR_5, VAR_4->id, 1);
}
