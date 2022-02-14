
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ start; } ;
struct drm_i915_private {TYPE_1__ mch_res; int bridge_dev; scalar_t__ mchbar_need_disable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct drm_i915_private *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4) >= 4 ? VAR_3 : VAR_2;

 if (VAR_4->mchbar_need_disable) {
  if (FUNC_1(VAR_4) || FUNC_2(VAR_4)) {
   u32 VAR_6;

   FUNC_3(VAR_4->bridge_dev, VAR_0,
           &VAR_6);
   VAR_6 &= ~VAR_1;
   FUNC_4(VAR_4->bridge_dev, VAR_0,
            VAR_6);
  } else {
   u32 VAR_7;

   FUNC_3(VAR_4->bridge_dev, VAR_5,
           &VAR_7);
   VAR_7 &= ~1;
   FUNC_4(VAR_4->bridge_dev, VAR_5,
            VAR_7);
  }
 }

 if (VAR_4->mch_res.start)
  FUNC_5(&VAR_4->mch_res);
}
