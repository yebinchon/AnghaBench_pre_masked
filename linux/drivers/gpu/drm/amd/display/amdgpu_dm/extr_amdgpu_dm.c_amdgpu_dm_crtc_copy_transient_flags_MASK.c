
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct dc_stream_state {int mode_changed; } ;


 int FUNC_0 (struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc_state *VAR_0,
      struct dc_stream_state *VAR_1)
{
 VAR_1->mode_changed = FUNC_0(VAR_0);
}
