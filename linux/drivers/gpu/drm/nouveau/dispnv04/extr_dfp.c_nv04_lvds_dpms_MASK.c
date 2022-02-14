
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int clock; } ;
struct nouveau_encoder {int last_dpms; TYPE_5__* dcb; TYPE_2__ mode; } ;
struct nouveau_drm {int dummy; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_13__ {int index; } ;
struct TYPE_8__ {scalar_t__ use_power_scripts; } ;
struct TYPE_12__ {TYPE_1__ lvdsconf; int index; } ;
struct TYPE_10__ {int sel_clk; } ;
struct TYPE_11__ {TYPE_3__ mode_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (struct drm_device*,int ,int ,int) ;
 int FUNC_2 (struct nouveau_drm*,char*,int,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct drm_device*,TYPE_5__*,int,int ,int ) ;
 int FUNC_4 (int) ;
 TYPE_6__* FUNC_5 (struct drm_crtc*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 struct nouveau_encoder* FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_device*,TYPE_5__*) ;
 int FUNC_9 (struct drm_device*,struct nouveau_encoder*,int) ;
 int FUNC_10 (struct drm_encoder*,int) ;
 int FUNC_11 (struct drm_encoder*,int) ;
 TYPE_4__* FUNC_12 (struct drm_device*) ;

__attribute__((used)) static void FUNC_13(struct drm_encoder *VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct drm_crtc *VAR_7 = VAR_4->crtc;
 struct nouveau_drm *VAR_8 = FUNC_6(VAR_6);
 struct nouveau_encoder *VAR_9 = FUNC_7(VAR_4);
 bool VAR_10 = FUNC_4(VAR_9->last_dpms);

 if (VAR_9->last_dpms == VAR_5)
  return;
 VAR_9->last_dpms = VAR_5;

 FUNC_2(VAR_8, "Setting dpms mode %d on lvds encoder (output %d)\n",
   VAR_5, VAR_9->dcb->index);

 if (VAR_10 && FUNC_4(VAR_5))
  return;

 if (VAR_9->dcb->lvdsconf.use_power_scripts) {



  int VAR_11 = VAR_7 ? FUNC_5(VAR_7)->index :
      FUNC_8(VAR_6, VAR_9->dcb);

  if (VAR_5 == VAR_0) {
   FUNC_3(VAR_6, VAR_9->dcb, VAR_11,
      VAR_2, VAR_9->mode.clock);
  } else



   FUNC_3(VAR_6, VAR_9->dcb, VAR_11,
      VAR_1, 0);
 }

 FUNC_10(VAR_4, VAR_5);
 FUNC_11(VAR_4, VAR_5);

 if (VAR_5 == VAR_0)
  FUNC_9(VAR_6, VAR_9, FUNC_5(VAR_7)->index);
 else {
  FUNC_12(VAR_6)->mode_reg.sel_clk = FUNC_0(VAR_6, 0, VAR_3);
  FUNC_12(VAR_6)->mode_reg.sel_clk &= ~0xf0;
 }
 FUNC_1(VAR_6, 0, VAR_3, FUNC_12(VAR_6)->mode_reg.sel_clk);
}
