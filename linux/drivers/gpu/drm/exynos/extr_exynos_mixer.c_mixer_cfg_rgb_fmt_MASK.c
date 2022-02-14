
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mixer_context {int dummy; } ;
struct drm_display_mode {int vdisplay; } ;
typedef enum hdmi_quantization_range { ____Placeholder_hdmi_quantization_range } hdmi_quantization_range ;


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
 int FUNC_0 (double,double,double) ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct mixer_context*,int ,int) ;
 int FUNC_3 (struct mixer_context*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mixer_context *VAR_11, struct drm_display_mode *VAR_12)
{
 enum hdmi_quantization_range VAR_13 = FUNC_1(VAR_12);
 u32 VAR_14;

 if (VAR_12->vdisplay < 720) {
  VAR_14 = VAR_4;
 } else {
  VAR_14 = VAR_5;


  FUNC_2(VAR_11, VAR_10,
   FUNC_0( 0.184, 0.614, 0.063) |
   VAR_9);
  FUNC_2(VAR_11, VAR_7,
   FUNC_0(-0.102, -0.338, 0.440));
  FUNC_2(VAR_11, VAR_8,
   FUNC_0( 0.440, -0.399, -0.040));
 }

 if (VAR_13 == VAR_0)
  VAR_14 |= VAR_2;
 else
  VAR_14 |= VAR_3;

 FUNC_3(VAR_11, VAR_1, VAR_14, VAR_6);
}
