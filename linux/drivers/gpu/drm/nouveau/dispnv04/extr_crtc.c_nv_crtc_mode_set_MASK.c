
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ family; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct nouveau_crtc {int index; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_9__ {int sel_clk; } ;
struct TYPE_10__ {TYPE_4__ mode_reg; } ;


 int FUNC_0 (struct drm_device*,int ,int ,int ) ;
 int FUNC_1 (struct nouveau_drm*,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct drm_display_mode*) ;
 struct nouveau_crtc* FUNC_3 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_4 (struct drm_device*) ;
 TYPE_5__* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_crtc*,struct drm_display_mode*,int ) ;
 int FUNC_7 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_8 (struct drm_crtc*,struct drm_display_mode*) ;
 int FUNC_9 (struct drm_crtc*,struct drm_framebuffer*) ;
 int FUNC_10 (struct drm_device*,int ,int) ;

__attribute__((used)) static int
FUNC_11(struct drm_crtc *VAR_2, struct drm_display_mode *VAR_3,
   struct drm_display_mode *VAR_4,
   int VAR_5, int VAR_6, struct drm_framebuffer *VAR_7)
{
 struct drm_device *VAR_8 = VAR_2->dev;
 struct nouveau_crtc *VAR_9 = FUNC_3(VAR_2);
 struct nouveau_drm *VAR_10 = FUNC_4(VAR_8);
 int VAR_11;

 FUNC_1(VAR_10, "CTRC mode on CRTC %d:\n", VAR_9->index);
 FUNC_2(VAR_4);

 VAR_11 = FUNC_9(VAR_2, VAR_7);
 if (VAR_11)
  return VAR_11;


 FUNC_10(VAR_8, VAR_9->index, -1);

 FUNC_8(VAR_2, VAR_4);

 if (VAR_10->client.device.info.family == VAR_0)
  FUNC_0(VAR_8, 0, VAR_1, FUNC_5(VAR_8)->mode_reg.sel_clk);
 FUNC_7(VAR_2, VAR_4);
 FUNC_6(VAR_2, VAR_3, VAR_4->clock);
 return 0;
}
