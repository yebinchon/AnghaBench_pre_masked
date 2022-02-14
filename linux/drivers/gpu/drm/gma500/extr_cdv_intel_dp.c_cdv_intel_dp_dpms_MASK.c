
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gma_encoder {struct cdv_intel_dp* dev_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct cdv_intel_dp {int output_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gma_encoder*) ;
 int FUNC_2 (struct gma_encoder*) ;
 int FUNC_3 (struct gma_encoder*,int) ;
 int FUNC_4 (struct gma_encoder*) ;
 int FUNC_5 (struct gma_encoder*) ;
 int FUNC_6 (struct gma_encoder*) ;
 int FUNC_7 (struct gma_encoder*) ;
 int FUNC_8 (struct gma_encoder*) ;
 int FUNC_9 (struct gma_encoder*) ;
 int FUNC_10 (struct gma_encoder*) ;
 int FUNC_11 (struct gma_encoder*) ;
 struct gma_encoder* FUNC_12 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_13(struct drm_encoder *VAR_2, int VAR_3)
{
 struct gma_encoder *VAR_4 = FUNC_12(VAR_2);
 struct cdv_intel_dp *VAR_5 = VAR_4->dev_priv;
 struct drm_device *VAR_6 = VAR_2->dev;
 uint32_t VAR_7 = FUNC_0(VAR_5->output_reg);
 int VAR_8 = FUNC_11(VAR_4);

 if (VAR_3 != VAR_1) {
  if (VAR_8) {
   FUNC_5(VAR_4);
   FUNC_10(VAR_4);
  }
  FUNC_3(VAR_4, VAR_3);
  FUNC_2(VAR_4);
  if (VAR_8) {
   FUNC_9(VAR_4);
   FUNC_7(VAR_4);
  }
 } else {
         if (VAR_8)
   FUNC_8(VAR_4);
  FUNC_3(VAR_4, VAR_3);
  if (!(VAR_7 & VAR_0)) {
   FUNC_4(VAR_4);
   FUNC_1(VAR_4);
  }
  if (VAR_8)
          FUNC_6(VAR_4);
 }
}
