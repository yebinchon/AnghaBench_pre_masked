
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_width; int max_height; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_1)
{
 FUNC_0(VAR_1);

 VAR_1->mode_config.min_width = 0;
 VAR_1->mode_config.min_height = 0;
 VAR_1->mode_config.max_width = 800;
 VAR_1->mode_config.max_height = 600;
 VAR_1->mode_config.funcs = &VAR_0;
}
