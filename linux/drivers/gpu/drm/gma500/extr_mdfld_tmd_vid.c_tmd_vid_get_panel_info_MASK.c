
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_info {int height_mm; int width_mm; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct drm_device *VAR_3,
    int VAR_4,
    struct panel_info *VAR_5)
{
 if (!VAR_3 || !VAR_5)
  return -VAR_0;

 VAR_5->width_mm = VAR_2;
 VAR_5->height_mm = VAR_1;

 return 0;
}
