
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_property {int dummy; } ;
struct TYPE_2__ {void* tv_hue_property; void* tv_saturation_property; void* tv_overscan_property; void* tv_flicker_reduction_property; void* tv_contrast_property; void* tv_brightness_property; int tv_mode_property; struct drm_property* tv_subconnector_property; struct drm_property* tv_select_subconnector_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ,unsigned int,char const* const) ;
 int FUNC_3 (struct drm_device*,int ,char*,unsigned int) ;
 struct drm_property* FUNC_4 (struct drm_device*,int ,char*,int ,int ) ;
 void* FUNC_5 (struct drm_device*,int ,char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(struct drm_device *VAR_5,
      unsigned int VAR_6,
      const char * const VAR_7[])
{
 struct drm_property *VAR_8;
 struct drm_property *VAR_9;
 unsigned int VAR_10;

 if (VAR_5->mode_config.tv_select_subconnector_property)
  return 0;




 VAR_8 = FUNC_4(VAR_5, 0,
       "select subconnector",
       VAR_3,
       FUNC_0(VAR_3));
 if (!VAR_8)
  goto nomem;

 VAR_5->mode_config.tv_select_subconnector_property = VAR_8;

 VAR_9 =
  FUNC_4(VAR_5, VAR_1,
        "subconnector",
        VAR_4,
        FUNC_0(VAR_4));
 if (!VAR_9)
  goto nomem;
 VAR_5->mode_config.tv_subconnector_property = VAR_9;




 if (FUNC_1(VAR_5))
  goto nomem;

 VAR_5->mode_config.tv_mode_property =
  FUNC_3(VAR_5, VAR_0,
        "mode", VAR_6);
 if (!VAR_5->mode_config.tv_mode_property)
  goto nomem;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  FUNC_2(VAR_5->mode_config.tv_mode_property,
          VAR_10, VAR_7[VAR_10]);

 VAR_5->mode_config.tv_brightness_property =
  FUNC_5(VAR_5, 0, "brightness", 0, 100);
 if (!VAR_5->mode_config.tv_brightness_property)
  goto nomem;

 VAR_5->mode_config.tv_contrast_property =
  FUNC_5(VAR_5, 0, "contrast", 0, 100);
 if (!VAR_5->mode_config.tv_contrast_property)
  goto nomem;

 VAR_5->mode_config.tv_flicker_reduction_property =
  FUNC_5(VAR_5, 0, "flicker reduction", 0, 100);
 if (!VAR_5->mode_config.tv_flicker_reduction_property)
  goto nomem;

 VAR_5->mode_config.tv_overscan_property =
  FUNC_5(VAR_5, 0, "overscan", 0, 100);
 if (!VAR_5->mode_config.tv_overscan_property)
  goto nomem;

 VAR_5->mode_config.tv_saturation_property =
  FUNC_5(VAR_5, 0, "saturation", 0, 100);
 if (!VAR_5->mode_config.tv_saturation_property)
  goto nomem;

 VAR_5->mode_config.tv_hue_property =
  FUNC_5(VAR_5, 0, "hue", 0, 100);
 if (!VAR_5->mode_config.tv_hue_property)
  goto nomem;

 return 0;
nomem:
 return -VAR_2;
}
