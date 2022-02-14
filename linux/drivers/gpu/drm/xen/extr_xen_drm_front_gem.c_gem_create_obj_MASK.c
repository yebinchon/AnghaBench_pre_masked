
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_gem_object {int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct xen_gem_object* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int *,size_t) ;
 int FUNC_2 (struct xen_gem_object*) ;
 struct xen_gem_object* FUNC_3 (int,int ) ;

__attribute__((used)) static struct xen_gem_object *FUNC_4(struct drm_device *VAR_2,
          size_t VAR_3)
{
 struct xen_gem_object *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_2, &VAR_4->base, VAR_3);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
