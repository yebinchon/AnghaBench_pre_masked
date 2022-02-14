
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_gem_set_domain {int read_domains; int write_domain; int handle; } ;
struct drm_i915_gem_object {int frontbuffer; int write_domain; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_4 (struct drm_file*,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int) ;
 int FUNC_8 (struct drm_i915_gem_object*,int) ;
 int FUNC_9 (struct drm_i915_gem_object*,int) ;
 int FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (struct drm_i915_gem_object*) ;
 int FUNC_12 (struct drm_i915_gem_object*,int,int ) ;
 int FUNC_13 (int ,int ) ;

int
FUNC_14(struct drm_device *VAR_11, void *VAR_12,
     struct drm_file *VAR_13)
{
 struct drm_i915_gem_set_domain *VAR_14 = VAR_12;
 struct drm_i915_gem_object *VAR_15;
 u32 VAR_16 = VAR_14->read_domains;
 u32 VAR_17 = VAR_14->write_domain;
 int VAR_18;


 if ((VAR_17 | VAR_16) & VAR_5)
  return -VAR_0;





 if (VAR_17 && VAR_16 != VAR_17)
  return -VAR_0;

 if (!VAR_16)
  return 0;

 VAR_15 = FUNC_4(VAR_13, VAR_14->handle);
 if (!VAR_15)
  return -VAR_1;
 if (FUNC_0(VAR_15->write_domain) == VAR_16) {
  VAR_18 = 0;
  goto out;
 }






 VAR_18 = FUNC_12(VAR_15,
       VAR_7 |
       VAR_8 |
       (VAR_17 ? VAR_6 : 0),
       VAR_9);
 if (VAR_18)
  goto out;







 if (FUNC_2(VAR_15)) {
  VAR_18 = -VAR_2;
  goto out;
 }
 VAR_18 = FUNC_5(VAR_15);
 if (VAR_18)
  goto out;

 VAR_18 = FUNC_3(VAR_15);
 if (VAR_18)
  goto out_unpin;

 if (VAR_16 & VAR_4)
  VAR_18 = FUNC_9(VAR_15, VAR_17);
 else if (VAR_16 & VAR_3)
  VAR_18 = FUNC_8(VAR_15, VAR_17);
 else
  VAR_18 = FUNC_7(VAR_15, VAR_17);


 FUNC_1(VAR_15);

 FUNC_10(VAR_15);

 if (VAR_17)
  FUNC_13(VAR_15->frontbuffer, VAR_10);

out_unpin:
 FUNC_11(VAR_15);
out:
 FUNC_6(VAR_15);
 return VAR_18;
}
