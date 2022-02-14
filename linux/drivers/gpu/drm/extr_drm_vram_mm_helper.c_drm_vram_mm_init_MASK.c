
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_vram_mm_funcs {int dummy; } ;
struct drm_vram_mm {size_t vram_size; int bdev; struct drm_vram_mm_funcs const* funcs; int vram_base; } ;
struct drm_device {TYPE_1__* anon_inode; } ;
struct TYPE_2__ {int i_mapping; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int) ;
 int FUNC_1 (int *,int ,size_t) ;

int FUNC_2(struct drm_vram_mm *VAR_3, struct drm_device *VAR_4,
       uint64_t VAR_5, size_t VAR_6,
       const struct drm_vram_mm_funcs *VAR_7)
{
 int VAR_8;

 VAR_3->vram_base = VAR_5;
 VAR_3->vram_size = VAR_6;
 VAR_3->funcs = VAR_7;

 VAR_8 = FUNC_0(&VAR_3->bdev, &VAR_2,
     VAR_4->anon_inode->i_mapping,
     1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(&VAR_3->bdev, VAR_1, VAR_6 >> VAR_0);
 if (VAR_8)
  return VAR_8;

 return 0;
}
