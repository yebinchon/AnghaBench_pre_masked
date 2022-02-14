
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sun4i_frontend {int regs; } ;
struct drm_plane_state {int crtc_w; int crtc_h; int src_w; int src_h; struct drm_framebuffer* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int vsub; int hsub; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;

void FUNC_6(struct sun4i_frontend *VAR_10,
     struct drm_plane *VAR_11)
{
 struct drm_plane_state *VAR_12 = VAR_11->state;
 struct drm_framebuffer *VAR_13 = VAR_12->fb;
 uint32_t VAR_14, VAR_15;
 uint32_t VAR_16, VAR_17;


 FUNC_1("Frontend size W: %u H: %u\n",
    VAR_12->crtc_w, VAR_12->crtc_h);

 VAR_14 = VAR_12->src_w >> 16;
 VAR_15 = VAR_12->src_h >> 16;

 VAR_16 = FUNC_0(VAR_14, VAR_13->format->hsub);
 VAR_17 = FUNC_0(VAR_15, VAR_13->format->vsub);

 FUNC_4(VAR_10->regs, VAR_1,
       FUNC_2(VAR_15, VAR_14));
 FUNC_4(VAR_10->regs, VAR_5,
       FUNC_2(VAR_17, VAR_16));

 FUNC_4(VAR_10->regs, VAR_2,
       FUNC_3(VAR_12->crtc_h, VAR_12->crtc_w));
 FUNC_4(VAR_10->regs, VAR_6,
       FUNC_3(VAR_12->crtc_h, VAR_12->crtc_w));

 FUNC_4(VAR_10->regs, VAR_0,
       (VAR_14 << 16) / VAR_12->crtc_w);
 FUNC_4(VAR_10->regs, VAR_4,
       (VAR_16 << 16) / VAR_12->crtc_w);

 FUNC_4(VAR_10->regs, VAR_3,
       (VAR_15 << 16) / VAR_12->crtc_h);
 FUNC_4(VAR_10->regs, VAR_7,
       (VAR_17 << 16) / VAR_12->crtc_h);

 FUNC_5(VAR_10->regs, VAR_8,
     VAR_9,
     VAR_9);
}
