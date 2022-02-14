
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct drm_i915_private *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;






 VAR_5 = VAR_3 + VAR_0;
 if (VAR_5 > VAR_4 ||
     (VAR_4 - VAR_5) < sizeof(u32)) {
  FUNC_0(VAR_2->drm.dev,
   "WOPCM: invalid GuC region size: %uK < %uK\n",
   VAR_4 / VAR_1,
   (u32)(VAR_5 + sizeof(u32)) / VAR_1);
  return 0;
 }

 return 1;
}
