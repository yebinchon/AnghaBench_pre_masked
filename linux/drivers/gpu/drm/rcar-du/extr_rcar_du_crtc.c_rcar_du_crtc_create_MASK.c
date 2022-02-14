
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rcar_du_group {TYPE_3__* planes; struct rcar_du_device* dev; } ;
struct rcar_du_device {int dev; TYPE_4__* info; int ddev; struct rcar_du_crtc* crtcs; } ;
struct drm_crtc {int dummy; } ;
struct rcar_du_crtc {unsigned int mmio_offset; unsigned int index; int dsysr; size_t vsp_pipe; TYPE_2__* vsp; struct rcar_du_group* group; struct rcar_du_device* dev; int vblank_lock; int vblank_wait; int flip_wait; struct clk* extclock; struct clk* clock; struct drm_crtc crtc; } ;
struct platform_device {int dummy; } ;
struct drm_plane {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_8__ {int dpll_mask; int gen; } ;
struct TYPE_7__ {struct drm_plane plane; } ;
struct TYPE_6__ {TYPE_1__* planes; } ;
struct TYPE_5__ {struct drm_plane plane; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,unsigned int,...) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int,int ,unsigned int,int ,struct rcar_du_crtc*) ;
 int FUNC_7 (struct drm_crtc*,int *) ;
 int FUNC_8 (int ,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int FUNC_9 (struct drm_crtc*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,unsigned int) ;
 int FUNC_12 (struct rcar_du_crtc*) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (struct rcar_du_device*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,char*,unsigned int) ;
 struct platform_device* FUNC_16 (int ) ;

int FUNC_17(struct rcar_du_group *VAR_10, unsigned int VAR_11,
   unsigned int VAR_12)
{
 static const unsigned int VAR_13[] = {
  131, 130, 129, 128
 };

 struct rcar_du_device *VAR_14 = VAR_10->dev;
 struct platform_device *VAR_15 = FUNC_16(VAR_14->dev);
 struct rcar_du_crtc *VAR_16 = &VAR_14->crtcs[VAR_11];
 struct drm_crtc *VAR_17 = &VAR_16->crtc;
 struct drm_plane *VAR_18;
 unsigned int VAR_19;
 struct clk *VAR_20;
 char VAR_21[9];
 char *VAR_22;
 int VAR_23;
 int VAR_24;


 if (FUNC_13(VAR_14, VAR_4)) {
  FUNC_15(VAR_21, "du.%u", VAR_12);
  VAR_22 = VAR_21;
 } else {
  VAR_22 = ((void*)0);
 }

 VAR_16->clock = FUNC_5(VAR_14->dev, VAR_22);
 if (FUNC_1(VAR_16->clock)) {
  FUNC_3(VAR_14->dev, "no clock for DU channel %u\n", VAR_12);
  return FUNC_2(VAR_16->clock);
 }

 FUNC_15(VAR_21, "dclkin.%u", VAR_12);
 VAR_20 = FUNC_5(VAR_14->dev, VAR_21);
 if (!FUNC_1(VAR_20)) {
  VAR_16->extclock = VAR_20;
 } else if (FUNC_2(VAR_20) == -VAR_2) {
  return -VAR_2;
 } else if (VAR_14->info->dpll_mask & FUNC_0(VAR_12)) {




  VAR_24 = FUNC_2(VAR_20);
  FUNC_3(VAR_14->dev, "can't get dclkin.%u: %d\n", VAR_12, VAR_24);
  return VAR_24;
 }

 FUNC_10(&VAR_16->flip_wait);
 FUNC_10(&VAR_16->vblank_wait);
 FUNC_14(&VAR_16->vblank_lock);

 VAR_16->dev = VAR_14;
 VAR_16->group = VAR_10;
 VAR_16->mmio_offset = VAR_13[VAR_12];
 VAR_16->index = VAR_12;
 VAR_16->dsysr = (VAR_16->index % 2 ? 0 : VAR_0) | VAR_1;

 if (FUNC_13(VAR_14, VAR_5))
  VAR_18 = &VAR_16->vsp->planes[VAR_16->vsp_pipe].plane;
 else
  VAR_18 = &VAR_10->planes[VAR_11 % 2].plane;

 VAR_24 = FUNC_8(VAR_14->ddev, VAR_17, VAR_18, ((void*)0),
     VAR_14->info->gen <= 2 ?
     &VAR_6 : &VAR_7,
     ((void*)0));
 if (VAR_24 < 0)
  return VAR_24;

 FUNC_7(VAR_17, &VAR_8);


 FUNC_9(VAR_17);


 if (FUNC_13(VAR_14, VAR_4)) {

  VAR_23 = FUNC_11(VAR_15, VAR_11);
  VAR_19 = 0;
 } else {
  VAR_23 = FUNC_11(VAR_15, 0);
  VAR_19 = VAR_3;
 }

 if (VAR_23 < 0) {
  FUNC_3(VAR_14->dev, "no IRQ for CRTC %u\n", VAR_11);
  return VAR_23;
 }

 VAR_24 = FUNC_6(VAR_14->dev, VAR_23, VAR_9, VAR_19,
          FUNC_4(VAR_14->dev), VAR_16);
 if (VAR_24 < 0) {
  FUNC_3(VAR_14->dev,
   "failed to register IRQ for CRTC %u\n", VAR_11);
  return VAR_24;
 }

 FUNC_12(VAR_16);

 return 0;
}
