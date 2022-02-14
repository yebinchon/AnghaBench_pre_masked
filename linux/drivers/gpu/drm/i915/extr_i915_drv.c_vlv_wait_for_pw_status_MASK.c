
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int uncore; } ;
typedef int reg_value ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int,int ,int,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 i915_reg_t VAR_4 = VAR_0;
 u32 VAR_5;
 int VAR_6;
 VAR_6 = FUNC_2(((VAR_5 =
    FUNC_0(&VAR_1->uncore, VAR_4)) & VAR_2)
         == VAR_3, 3);


 FUNC_1(0, VAR_4, VAR_5, sizeof(VAR_5), 1);

 return VAR_6;
}
