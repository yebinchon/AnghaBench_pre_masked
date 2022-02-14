
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmw_private {int reservation_sem; } ;
struct vmw_buffer_object {int dummy; } ;
struct drm_mode_create_dumb {int pitch; int width; int bpp; int size; int height; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int tfile; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct vmw_buffer_object**) ;
 TYPE_1__* FUNC_4 (struct drm_file*) ;
 struct vmw_private* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct vmw_private*,int ,int,int,int *,struct vmw_buffer_object**,int *) ;

int FUNC_7(struct drm_file *VAR_0,
      struct drm_device *VAR_1,
      struct drm_mode_create_dumb *VAR_2)
{
 struct vmw_private *VAR_3 = FUNC_5(VAR_1);
 struct vmw_buffer_object *VAR_4;
 int VAR_5;

 VAR_2->pitch = VAR_2->width * ((VAR_2->bpp + 7) / 8);
 VAR_2->size = VAR_2->pitch * VAR_2->height;

 VAR_5 = FUNC_0(&VAR_3->reservation_sem, 1);
 if (FUNC_2(VAR_5 != 0))
  return VAR_5;

 VAR_5 = FUNC_6(VAR_3, FUNC_4(VAR_0)->tfile,
        VAR_2->size, 0, &VAR_2->handle,
        &VAR_4, ((void*)0));
 if (FUNC_2(VAR_5 != 0))
  goto out_no_bo;

 FUNC_3(&VAR_4);
out_no_bo:
 FUNC_1(&VAR_3->reservation_sem);
 return VAR_5;
}
