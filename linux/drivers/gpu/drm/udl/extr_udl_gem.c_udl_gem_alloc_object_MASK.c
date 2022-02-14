
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_gem_object {int flags; int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*,int *,size_t) ;
 int FUNC_1 (struct udl_gem_object*) ;
 struct udl_gem_object* FUNC_2 (int,int ) ;

struct udl_gem_object *FUNC_3(struct drm_device *VAR_2,
         size_t VAR_3)
{
 struct udl_gem_object *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (FUNC_0(VAR_2, &VAR_4->base, VAR_3) != 0) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 VAR_4->flags = VAR_1;
 return VAR_4;
}
