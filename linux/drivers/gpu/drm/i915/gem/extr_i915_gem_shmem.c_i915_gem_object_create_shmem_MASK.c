
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {TYPE_1__* filp; int size; } ;
struct drm_i915_gem_object {void* read_domains; void* write_domain; TYPE_2__ base; } ;
struct address_space {int dummy; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_gem_object* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct drm_i915_private*,TYPE_2__*,int) ;
 struct drm_i915_gem_object* FUNC_6 () ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (struct drm_i915_gem_object*,int *) ;
 int FUNC_9 (struct drm_i915_gem_object*,unsigned int) ;
 int VAR_12 ;
 int FUNC_10 (struct address_space*) ;
 int FUNC_11 (struct address_space*,int) ;
 scalar_t__ FUNC_12 (int,int ) ;
 int FUNC_13 (struct drm_i915_gem_object*) ;

struct drm_i915_gem_object *
FUNC_14(struct drm_i915_private *VAR_13, u64 VAR_14)
{
 struct drm_i915_gem_object *VAR_15;
 struct address_space *VAR_16;
 unsigned int VAR_17;
 gfp_t VAR_18;
 int VAR_19;






 if (VAR_14 >> VAR_7 > VAR_6)
  return FUNC_0(-VAR_0);

 if (FUNC_12(VAR_14, VAR_15->base.size))
  return FUNC_0(-VAR_0);

 VAR_15 = FUNC_6();
 if (!VAR_15)
  return FUNC_0(-VAR_1);

 VAR_19 = FUNC_5(VAR_13, &VAR_15->base, VAR_14);
 if (VAR_19)
  goto fail;

 VAR_18 = VAR_2 | VAR_11;
 if (FUNC_4(VAR_13) || FUNC_3(VAR_13)) {

  VAR_18 &= ~VAR_9;
  VAR_18 |= VAR_8;
 }

 VAR_16 = VAR_15->base.filp->f_mapping;
 FUNC_11(VAR_16, VAR_18);
 FUNC_1(!(FUNC_10(VAR_16) & VAR_10));

 FUNC_8(VAR_15, &VAR_12);

 VAR_15->write_domain = VAR_5;
 VAR_15->read_domains = VAR_5;

 if (FUNC_2(VAR_13))
  VAR_17 = VAR_3;
 else
  VAR_17 = VAR_4;

 FUNC_9(VAR_15, VAR_17);

 FUNC_13(VAR_15);

 return VAR_15;

fail:
 FUNC_7(VAR_15);
 return FUNC_0(VAR_19);
}
