
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shmob_drm_device {struct drm_device* ddev; } ;
struct platform_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 struct shmob_drm_device* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct shmob_drm_device *VAR_1 = FUNC_5(VAR_0);
 struct drm_device *VAR_2 = VAR_1->ddev;

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(VAR_2);

 return 0;
}
