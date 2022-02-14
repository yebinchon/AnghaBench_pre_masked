
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {struct drm_device* dev; } ;
struct drm_device {int dev; int pdev; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct nouveau_drm *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 bool VAR_2 = FUNC_2();


 if (!VAR_1->pdev)
  return;

 FUNC_4(VAR_1->pdev, ((void*)0), ((void*)0), ((void*)0));

 if (FUNC_3(VAR_1->pdev))
  return;

 FUNC_6(VAR_1->pdev);
 if (VAR_2 && FUNC_1() && !FUNC_0())
  FUNC_5(VAR_0->dev->dev);
}
