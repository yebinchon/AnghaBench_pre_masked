
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct drm_i915_private {TYPE_1__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct drm_i915_private *VAR_3,
       u32 VAR_4, u32 VAR_5)
{





 if (VAR_5 > VAR_4 - VAR_0) {
  FUNC_0(VAR_3->drm.dev, "WOPCM: no space for %s: %uK < %uK\n",
   FUNC_1(VAR_1),
   (VAR_4 - VAR_0) / VAR_2,
   VAR_5 / 1024);
  return 0;
 }

 return 1;
}
