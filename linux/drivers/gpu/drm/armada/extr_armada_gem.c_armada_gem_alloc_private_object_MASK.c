
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct armada_gem_object {int obj; } ;


 int FUNC_0 (char*,struct armada_gem_object*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*,int *,size_t) ;
 struct armada_gem_object* FUNC_2 (int,int ) ;
 size_t FUNC_3 (size_t) ;

struct armada_gem_object *
FUNC_4(struct drm_device *VAR_1, size_t VAR_2)
{
 struct armada_gem_object *VAR_3;

 VAR_2 = FUNC_3(VAR_2);

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_1, &VAR_3->obj, VAR_2);

 FUNC_0("alloc private obj %p size %zu\n", VAR_3, VAR_2);

 return VAR_3;
}
