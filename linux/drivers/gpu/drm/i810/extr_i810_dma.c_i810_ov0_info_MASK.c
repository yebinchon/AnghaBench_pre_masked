
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int overlay_physical; int overlay_offset; } ;
typedef TYPE_1__ drm_i810_private_t ;
struct TYPE_4__ {int physical; int offset; } ;
typedef TYPE_2__ drm_i810_overlay_t ;



__attribute__((used)) static int FUNC_0(struct drm_device *VAR_0, void *VAR_1,
    struct drm_file *VAR_2)
{
 drm_i810_private_t *VAR_3 = (drm_i810_private_t *) VAR_0->dev_private;
 drm_i810_overlay_t *VAR_4 = VAR_1;

 VAR_4->offset = VAR_3->overlay_offset;
 VAR_4->physical = VAR_3->overlay_physical;

 return 0;
}
