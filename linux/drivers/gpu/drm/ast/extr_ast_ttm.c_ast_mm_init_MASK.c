
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vram_mm {int dummy; } ;
struct drm_device {int pdev; } ;
struct ast_private {int fb_mtrr; int vram_size; struct drm_device* dev; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct drm_vram_mm*) ;
 int FUNC_2 (struct drm_vram_mm*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 struct drm_vram_mm* FUNC_5 (struct drm_device*,int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct ast_private *VAR_1)
{
 struct drm_vram_mm *VAR_2;
 int VAR_3;
 struct drm_device *VAR_4 = VAR_1->dev;

 VAR_2 = FUNC_5(
  VAR_4, FUNC_7(VAR_4->pdev, 0),
  VAR_1->vram_size, &VAR_0);
 if (FUNC_1(VAR_2)) {
  VAR_3 = FUNC_2(VAR_2);
  FUNC_0("Error initializing VRAM MM; %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_3(FUNC_7(VAR_4->pdev, 0),
       FUNC_6(VAR_4->pdev, 0));
 VAR_1->fb_mtrr = FUNC_4(FUNC_7(VAR_4->pdev, 0),
     FUNC_6(VAR_4->pdev, 0));

 return 0;
}
