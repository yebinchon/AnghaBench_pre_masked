
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,struct drm_device*) ;
 int FUNC_1 (int ,struct drm_device*) ;
 int FUNC_2 (struct device*,char*) ;
 struct drm_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_5(VAR_1);

 VAR_2 = FUNC_0(VAR_1->dev, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_0, "can't bind component devices\n");
  return VAR_2;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto unbind;

 VAR_2 = FUNC_4(VAR_1, 0);
 if (VAR_2 < 0)
  goto unbind;

 return 0;

unbind:
 FUNC_1(VAR_1->dev, VAR_1);
 return VAR_2;
}
