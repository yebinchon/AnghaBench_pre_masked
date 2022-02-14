
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_pipeline {int pxlclk; scalar_t__ dual_link; } ;
struct komeda_dev {int aclk; } ;
struct komeda_crtc {struct komeda_pipeline* master; } ;
struct drm_display_mode {int flags; int clock; int name; } ;
struct drm_crtc {TYPE_1__* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {struct komeda_dev* dev_private; } ;


 int FUNC_0 (char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 unsigned long FUNC_2 (struct komeda_crtc*,unsigned long) ;
 struct komeda_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_4(struct drm_crtc *VAR_5, const struct drm_display_mode *VAR_6)
{
 struct komeda_dev *VAR_7 = VAR_5->dev->dev_private;
 struct komeda_crtc *VAR_8 = FUNC_3(VAR_5);
 struct komeda_pipeline *VAR_9 = VAR_8->master;
 unsigned long VAR_10, VAR_11;

 if (VAR_6->flags & VAR_0)
  return VAR_3;

 VAR_10 = VAR_6->clock * 1000;
 if (VAR_9->dual_link)
  VAR_10 /= 2;

 if (VAR_10 != FUNC_1(VAR_9->pxlclk, VAR_10)) {
  FUNC_0("pxlclk doesn't support %lu Hz\n", VAR_10);

  return VAR_2;
 }

 VAR_11 = FUNC_2(FUNC_3(VAR_5), VAR_10);
 if (FUNC_1(VAR_7->aclk, VAR_11) < VAR_11) {
  FUNC_0("engine clk can't satisfy the requirement of %s-clk: %lu.\n",
     VAR_6->name, VAR_10);

  return VAR_1;
 }

 return VAR_4;
}
