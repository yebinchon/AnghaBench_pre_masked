
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int read_domains; int write_domain; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,int ) ;
 int FUNC_4 (struct drm_i915_gem_object*,int) ;
 int FUNC_5 (struct drm_i915_gem_object*,int,int ) ;

int
FUNC_6(struct drm_i915_gem_object *VAR_5, bool VAR_6)
{
 int VAR_7;

 FUNC_2(VAR_5);

 VAR_7 = FUNC_5(VAR_5,
       VAR_3 |
       (VAR_6 ? VAR_2 : 0),
       VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_4(VAR_5, ~VAR_1);


 if ((VAR_5->read_domains & VAR_1) == 0) {
  FUNC_3(VAR_5, VAR_0);
  VAR_5->read_domains |= VAR_1;
 }




 FUNC_0(VAR_5->write_domain & ~VAR_1);




 if (VAR_6)
  FUNC_1(VAR_5);

 return 0;
}
