
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int capabilities; int active_display_unit; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (struct vmw_private*,int) ;

int FUNC_4(struct vmw_private *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 int VAR_7, VAR_8;

 if (!(VAR_5->capabilities & VAR_2)) {
  FUNC_0("Not using screen objects,"
    " missing cap SCREEN_OBJECT_2\n");
  return -VAR_1;
 }

 VAR_8 = -VAR_0;

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 if (FUNC_2(VAR_8 != 0))
  return VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7)
  FUNC_3(VAR_5, VAR_7);

 VAR_5->active_display_unit = VAR_4;

 FUNC_0("Screen Objects Display Unit initialized\n");

 return 0;
}
