
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct drm_vram_mm_funcs {int dummy; } ;
struct drm_vram_mm {int dummy; } ;
struct drm_device {struct drm_vram_mm* vram_mm; } ;


 int VAR_0 ;
 struct drm_vram_mm* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_vram_mm*) ;
 int FUNC_2 (struct drm_vram_mm*,struct drm_device*,int ,size_t,struct drm_vram_mm_funcs const*) ;
 int FUNC_3 (struct drm_vram_mm*) ;
 struct drm_vram_mm* FUNC_4 (int,int ) ;

struct drm_vram_mm *FUNC_5(
 struct drm_device *VAR_2, uint64_t VAR_3, size_t VAR_4,
 const struct drm_vram_mm_funcs *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_2->vram_mm))
  return VAR_2->vram_mm;

 VAR_2->vram_mm = FUNC_4(sizeof(*VAR_2->vram_mm), VAR_1);
 if (!VAR_2->vram_mm)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_2->vram_mm, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  goto err_kfree;

 return VAR_2->vram_mm;

err_kfree:
 FUNC_3(VAR_2->vram_mm);
 VAR_2->vram_mm = ((void*)0);
 return FUNC_0(VAR_6);
}
