
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_config {int bpp; int lane_count; int video_mode; scalar_t__ channel_num; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_6,
    struct mdfld_dsi_config *VAR_7, int VAR_8)
{
 if (!VAR_6 || !VAR_7) {
  FUNC_0("Invalid parameters");
  return -VAR_0;
 }

 VAR_7->bpp = 24;
 if (FUNC_1(VAR_6, VAR_8) == VAR_4)
  VAR_7->lane_count = 4;
 else
  VAR_7->lane_count = 2;
 VAR_7->channel_num = 0;

 if (FUNC_1(VAR_6, VAR_8) == VAR_5)
  VAR_7->video_mode = VAR_3;
 else if (FUNC_1(VAR_6, VAR_8) == VAR_4)
  VAR_7->video_mode =
    VAR_2;
 else
  VAR_7->video_mode = VAR_1;

 return 0;
}
