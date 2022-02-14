
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int vga_pm_domain; struct drm_device* dev; } ;
struct drm_device {int dev; int pdev; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct drm_device*,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int) ;

void
FUNC_7(struct nouveau_drm *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 bool VAR_4 = FUNC_2();


 if (!VAR_3->pdev)
  return;

 FUNC_4(VAR_3->pdev, VAR_3, ((void*)0), VAR_1);


 if (FUNC_3(VAR_3->pdev))
  return;

 FUNC_6(VAR_3->pdev, &VAR_0, VAR_4);

 if (VAR_4 && FUNC_1() && !FUNC_0())
  FUNC_5(VAR_2->dev->dev, &VAR_2->vga_pm_domain);
}
