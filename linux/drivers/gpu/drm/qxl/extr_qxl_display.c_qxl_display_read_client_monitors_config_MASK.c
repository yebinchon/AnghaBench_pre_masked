
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct qxl_device {struct drm_device ddev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct qxl_device*) ;
 int FUNC_6 (struct qxl_device*) ;
 int FUNC_7 (int) ;

void FUNC_8(struct qxl_device *VAR_3)
{
 struct drm_device *VAR_4 = &VAR_3->ddev;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {
  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5 != VAR_0)
   break;
  FUNC_7(5);
 }
 if (VAR_5 == VAR_1) {
  FUNC_0("ignoring client monitors config: error");
  return;
 }
 if (VAR_5 == VAR_0) {
  FUNC_0("ignoring client monitors config: bad crc");
  return;
 }
 if (VAR_5 == VAR_2) {
  FUNC_0("ignoring client monitors config: unchanged");
  return;
 }

 FUNC_3(VAR_4);
 FUNC_6(VAR_3);
 FUNC_4(VAR_4);
 if (!FUNC_1(VAR_4)) {


  FUNC_2(VAR_4);
 }
}
