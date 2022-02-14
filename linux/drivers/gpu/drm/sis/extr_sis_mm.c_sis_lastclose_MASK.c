
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int struct_mutex; TYPE_1__* dev_private; } ;
struct TYPE_2__ {int * mmio; scalar_t__ agp_initialized; int agp_mm; scalar_t__ vram_initialized; int vram_mm; } ;
typedef TYPE_1__ drm_sis_private_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_device *VAR_0)
{
 drm_sis_private_t *VAR_1 = VAR_0->dev_private;

 if (!VAR_1)
  return;

 FUNC_1(&VAR_0->struct_mutex);
 if (VAR_1->vram_initialized) {
  FUNC_0(&VAR_1->vram_mm);
  VAR_1->vram_initialized = 0;
 }
 if (VAR_1->agp_initialized) {
  FUNC_0(&VAR_1->agp_mm);
  VAR_1->agp_initialized = 0;
 }
 VAR_1->mmio = ((void*)0);
 FUNC_2(&VAR_0->struct_mutex);
}
