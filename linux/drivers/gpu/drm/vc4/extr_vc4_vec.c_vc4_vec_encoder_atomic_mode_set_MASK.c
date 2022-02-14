
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_vec_encoder {struct vc4_vec* vec; } ;
struct vc4_vec {int * tv_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {size_t mode; } ;
struct drm_connector_state {TYPE_1__ tv; } ;


 struct vc4_vec_encoder* FUNC_0 (struct drm_encoder*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_1,
     struct drm_crtc_state *VAR_2,
     struct drm_connector_state *VAR_3)
{
 struct vc4_vec_encoder *VAR_4 = FUNC_0(VAR_1);
 struct vc4_vec *VAR_5 = VAR_4->vec;

 VAR_5->tv_mode = &VAR_0[VAR_3->tv.mode];
}
