
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct drm_display_mode {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (char*,size_t) ;
 struct drm_display_mode* FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (size_t) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_1, u8 VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;
 struct drm_display_mode *VAR_4;

 if (!FUNC_3(VAR_2)) {
  FUNC_0("Unknown HDMI VIC: %d\n", VAR_2);
  return 0;
 }

 VAR_4 = FUNC_1(VAR_3, &VAR_0[VAR_2]);
 if (!VAR_4)
  return 0;

 FUNC_2(VAR_1, VAR_4);

 return 1;
}
