
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vram_mm {int dummy; } ;
struct bochs_device {int fb_size; int fb_base; int dev; } ;


 int FUNC_0 (struct drm_vram_mm*) ;
 int VAR_0 ;
 struct drm_vram_mm* FUNC_1 (int ,int ,int ,int *) ;

int FUNC_2(struct bochs_device *VAR_1)
{
 struct drm_vram_mm *VAR_2;

 VAR_2 = FUNC_1(VAR_1->dev, VAR_1->fb_base,
           VAR_1->fb_size,
           &VAR_0);
 return FUNC_0(VAR_2);
}
