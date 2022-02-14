
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mga_device {scalar_t__ fb_mtrr; struct drm_device* dev; } ;
struct drm_device {int pdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct mga_device *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_2(VAR_1);

 FUNC_0(FUNC_4(VAR_1->pdev, 0),
    FUNC_3(VAR_1->pdev, 0));
 FUNC_1(VAR_0->fb_mtrr);
 VAR_0->fb_mtrr = 0;
}
