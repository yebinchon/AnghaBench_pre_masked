
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* abm_level_property; void* dither_property; void* audio_property; void* underscan_vborder_property; void* underscan_hborder_property; void* underscan_property; void* load_detect_property; void* coherent_mode_property; } ;
struct amdgpu_device {TYPE_1__ mode_info; int ddev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,char*,int ,int) ;
 void* FUNC_4 (int ,int ,char*,int ,int) ;

int FUNC_5(struct amdgpu_device *VAR_4)
{
 int VAR_5;

 VAR_4->mode_info.coherent_mode_property =
  FUNC_4(VAR_4->ddev, 0 , "coherent", 0, 1);
 if (!VAR_4->mode_info.coherent_mode_property)
  return -VAR_0;

 VAR_4->mode_info.load_detect_property =
  FUNC_4(VAR_4->ddev, 0, "load detection", 0, 1);
 if (!VAR_4->mode_info.load_detect_property)
  return -VAR_0;

 FUNC_2(VAR_4->ddev);

 VAR_5 = FUNC_0(VAR_3);
 VAR_4->mode_info.underscan_property =
  FUNC_3(VAR_4->ddev, 0,
        "underscan",
        VAR_3, VAR_5);

 VAR_4->mode_info.underscan_hborder_property =
  FUNC_4(VAR_4->ddev, 0,
     "underscan hborder", 0, 128);
 if (!VAR_4->mode_info.underscan_hborder_property)
  return -VAR_0;

 VAR_4->mode_info.underscan_vborder_property =
  FUNC_4(VAR_4->ddev, 0,
     "underscan vborder", 0, 128);
 if (!VAR_4->mode_info.underscan_vborder_property)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1);
 VAR_4->mode_info.audio_property =
  FUNC_3(VAR_4->ddev, 0,
      "audio",
      VAR_1, VAR_5);

 VAR_5 = FUNC_0(VAR_2);
 VAR_4->mode_info.dither_property =
  FUNC_3(VAR_4->ddev, 0,
      "dither",
      VAR_2, VAR_5);

 if (FUNC_1(VAR_4)) {
  VAR_4->mode_info.abm_level_property =
   FUNC_4(VAR_4->ddev, 0,
      "abm level", 0, 4);
  if (!VAR_4->mode_info.abm_level_property)
   return -VAR_0;
 }

 return 0;
}
