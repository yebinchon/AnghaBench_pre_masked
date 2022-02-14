
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_driver {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct drm_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_driver*,struct device*) ;
 int FUNC_2 (struct drm_device*) ;
 struct drm_device* FUNC_3 (int,int ) ;

struct drm_device *FUNC_4(struct drm_driver *VAR_2,
     struct device *VAR_3)
{
 struct drm_device *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_2(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
