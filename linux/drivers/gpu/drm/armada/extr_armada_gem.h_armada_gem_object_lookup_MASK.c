
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct armada_gem_object {int dummy; } ;


 struct drm_gem_object* FUNC_0 (struct drm_file*,unsigned int) ;
 struct armada_gem_object* FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static inline struct armada_gem_object *FUNC_2(
 struct drm_file *VAR_0, unsigned VAR_1)
{
 struct drm_gem_object *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
