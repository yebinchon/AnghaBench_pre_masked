
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_6__ {TYPE_1__* agp_textures; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_7__ {int agp_mode; scalar_t__ texture_size; scalar_t__ texture_handle; } ;
typedef TYPE_3__ drm_mga_dma_bootstrap_t ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*,TYPE_3__*) ;

int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
        struct drm_file *VAR_3)
{
 drm_mga_dma_bootstrap_t *VAR_4 = VAR_2;
 int VAR_5;
 static const int VAR_6[] = { 0, 1, 2, 2, 4, 4, 4, 4 };
 const drm_mga_private_t *const VAR_7 =
  (drm_mga_private_t *) VAR_1->dev_private;

 VAR_5 = FUNC_1(VAR_1, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_1, VAR_0);
  return VAR_5;
 }

 if (VAR_7->agp_textures != ((void*)0)) {
  VAR_4->texture_handle = VAR_7->agp_textures->offset;
  VAR_4->texture_size = VAR_7->agp_textures->size;
 } else {
  VAR_4->texture_handle = 0;
  VAR_4->texture_size = 0;
 }

 VAR_4->agp_mode = VAR_6[VAR_4->agp_mode & 0x07];

 return VAR_5;
}
