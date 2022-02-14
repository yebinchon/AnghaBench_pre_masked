
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * vram_mm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_device *VAR_0)
{
 if (!VAR_0->vram_mm)
  return;

 FUNC_0(VAR_0->vram_mm);
 FUNC_1(VAR_0->vram_mm);
 VAR_0->vram_mm = ((void*)0);
}
