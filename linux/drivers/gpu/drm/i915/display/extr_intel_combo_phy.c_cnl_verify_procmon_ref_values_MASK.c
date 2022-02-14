
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct cnl_procmon {int dw10; int dw9; int dw1; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int,int ,unsigned int,int ) ;
 struct cnl_procmon* FUNC_4 (struct drm_i915_private*,int) ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_0,
       enum phy VAR_1)
{
 const struct cnl_procmon *VAR_2;
 bool VAR_3;

 VAR_2 = FUNC_4(VAR_0, VAR_1);

 VAR_3 = FUNC_3(VAR_0, VAR_1, FUNC_0(VAR_1),
       (0xff << 16) | 0xff, VAR_2->dw1);
 VAR_3 &= FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_1),
        -1U, VAR_2->dw9);
 VAR_3 &= FUNC_3(VAR_0, VAR_1, FUNC_1(VAR_1),
        -1U, VAR_2->dw10);

 return VAR_3;
}
