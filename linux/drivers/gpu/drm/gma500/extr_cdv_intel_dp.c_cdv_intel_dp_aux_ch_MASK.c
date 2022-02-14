
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct gma_encoder {TYPE_1__ base; struct cdv_intel_dp* dev_priv; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int output_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct gma_encoder*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct gma_encoder *VAR_12,
  uint8_t *VAR_13, int VAR_14,
  uint8_t *VAR_15, int VAR_16)
{
 struct cdv_intel_dp *VAR_17 = VAR_12->dev_priv;
 uint32_t VAR_18 = VAR_17->output_reg;
 struct drm_device *VAR_19 = VAR_12->base.dev;
 uint32_t VAR_20 = VAR_18 + 0x10;
 uint32_t VAR_21 = VAR_20 + 4;
 int VAR_22;
 int VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 int VAR_26, VAR_27;







 VAR_25 = 200 / 2;

 VAR_27 = 4;
 if (FUNC_4(VAR_12))
  VAR_27 = 10;

 if (FUNC_2(VAR_20) & VAR_6) {
  FUNC_1("dp_aux_ch not started status 0x%08x\n",
     FUNC_2(VAR_20));
  return -VAR_9;
 }


 for (VAR_26 = 0; VAR_26 < 5; VAR_26++) {

  for (VAR_22 = 0; VAR_22 < VAR_14; VAR_22 += 4)
   FUNC_3(VAR_21 + VAR_22,
       FUNC_5(VAR_13 + VAR_22, VAR_14 - VAR_22));


  FUNC_3(VAR_20,
      VAR_6 |
      VAR_7 |
      (VAR_14 << VAR_3) |
      (VAR_27 << VAR_4) |
      (VAR_25 << VAR_0) |
      VAR_1 |
      VAR_8 |
      VAR_5);
  for (;;) {
   VAR_24 = FUNC_2(VAR_20);
   if ((VAR_24 & VAR_6) == 0)
    break;
   FUNC_6(100);
  }


  FUNC_3(VAR_20,
      VAR_24 |
      VAR_1 |
      VAR_8 |
      VAR_5);
  if (VAR_24 & VAR_1)
   break;
 }

 if ((VAR_24 & VAR_1) == 0) {
  FUNC_1("dp_aux_ch not done status 0x%08x\n", VAR_24);
  return -VAR_9;
 }




 if (VAR_24 & VAR_5) {
  FUNC_1("dp_aux_ch receive error status 0x%08x\n", VAR_24);
  return -VAR_10;
 }



 if (VAR_24 & VAR_8) {
  FUNC_0("dp_aux_ch timeout status 0x%08x\n", VAR_24);
  return -VAR_11;
 }


 VAR_23 = ((VAR_24 & VAR_2) >>
        VAR_3);
 if (VAR_23 > VAR_16)
  VAR_23 = VAR_16;

 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22 += 4)
  FUNC_7(FUNC_2(VAR_21 + VAR_22),
      VAR_15 + VAR_22, VAR_23 - VAR_22);

 return VAR_23;
}
