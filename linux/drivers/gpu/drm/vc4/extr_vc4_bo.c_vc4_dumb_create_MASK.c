
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct vc4_bo {TYPE_1__ base; int madv; } ;
struct drm_mode_create_dumb {int width; int bpp; int pitch; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct vc4_bo*) ;
 int FUNC_2 (struct vc4_bo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct drm_file*,int *,int *) ;
 int FUNC_4 (int *) ;
 struct vc4_bo* FUNC_5 (struct drm_device*,int,int,int ) ;

int FUNC_6(struct drm_file *VAR_2,
      struct drm_device *VAR_3,
      struct drm_mode_create_dumb *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4->width * VAR_4->bpp, 8);
 struct vc4_bo *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_4->pitch < VAR_5)
  VAR_4->pitch = VAR_5;

 if (VAR_4->size < VAR_4->pitch * VAR_4->height)
  VAR_4->size = VAR_4->pitch * VAR_4->height;

 VAR_6 = FUNC_5(VAR_3, VAR_4->size, 0, VAR_0);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_6->madv = VAR_1;

 VAR_7 = FUNC_3(VAR_2, &VAR_6->base.base, &VAR_4->handle);
 FUNC_4(&VAR_6->base.base);

 return VAR_7;
}
