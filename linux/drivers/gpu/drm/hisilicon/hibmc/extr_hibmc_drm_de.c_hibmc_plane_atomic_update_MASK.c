
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hibmc_framebuffer {int obj; } ;
struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_plane_state {TYPE_3__* fb; } ;
struct drm_plane {TYPE_1__* dev; struct drm_plane_state* state; } ;
struct drm_gem_vram_object {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_6__ {int width; TYPE_2__* format; } ;
struct TYPE_5__ {int* cpp; } ;
struct TYPE_4__ {struct hibmc_drm_private* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int,unsigned int) ;
 struct drm_gem_vram_object* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_gem_vram_object*) ;
 int FUNC_5 (struct drm_gem_vram_object*,int ) ;
 int FUNC_6 (struct drm_gem_vram_object*) ;
 int FUNC_7 (scalar_t__) ;
 struct hibmc_framebuffer* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct drm_plane *VAR_8,
          struct drm_plane_state *VAR_9)
{
 struct drm_plane_state *VAR_10 = VAR_8->state;
 u32 VAR_11;
 int VAR_12;
 s64 VAR_13 = 0;
 unsigned int VAR_14;
 struct hibmc_drm_private *VAR_15 = VAR_8->dev->dev_private;
 struct hibmc_framebuffer *VAR_16;
 struct drm_gem_vram_object *VAR_17;

 if (!VAR_10->fb)
  return;

 VAR_16 = FUNC_8(VAR_10->fb);
 VAR_17 = FUNC_3(VAR_16->obj);

 VAR_12 = FUNC_5(VAR_17, VAR_0);
 if (VAR_12) {
  FUNC_0("failed to pin bo: %d", VAR_12);
  return;
 }
 VAR_13 = FUNC_4(VAR_17);
 if (VAR_13 < 0) {
  FUNC_6(VAR_17);
  return;
 }

 FUNC_9(VAR_13, VAR_15->mmio + VAR_4);

 VAR_11 = VAR_10->fb->width * (VAR_10->fb->format->cpp[0]);

 VAR_11 = FUNC_2(16, VAR_11);

 VAR_14 = VAR_10->fb->width * VAR_10->fb->format->cpp[0];
 VAR_14 = FUNC_2(16, VAR_14);
 FUNC_9(FUNC_1(VAR_7, VAR_11) |
        FUNC_1(VAR_6, VAR_14),
        VAR_15->mmio + VAR_5);


 VAR_11 = FUNC_7(VAR_15->mmio + VAR_1);
 VAR_11 &= ~VAR_3;
 VAR_11 |= FUNC_1(VAR_2,
      VAR_10->fb->format->cpp[0] * 8 / 16);
 FUNC_9(VAR_11, VAR_15->mmio + VAR_1);
}
