
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_private {TYPE_1__ uncore; } ;
typedef int i915_reg_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static u64 FUNC_5(struct drm_i915_private *VAR_2,
        const i915_reg_t VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7 = 2;





 FUNC_4(&VAR_2->uncore.lock);
 FUNC_1(VAR_0,
        FUNC_3(VAR_1));
 VAR_5 = FUNC_0(VAR_3);
 do {
  VAR_6 = VAR_5;

  FUNC_1(VAR_0,
         FUNC_2(VAR_1));
  VAR_4 = FUNC_0(VAR_3);

  FUNC_1(VAR_0,
         FUNC_3(VAR_1));
  VAR_5 = FUNC_0(VAR_3);
 } while (VAR_5 != VAR_6 && --VAR_7);







 return VAR_4 | (u64)VAR_5 << 8;
}
