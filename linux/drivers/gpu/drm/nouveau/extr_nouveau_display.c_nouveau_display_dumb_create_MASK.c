
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct nouveau_cli {int dummy; } ;
struct TYPE_9__ {int base; } ;
struct nouveau_bo {TYPE_4__ bo; } ;
struct drm_mode_create_dumb {int pitch; int width; int bpp; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ ram_size; } ;
struct TYPE_7__ {TYPE_1__ info; } ;
struct TYPE_8__ {TYPE_2__ device; } ;
struct TYPE_10__ {TYPE_3__ client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_file*,int *,int *) ;
 int FUNC_1 (int *) ;
 struct nouveau_cli* FUNC_2 (struct drm_file*) ;
 TYPE_5__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct nouveau_cli*,int,int ,int ,int ,int ,struct nouveau_bo**) ;
 void* FUNC_5 (int,int) ;

int
FUNC_6(struct drm_file *VAR_3, struct drm_device *VAR_4,
       struct drm_mode_create_dumb *VAR_5)
{
 struct nouveau_cli *VAR_6 = FUNC_2(VAR_3);
 struct nouveau_bo *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_5->pitch = FUNC_5(VAR_5->width * (VAR_5->bpp / 8), 256);
 VAR_5->size = VAR_5->pitch * VAR_5->height;
 VAR_5->size = FUNC_5(VAR_5->size, VAR_2);


 if (FUNC_3(VAR_4)->client.device.info.ram_size != 0)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_0;

 VAR_9 = FUNC_4(VAR_6, VAR_5->size, 0, VAR_8, 0, 0, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_3, &VAR_7->bo.base, &VAR_5->handle);
 FUNC_1(&VAR_7->bo.base);
 return VAR_9;
}
