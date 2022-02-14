
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_device {int dev; } ;
struct drm_driver {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *,struct drm_device*) ;
 struct drm_device* FUNC_3 (struct drm_driver*,int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (int *,char*,int) ;
 struct drm_driver VAR_0 ;

__attribute__((used)) static int FUNC_7(struct host1x_device *VAR_1)
{
 struct drm_driver *VAR_2 = &VAR_0;
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_2, &VAR_1->dev);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_2(&VAR_1->dev, VAR_3);

 VAR_4 = FUNC_6(((void*)0), "tegradrmfb", 0);
 if (VAR_4 < 0)
  goto put;

 VAR_4 = FUNC_5(VAR_3, 0);
 if (VAR_4 < 0)
  goto put;

 return 0;

put:
 FUNC_4(VAR_3);
 return VAR_4;
}
