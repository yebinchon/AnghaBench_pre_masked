
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_hdcp_shim {int (* read_v_prime_part ) (struct intel_digital_port*,int,int*) ;} ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct intel_digital_port {TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int sha_text ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int ,int ,int) ;
 int FUNC_6 (struct intel_digital_port*) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct intel_digital_port*,int,int*) ;

__attribute__((used)) static
int FUNC_9(struct intel_digital_port *VAR_14,
    const struct intel_hdcp_shim *VAR_15,
    u8 *VAR_16, u8 VAR_17, u8 *VAR_18)
{
 struct drm_i915_private *VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_19 = VAR_14->base.base.dev->dev_private;


 for (VAR_25 = 0; VAR_25 < VAR_1; VAR_25++) {
  VAR_24 = VAR_15->read_v_prime_part(VAR_14, VAR_25, &VAR_20);
  if (VAR_24)
   return VAR_24;
  FUNC_4(FUNC_2(VAR_25), VAR_20);
 }
 VAR_27 = 0;
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_23 = FUNC_6(VAR_14);
 FUNC_4(VAR_5, VAR_23 | VAR_11);
 for (VAR_25 = 0; VAR_25 < VAR_17; VAR_25++) {
  unsigned int VAR_28;
  u8 *VAR_29 = &VAR_16[VAR_25 * VAR_0];


  VAR_28 = sizeof(VAR_21) - VAR_22;
  for (VAR_26 = 0; VAR_26 < VAR_28; VAR_26++)
   VAR_21 |= VAR_29[VAR_26] << ((sizeof(VAR_21) - VAR_26 - 1) * 8);

  VAR_24 = FUNC_7(VAR_19, VAR_21);
  if (VAR_24 < 0)
   return VAR_24;


  VAR_27 += sizeof(VAR_21);
  if (!(VAR_27 % 64))
   FUNC_4(VAR_5, VAR_23 | VAR_11);


  VAR_22 = VAR_0 - VAR_28;
  VAR_21 = 0;
  for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
   VAR_21 |= VAR_29[VAR_28 + VAR_26] <<
     ((sizeof(VAR_21) - VAR_26 - 1) * 8);





  if (sizeof(VAR_21) > VAR_22)
   continue;

  VAR_24 = FUNC_7(VAR_19, VAR_21);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_22 = 0;
  VAR_21 = 0;
  VAR_27 += sizeof(VAR_21);
 }







 if (VAR_22 == 0) {

  FUNC_4(VAR_5, VAR_23 | VAR_9);
  VAR_24 = FUNC_7(VAR_19,
        VAR_18[0] << 8 | VAR_18[1]);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_8);
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_9);
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);

 } else if (VAR_22 == 1) {

  FUNC_4(VAR_5, VAR_23 | VAR_10);
  VAR_21 |= VAR_18[0] << 16 | VAR_18[1] << 8;

  VAR_21 = (VAR_21 & 0xffffff00) >> 8;
  VAR_24 = FUNC_7(VAR_19, VAR_21);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_8);
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_12);
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);

 } else if (VAR_22 == 2) {

  FUNC_4(VAR_5, VAR_23 | VAR_11);
  VAR_21 |= VAR_18[0] << 24 | VAR_18[1] << 16;
  VAR_24 = FUNC_7(VAR_19, VAR_21);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_8);
  for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
   VAR_24 = FUNC_7(VAR_19, 0);
   if (VAR_24 < 0)
    return VAR_24;
   VAR_27 += sizeof(VAR_21);
  }
 } else if (VAR_22 == 3) {

  FUNC_4(VAR_5, VAR_23 | VAR_11);
  VAR_21 |= VAR_18[0] << 24;
  VAR_24 = FUNC_7(VAR_19, VAR_21);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_12);
  VAR_24 = FUNC_7(VAR_19, VAR_18[1]);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_8);
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);


  FUNC_4(VAR_5, VAR_23 | VAR_10);
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);
 } else {
  FUNC_0("Invalid number of leftovers %d\n",
         VAR_22);
  return -VAR_2;
 }

 FUNC_4(VAR_5, VAR_23 | VAR_11);

 while ((VAR_27 % 64) < (64 - sizeof(VAR_21))) {
  VAR_24 = FUNC_7(VAR_19, 0);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_27 += sizeof(VAR_21);
 }






 VAR_21 = (VAR_17 * 5 + 10) * 8;
 VAR_24 = FUNC_7(VAR_19, VAR_21);
 if (VAR_24 < 0)
  return VAR_24;


 FUNC_4(VAR_5, VAR_23 | VAR_7);
 if (FUNC_5(VAR_19, VAR_5,
      VAR_6, 1)) {
  FUNC_1("Timed out waiting for SHA1 complete\n");
  return -VAR_4;
 }
 if (!(FUNC_3(VAR_5) & VAR_13)) {
  FUNC_0("SHA-1 mismatch, HDCP failed\n");
  return -VAR_3;
 }

 return 0;
}
