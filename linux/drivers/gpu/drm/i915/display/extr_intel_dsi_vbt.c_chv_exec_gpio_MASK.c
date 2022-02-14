
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int seq_version; } ;
struct TYPE_4__ {TYPE_1__ dsi; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct drm_i915_private*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_11,
     u8 VAR_12, u8 VAR_13, bool VAR_14)
{
 u16 VAR_15, VAR_16;
 u16 VAR_17;
 u8 VAR_18;

 if (VAR_11->vbt.dsi.seq_version >= 3) {
  if (VAR_13 >= VAR_3) {

   VAR_13 -= VAR_3;
   VAR_18 = VAR_7;
  } else if (VAR_13 >= VAR_4) {
   VAR_13 -= VAR_4;
   VAR_18 = VAR_8;
  } else if (VAR_13 >= VAR_2) {
   VAR_13 -= VAR_2;
   VAR_18 = VAR_5;
  } else {
   VAR_18 = VAR_6;
  }
 } else {

  if (VAR_12 != 0) {
   FUNC_4("unknown gpio source %u\n", VAR_12);
   return;
  }

  if (VAR_13 >= VAR_2) {
   FUNC_4("invalid gpio index %u for GPIO N\n",
          VAR_13);
   return;
  }

  VAR_18 = VAR_6;
 }

 VAR_17 = VAR_13 / VAR_9;
 VAR_13 = VAR_13 % VAR_9;

 VAR_15 = FUNC_2(VAR_17, VAR_13);
 VAR_16 = FUNC_3(VAR_17, VAR_13);

 FUNC_5(VAR_11, FUNC_0(VAR_10));
 FUNC_7(VAR_11, VAR_18, VAR_16, 0);
 FUNC_7(VAR_11, VAR_18, VAR_15,
     VAR_1 | VAR_0 |
     FUNC_1(VAR_14));
 FUNC_6(VAR_11, FUNC_0(VAR_10));
}
