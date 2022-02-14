
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_crt {TYPE_2__ base; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;
struct drm_device {int dummy; } ;
typedef int i915_reg_t ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (struct intel_uncore*,int ) ;
 int FUNC_10 (struct intel_uncore*,int ) ;
 int FUNC_11 (struct intel_uncore*,int ) ;
 int FUNC_12 (struct intel_uncore*,int ,int) ;
 int FUNC_13 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_14 (struct drm_device*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_15(struct intel_crt *VAR_4, u32 VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->base.base.dev;
 struct drm_i915_private *VAR_7 = FUNC_14(VAR_6);
 struct intel_uncore *VAR_8 = &VAR_7->uncore;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13;
 u32 VAR_14, VAR_15, VAR_16;
 u32 VAR_17;
 i915_reg_t VAR_18, VAR_19,
  VAR_20, VAR_21, VAR_22, VAR_23;
 u8 VAR_24;
 enum drm_connector_status VAR_25;

 FUNC_1("starting load-detect on CRT\n");

 VAR_18 = FUNC_0(VAR_5);
 VAR_19 = FUNC_8(VAR_5);
 VAR_20 = FUNC_6(VAR_5);
 VAR_21 = FUNC_7(VAR_5);
 VAR_22 = FUNC_4(VAR_5);
 VAR_23 = FUNC_5(VAR_5);

 VAR_9 = FUNC_10(VAR_8, VAR_18);
 VAR_10 = FUNC_10(VAR_8, VAR_19);
 VAR_14 = FUNC_10(VAR_8, VAR_20);

 VAR_11 = ((VAR_10 >> 16) & 0xfff) + 1;
 VAR_12 = (VAR_10 & 0x7ff) + 1;

 VAR_15 = (VAR_14 & 0xfff) + 1;
 VAR_16 = ((VAR_14 >> 16) & 0xfff) + 1;


 FUNC_12(VAR_8, VAR_18, 0x500050);

 if (!FUNC_3(VAR_7, 2)) {
  u32 VAR_26 = FUNC_10(VAR_8, VAR_22);
  FUNC_12(VAR_8,
       VAR_22,
       VAR_26 | VAR_0);
  FUNC_9(VAR_8, VAR_22);


  FUNC_13(VAR_7, VAR_5);
  VAR_24 = FUNC_11(VAR_8, VAR_1);
  VAR_25 = ((VAR_24 & (1 << 4)) != 0) ?
   VAR_2 :
   VAR_3;

  FUNC_12(VAR_8, VAR_22, VAR_26);
 } else {
  bool VAR_27 = 0;
  int VAR_28, VAR_29;





  if (VAR_15 <= VAR_12 && VAR_16 >= VAR_11) {
   u32 VAR_30 = FUNC_2(VAR_21);
   u32 VAR_31 = (VAR_30 & 0xffff) + 1;

   VAR_15 = VAR_31;
   FUNC_12(VAR_8,
        VAR_20,
        (VAR_15 - 1) |
        ((VAR_16 - 1) << 16));
   VAR_27 = 1;
  }

  if (VAR_15 - VAR_12 >= VAR_11 - VAR_16)
   VAR_13 = (VAR_15 + VAR_12) >> 1;
  else
   VAR_13 = (VAR_11 + VAR_16) >> 1;




  while (FUNC_10(VAR_8, VAR_23) >= VAR_12)
   ;
  while ((VAR_17 = FUNC_10(VAR_8, VAR_23)) <=
         VAR_13)
   ;



  VAR_29 = 0;
  VAR_28 = 0;
  do {
   VAR_28++;

   VAR_24 = FUNC_11(VAR_8, VAR_1);
   if (VAR_24 & (1 << 4))
    VAR_29++;
  } while ((FUNC_10(VAR_8, VAR_23) == VAR_17));


  if (VAR_27)
   FUNC_12(VAR_8, VAR_20, VAR_14);






  VAR_25 = VAR_29 * 4 > VAR_28 * 3 ?
    VAR_2 :
    VAR_3;
 }


 FUNC_12(VAR_8, VAR_18, VAR_9);

 return VAR_25;
}
