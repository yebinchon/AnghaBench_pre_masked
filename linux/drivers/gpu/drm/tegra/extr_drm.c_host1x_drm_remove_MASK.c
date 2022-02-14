
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_device {int dev; } ;
struct drm_device {int dummy; } ;


 struct drm_device* FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct host1x_device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
