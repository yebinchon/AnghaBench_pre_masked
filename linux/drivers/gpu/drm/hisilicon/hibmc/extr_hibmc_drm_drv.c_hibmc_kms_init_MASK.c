
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hibmc_drm_private {int mode_config_initialized; TYPE_2__* dev; int fb_base; } ;
struct TYPE_3__ {int max_width; int max_height; int preferred_depth; void* funcs; scalar_t__ prefer_shadow; int fb_base; scalar_t__ min_height; scalar_t__ min_width; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct hibmc_drm_private*) ;
 int VAR_0 ;
 int FUNC_3 (struct hibmc_drm_private*) ;

__attribute__((used)) static int FUNC_4(struct hibmc_drm_private *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1->dev);
 VAR_1->mode_config_initialized = 1;

 VAR_1->dev->mode_config.min_width = 0;
 VAR_1->dev->mode_config.min_height = 0;
 VAR_1->dev->mode_config.max_width = 1920;
 VAR_1->dev->mode_config.max_height = 1440;

 VAR_1->dev->mode_config.fb_base = VAR_1->fb_base;
 VAR_1->dev->mode_config.preferred_depth = 24;
 VAR_1->dev->mode_config.prefer_shadow = 0;

 VAR_1->dev->mode_config.funcs = (void *)&VAR_0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_0("failed to init de: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0("failed to init vdac: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
