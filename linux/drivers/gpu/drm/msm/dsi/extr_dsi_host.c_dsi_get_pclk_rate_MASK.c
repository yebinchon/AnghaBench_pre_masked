
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi_host {struct drm_display_mode* mode; } ;
struct drm_display_mode {int clock; } ;



__attribute__((used)) static u32 FUNC_0(struct msm_dsi_host *VAR_0, bool VAR_1)
{
 struct drm_display_mode *VAR_2 = VAR_0->mode;
 u32 VAR_3;

 VAR_3 = VAR_2->clock * 1000;







 if (VAR_1)
  VAR_3 /= 2;

 return VAR_3;
}
