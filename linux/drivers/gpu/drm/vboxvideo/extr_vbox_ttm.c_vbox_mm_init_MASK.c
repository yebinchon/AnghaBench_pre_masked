
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int pdev; } ;
struct vbox_private {int fb_mtrr; int available_vram_size; struct drm_device ddev; } ;
struct drm_vram_mm {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_vram_mm*) ;
 int FUNC_2 (struct drm_vram_mm*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ) ;
 struct drm_vram_mm* FUNC_5 (struct drm_device*,int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct vbox_private *VAR_2)
{
 struct drm_vram_mm *VAR_3;
 int VAR_4;
 struct drm_device *VAR_5 = &VAR_2->ddev;

 VAR_3 = FUNC_5(VAR_5, FUNC_7(VAR_5->pdev, 0),
           VAR_2->available_vram_size,
           &VAR_1);
 if (FUNC_1(VAR_3)) {
  VAR_4 = FUNC_2(VAR_3);
  FUNC_0("Error initializing VRAM MM; %d\n", VAR_4);
  return VAR_4;
 }






 VAR_2->fb_mtrr = FUNC_3(FUNC_7(VAR_5->pdev, 0),
      FUNC_6(VAR_5->pdev, 0));

 return 0;
}
