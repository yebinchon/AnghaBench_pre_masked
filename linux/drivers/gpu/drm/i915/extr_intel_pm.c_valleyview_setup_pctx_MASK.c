
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int start; } ;
struct drm_i915_private {struct drm_i915_gem_object* vlv_pctx; TYPE_1__ dsm; } ;
struct drm_i915_gem_object {TYPE_2__* stolen; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int start; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_i915_gem_object* FUNC_5 (struct drm_i915_private*,int) ;
 struct drm_i915_gem_object* FUNC_6 (struct drm_i915_private*,int,int ,int) ;
 int FUNC_7 (int ,int,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_4)
{
 struct drm_i915_gem_object *VAR_5;
 resource_size_t VAR_6;
 resource_size_t VAR_7 = 24*1024;
 u32 VAR_8;

 VAR_8 = FUNC_3(VAR_2);
 if (VAR_8) {

  resource_size_t VAR_9;

  VAR_9 = (VAR_8 & (~4095)) - VAR_4->dsm.start;
  VAR_5 = FUNC_6(VAR_4,
              VAR_9,
              VAR_0,
              VAR_7);
  goto out;
 }

 FUNC_1("BIOS didn't set up PCBR, fixing up\n");
 VAR_5 = FUNC_5(VAR_4, VAR_7);
 if (!VAR_5) {
  FUNC_0("not enough stolen space for PCTX, disabling\n");
  goto out;
 }

 FUNC_2(FUNC_7(VAR_3,
         VAR_4->dsm.start,
         VAR_5->stolen->start,
         VAR_1));
 VAR_6 = VAR_4->dsm.start + VAR_5->stolen->start;
 FUNC_4(VAR_2, VAR_6);

out:
 FUNC_1("PCBR: 0x%08x\n", FUNC_3(VAR_2));
 VAR_4->vlv_pctx = VAR_5;
}
