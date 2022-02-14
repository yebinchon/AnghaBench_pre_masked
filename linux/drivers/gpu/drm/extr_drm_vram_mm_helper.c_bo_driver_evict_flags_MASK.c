
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_placement {int dummy; } ;
struct ttm_buffer_object {int bdev; } ;
struct drm_vram_mm {TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* evict_flags ) (struct ttm_buffer_object*,struct ttm_placement*) ;} ;


 struct drm_vram_mm* FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_placement*) ;

__attribute__((used)) static void FUNC_2(struct ttm_buffer_object *VAR_0,
      struct ttm_placement *VAR_1)
{
 struct drm_vram_mm *VAR_2 = FUNC_0(VAR_0->bdev);

 if (VAR_2->funcs && VAR_2->funcs->evict_flags)
  VAR_2->funcs->evict_flags(VAR_0, VAR_1);
}
