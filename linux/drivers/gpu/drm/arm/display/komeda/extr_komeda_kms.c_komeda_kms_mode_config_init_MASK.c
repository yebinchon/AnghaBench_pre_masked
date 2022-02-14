
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_config {int max_width; int max_height; int allow_fb_modifiers; int * helper_private; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct TYPE_2__ {struct drm_mode_config mode_config; } ;
struct komeda_kms_dev {TYPE_1__ base; } ;
struct komeda_dev {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct komeda_kms_dev*,struct komeda_dev*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct komeda_kms_dev *VAR_2,
     struct komeda_dev *VAR_3)
{
 struct drm_mode_config *VAR_4 = &VAR_2->base.mode_config;

 FUNC_0(&VAR_2->base);

 FUNC_1(VAR_2, VAR_3);


 VAR_4->min_width = 0;
 VAR_4->min_height = 0;
 VAR_4->max_width = 4096;
 VAR_4->max_height = 4096;
 VAR_4->allow_fb_modifiers = 1;

 VAR_4->funcs = &VAR_0;
 VAR_4->helper_private = &VAR_1;
}
