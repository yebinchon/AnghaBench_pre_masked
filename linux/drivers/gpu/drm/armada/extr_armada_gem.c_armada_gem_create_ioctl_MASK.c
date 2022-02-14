
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_armada_gem_create {size_t size; int handle; } ;
struct armada_gem_object {int obj; } ;


 int FUNC_0 (char*,struct armada_gem_object*,size_t,int ) ;
 int VAR_0 ;
 struct armada_gem_object* FUNC_1 (struct drm_device*,size_t) ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct drm_device *VAR_1, void *VAR_2,
 struct drm_file *VAR_3)
{
 struct drm_armada_gem_create *VAR_4 = VAR_2;
 struct armada_gem_object *VAR_5;
 size_t VAR_6;
 u32 VAR_7;
 int VAR_8;

 if (VAR_4->size == 0)
  return -VAR_0;

 VAR_6 = VAR_4->size;

 VAR_5 = FUNC_1(VAR_1, VAR_6);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3, &VAR_5->obj, &VAR_7);
 if (VAR_8)
  goto err;

 VAR_4->handle = VAR_7;


 FUNC_0("obj %p size %zu handle %#x\n", VAR_5, VAR_6, VAR_7);
 err:
 FUNC_3(&VAR_5->obj);
 return VAR_8;
}
