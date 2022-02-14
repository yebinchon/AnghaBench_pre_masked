
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_plane_state {scalar_t__* x_scaling; scalar_t__* y_scaling; unsigned int membus_load; int hvs_load; unsigned int* src_h; int crtc_h; unsigned int* src_w; int crtc_w; } ;
struct drm_plane_state {int crtc; int state; struct drm_framebuffer* fb; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct drm_crtc_state {int adjusted_mode; } ;
struct TYPE_2__ {unsigned int num_planes; unsigned int* cpp; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 scalar_t__ VAR_0 ;
 struct drm_crtc_state* FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int *) ;
 struct vc4_plane_state* FUNC_3 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane_state *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 struct drm_framebuffer *VAR_5 = VAR_1->fb;
 struct vc4_plane_state *VAR_6;
 struct drm_crtc_state *VAR_7;
 unsigned int VAR_8;

 VAR_6 = FUNC_3(VAR_1);
 VAR_7 = FUNC_1(VAR_1->state,
       VAR_1->crtc);
 VAR_3 = FUNC_2(&VAR_7->adjusted_mode);
 if (VAR_6->x_scaling[0] != VAR_0 ||
     VAR_6->x_scaling[1] != VAR_0 ||
     VAR_6->y_scaling[0] != VAR_0 ||
     VAR_6->y_scaling[1] != VAR_0)
  VAR_2 = 1;
 else
  VAR_2 = 2;

 VAR_6->membus_load = 0;
 VAR_6->hvs_load = 0;
 for (VAR_4 = 0; VAR_4 < VAR_5->format->num_planes; VAR_4++) {
  VAR_8 = FUNC_0(VAR_6->src_h[VAR_4],
          VAR_6->crtc_h);
  VAR_6->membus_load += VAR_6->src_w[VAR_4] *
       VAR_6->src_h[VAR_4] * VAR_8 *
       VAR_5->format->cpp[VAR_4];
  VAR_6->hvs_load += VAR_6->crtc_h * VAR_6->crtc_w;
 }

 VAR_6->hvs_load *= VAR_3;
 VAR_6->hvs_load >>= VAR_2;
 VAR_6->membus_load *= VAR_3;
}
