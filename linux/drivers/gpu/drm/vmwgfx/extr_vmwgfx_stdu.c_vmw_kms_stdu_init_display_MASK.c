
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {int capabilities; int active_display_unit; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_device*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct vmw_private*,int) ;

int FUNC_5(struct vmw_private *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 int VAR_7, VAR_8;



 if (!VAR_2)
  return -VAR_0;

 if (!(VAR_5->capabilities & VAR_1))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_3);
 if (FUNC_3(VAR_8 != 0))
  return VAR_8;

 VAR_5->active_display_unit = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  VAR_8 = FUNC_4(VAR_5, VAR_7);

  if (FUNC_3(VAR_8 != 0)) {
   FUNC_0("Failed to initialize STDU %d", VAR_7);
   return VAR_8;
  }
 }

 FUNC_1("Screen Target Display device initialized\n");

 return 0;
}
