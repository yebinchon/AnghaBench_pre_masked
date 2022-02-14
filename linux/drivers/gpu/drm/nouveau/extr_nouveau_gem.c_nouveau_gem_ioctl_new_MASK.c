
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_cli {int dummy; } ;
struct TYPE_3__ {int base; } ;
struct nouveau_bo {TYPE_1__ bo; } ;
struct TYPE_4__ {int handle; int tile_flags; int tile_mode; int domain; int size; } ;
struct drm_nouveau_gem_new {TYPE_2__ info; int align; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_file*,int *,int *) ;
 int FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (int *) ;
 struct nouveau_cli* FUNC_3 (struct drm_file*) ;
 int FUNC_4 (struct drm_file*,int *,TYPE_2__*) ;
 int FUNC_5 (struct nouveau_cli*,int ,int ,int ,int ,int ,struct nouveau_bo**) ;

int
FUNC_6(struct drm_device *VAR_0, void *VAR_1,
        struct drm_file *VAR_2)
{
 struct nouveau_cli *VAR_3 = FUNC_3(VAR_2);
 struct drm_nouveau_gem_new *VAR_4 = VAR_1;
 struct nouveau_bo *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 VAR_6 = FUNC_5(VAR_3, VAR_4->info.size, VAR_4->align,
         VAR_4->info.domain, VAR_4->info.tile_mode,
         VAR_4->info.tile_flags, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5->bo.base,
        &VAR_4->info.handle);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_4(VAR_2, &VAR_5->bo.base, &VAR_4->info);
  if (VAR_6)
   FUNC_1(VAR_2, VAR_4->info.handle);
 }


 FUNC_2(&VAR_5->bo.base);
 return VAR_6;
}
