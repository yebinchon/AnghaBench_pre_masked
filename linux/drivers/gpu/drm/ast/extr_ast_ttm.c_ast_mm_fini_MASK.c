
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pdev; } ;
struct ast_private {int fb_mtrr; struct drm_device* dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct ast_private *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_2(VAR_1);

 FUNC_1(VAR_0->fb_mtrr);
 FUNC_0(FUNC_4(VAR_1->pdev, 0),
    FUNC_3(VAR_1->pdev, 0));
}
