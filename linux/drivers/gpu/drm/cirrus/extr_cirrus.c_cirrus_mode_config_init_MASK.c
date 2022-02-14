
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_width; int max_height; int preferred_depth; int * funcs; scalar_t__ prefer_shadow; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct cirrus_device {struct drm_device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*) ;

__attribute__((used)) static void FUNC_1(struct cirrus_device *VAR_2)
{
 struct drm_device *VAR_3 = &VAR_2->dev;

 FUNC_0(VAR_3);
 VAR_3->mode_config.min_width = 0;
 VAR_3->mode_config.min_height = 0;
 VAR_3->mode_config.max_width = VAR_0 / 2;
 VAR_3->mode_config.max_height = 1024;
 VAR_3->mode_config.preferred_depth = 16;
 VAR_3->mode_config.prefer_shadow = 0;
 VAR_3->mode_config.funcs = &VAR_1;
}
