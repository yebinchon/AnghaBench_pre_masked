
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int min_width; int min_height; int max_width; int max_height; int preferred_depth; int * funcs; scalar_t__ prefer_shadow; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_device*) ;
 struct drm_encoder* FUNC_3 (struct drm_device*) ;
 int VAR_0 ;

int FUNC_4(struct drm_device *VAR_1)
{
 struct drm_encoder *VAR_2;
 FUNC_0(VAR_1);

 VAR_1->mode_config.min_width = 640;
 VAR_1->mode_config.min_height = 480;

 VAR_1->mode_config.max_width = 2048;
 VAR_1->mode_config.max_height = 2048;

 VAR_1->mode_config.prefer_shadow = 0;
 VAR_1->mode_config.preferred_depth = 24;

 VAR_1->mode_config.funcs = &VAR_0;

 FUNC_2(VAR_1);

 VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1, VAR_2);

 return 0;
}
