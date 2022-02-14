
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ttm_mem_type_manager {scalar_t__ size; } ;
struct TYPE_6__ {int gtt_size; int visible_vram_size; } ;
struct TYPE_4__ {struct ttm_mem_type_manager* man; } ;
struct TYPE_5__ {TYPE_1__ bdev; } ;
struct radeon_device {scalar_t__ gart_pin_size; TYPE_3__ mc; scalar_t__ vram_pin_size; TYPE_2__ mman; } ;
struct drm_radeon_gem_info {int vram_size; int gart_size; int vram_visible; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int FUNC_0(struct drm_device *VAR_2, void *VAR_3,
     struct drm_file *VAR_4)
{
 struct radeon_device *VAR_5 = VAR_2->dev_private;
 struct drm_radeon_gem_info *VAR_6 = VAR_3;
 struct ttm_mem_type_manager *VAR_7;

 VAR_7 = &VAR_5->mman.bdev.man[VAR_1];

 VAR_6->vram_size = (u64)VAR_7->size << VAR_0;
 VAR_6->vram_visible = VAR_5->mc.visible_vram_size;
 VAR_6->vram_visible -= VAR_5->vram_pin_size;
 VAR_6->gart_size = VAR_5->mc.gtt_size;
 VAR_6->gart_size -= VAR_5->gart_pin_size;

 return 0;
}
