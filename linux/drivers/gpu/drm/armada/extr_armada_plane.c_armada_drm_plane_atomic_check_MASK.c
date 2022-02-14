
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int y1; int y2; int x1; } ;
struct drm_plane_state {int visible; TYPE_2__ dst; TYPE_2__ src; scalar_t__ state; struct drm_crtc* crtc; int fb; } ;
struct drm_plane {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct drm_crtc_state {TYPE_1__ adjusted_mode; } ;
struct drm_crtc {struct drm_crtc_state* state; } ;
struct armada_plane_state {int src_hw; int dst_yx; int dst_hw; int interlace; int pitches; int addrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_plane_state*,int ,int ,int) ;
 struct drm_crtc_state* FUNC_2 (scalar_t__,struct drm_crtc*) ;
 int FUNC_3 (struct drm_plane_state*,struct drm_crtc_state*,int ,int ,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct armada_plane_state* FUNC_6 (struct drm_plane_state*) ;

int FUNC_7(struct drm_plane *VAR_3,
 struct drm_plane_state *VAR_4)
{
 struct armada_plane_state *VAR_5 = FUNC_6(VAR_4);
 struct drm_crtc *VAR_6 = VAR_4->crtc;
 struct drm_crtc_state *VAR_7;
 bool VAR_8;
 int VAR_9;

 if (!VAR_4->fb || FUNC_0(!VAR_4->crtc)) {
  VAR_4->visible = 0;
  return 0;
 }

 if (VAR_4->state)
  VAR_7 = FUNC_2(VAR_4->state, VAR_6);
 else
  VAR_7 = VAR_6->state;

 VAR_9 = FUNC_3(VAR_4, VAR_7, 0,
        VAR_2, 1, 0);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7->adjusted_mode.flags & VAR_0;
 if (VAR_8) {
  if ((VAR_4->dst.y1 | VAR_4->dst.y2) & 1)
   return -VAR_1;
  VAR_5->src_hw = FUNC_4(&VAR_4->src) >> 17;
  VAR_5->dst_yx = VAR_4->dst.y1 >> 1;
  VAR_5->dst_hw = FUNC_4(&VAR_4->dst) >> 1;
 } else {
  VAR_5->src_hw = FUNC_4(&VAR_4->src) >> 16;
  VAR_5->dst_yx = VAR_4->dst.y1;
  VAR_5->dst_hw = FUNC_4(&VAR_4->dst);
 }

 VAR_5->src_hw <<= 16;
 VAR_5->src_hw |= FUNC_5(&VAR_4->src) >> 16;
 VAR_5->dst_yx <<= 16;
 VAR_5->dst_yx |= VAR_4->dst.x1 & 0x0000ffff;
 VAR_5->dst_hw <<= 16;
 VAR_5->dst_hw |= FUNC_5(&VAR_4->dst) & 0x0000ffff;

 FUNC_1(VAR_4, VAR_5->addrs, VAR_5->pitches, VAR_8);
 VAR_5->interlace = VAR_8;

 return 0;
}
