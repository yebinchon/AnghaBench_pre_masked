
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int normalize_zpos; int * funcs; int max_height; int max_width; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct drm_device *VAR_3)
{
 VAR_3->mode_config.min_width = 0;
 VAR_3->mode_config.min_height = 0;






 VAR_3->mode_config.max_width = VAR_1;
 VAR_3->mode_config.max_height = VAR_0;

 VAR_3->mode_config.funcs = &VAR_2;

 VAR_3->mode_config.normalize_zpos = 1;
}
