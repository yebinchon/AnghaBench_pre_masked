
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_device {int dev; scalar_t__ pdev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u64
FUNC_3(struct drm_device *VAR_0)
{
 if (VAR_0->pdev)
  return FUNC_0(VAR_0->pdev);
 else
  return FUNC_1(FUNC_2(VAR_0->dev));
}
