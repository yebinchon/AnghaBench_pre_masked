
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct malidp_hw_device {int dummy; } ;
struct malidp_drm {struct malidp_hw_device* dev; } ;
struct drm_device {struct malidp_drm* dev_private; } ;


 int FUNC_0 (char*) ;
 struct drm_device* FUNC_1 (int *) ;
 int FUNC_2 (struct malidp_hw_device*) ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;
 struct drm_device *VAR_4 = FUNC_1(&VAR_0->dev);
 struct malidp_drm *VAR_5 = VAR_4->dev_private;
 struct malidp_hw_device *VAR_6 = VAR_5->dev;


 VAR_1 = FUNC_5(VAR_0, "DE");
 if (VAR_1 < 0) {
  FUNC_0("no 'DE' IRQ specified!\n");
  return VAR_1;
 }
 VAR_2 = FUNC_5(VAR_0, "SE");
 if (VAR_2 < 0) {
  FUNC_0("no 'SE' IRQ specified!\n");
  return VAR_2;
 }

 VAR_3 = FUNC_3(VAR_4, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_4, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_6);
  return VAR_3;
 }

 return 0;
}
