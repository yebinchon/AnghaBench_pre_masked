
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(VAR_0);


 if (FUNC_4(VAR_1)) {
  FUNC_1(VAR_0);
  FUNC_3(VAR_0);
  FUNC_2(VAR_0);
 }

 return FUNC_5(VAR_1, 1, 1);
}
