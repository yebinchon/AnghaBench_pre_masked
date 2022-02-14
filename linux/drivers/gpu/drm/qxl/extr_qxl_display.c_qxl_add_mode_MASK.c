
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int dummy; } ;
struct drm_display_mode {unsigned int hdisplay; unsigned int vdisplay; int type; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*,unsigned int,unsigned int,int,int,int,int) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct qxl_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_1,
   unsigned int VAR_2,
   unsigned int VAR_3,
   bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_1->dev;
 struct qxl_device *VAR_6 = VAR_5->dev_private;
 struct drm_display_mode *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_3);
 if (VAR_8 != 0)
  return 0;

 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_3, 60, 0, 0, 0);
 if (VAR_4)
  VAR_7->type |= VAR_0;
 VAR_7->hdisplay = VAR_2;
 VAR_7->vdisplay = VAR_3;
 FUNC_2(VAR_7);
 FUNC_1(VAR_1, VAR_7);
 return 1;
}
