
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_driver {int release; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,int (*) (struct drm_device*),struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct drm_driver*,struct device*) ;

int FUNC_4(struct device *VAR_1,
        struct drm_device *VAR_2,
        struct drm_driver *VAR_3)
{
 int VAR_4;

 if (FUNC_0(!VAR_1 || !VAR_3->release))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1, FUNC_2, VAR_2);
 if (VAR_4)
  FUNC_2(VAR_2);

 return VAR_4;
}
