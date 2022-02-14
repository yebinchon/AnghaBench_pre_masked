
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct dm_crtc_state {scalar_t__ stream; } ;


 int FUNC_0 (struct drm_crtc_state*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_crtc_state*) ;
 struct dm_crtc_state* FUNC_3 (struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0,
      struct drm_crtc_state *VAR_1)
{
 struct dm_crtc_state *VAR_2 = FUNC_3(VAR_1);


 if (VAR_2->stream)
  FUNC_1(VAR_2->stream);


 FUNC_0(VAR_1);


 FUNC_2(VAR_1);
}
