
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; scalar_t__ dev_private; } ;
struct TYPE_3__ {int vram_initialized; int vram_offset; int vram_mm; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_4__ {int size; int offset; } ;
typedef TYPE_2__ drm_via_fb_t ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 drm_via_fb_t *VAR_4 = VAR_2;
 drm_via_private_t *VAR_5 = (drm_via_private_t *) VAR_1->dev_private;

 FUNC_2(&VAR_1->struct_mutex);
 FUNC_1(&VAR_5->vram_mm, 0, VAR_4->size >> VAR_0);

 VAR_5->vram_initialized = 1;
 VAR_5->vram_offset = VAR_4->offset;

 FUNC_3(&VAR_1->struct_mutex);
 FUNC_0("offset = %u, size = %u\n", VAR_4->offset, VAR_4->size);

 return 0;

}
