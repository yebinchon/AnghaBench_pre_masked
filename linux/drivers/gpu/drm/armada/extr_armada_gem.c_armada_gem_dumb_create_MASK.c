
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_mode_create_dumb {size_t pitch; size_t size; size_t height; int handle; int bpp; int width; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct armada_gem_object {int obj; } ;


 int FUNC_0 (char*,struct armada_gem_object*,size_t,int ) ;
 int VAR_0 ;
 struct armada_gem_object* FUNC_1 (struct drm_device*,size_t) ;
 int FUNC_2 (struct drm_device*,struct armada_gem_object*) ;
 size_t FUNC_3 (int ,int ) ;
 int FUNC_4 (struct drm_file*,int *,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_file *VAR_1, struct drm_device *VAR_2,
 struct drm_mode_create_dumb *VAR_3)
{
 struct armada_gem_object *VAR_4;
 u32 VAR_5;
 size_t VAR_6;
 int VAR_7;

 VAR_3->pitch = FUNC_3(VAR_3->width, VAR_3->bpp);
 VAR_3->size = VAR_6 = VAR_3->pitch * VAR_3->height;

 VAR_4 = FUNC_1(VAR_2, VAR_6);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_4);
 if (VAR_7)
  goto err;

 VAR_7 = FUNC_4(VAR_1, &VAR_4->obj, &VAR_5);
 if (VAR_7)
  goto err;

 VAR_3->handle = VAR_5;


 FUNC_0("obj %p size %zu handle %#x\n", VAR_4, VAR_6, VAR_5);
 err:
 FUNC_5(&VAR_4->obj);
 return VAR_7;
}
