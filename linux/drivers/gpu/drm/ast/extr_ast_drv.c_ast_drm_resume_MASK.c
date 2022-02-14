
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_1->pdev))
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_1(VAR_1);
 return 0;
}
