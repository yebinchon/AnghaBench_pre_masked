
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct psb_intel_sdvo {int attached_output; int sdvo_reg; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;


 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct psb_intel_sdvo*) ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct psb_intel_sdvo*,int*,int*) ;
 int FUNC_8 (struct psb_intel_sdvo*,int ) ;
 int FUNC_9 (struct psb_intel_sdvo*,int) ;
 int FUNC_10 (struct psb_intel_sdvo*,int) ;
 struct psb_intel_sdvo* FUNC_11 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_12(struct drm_encoder *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct psb_intel_sdvo *VAR_5 = FUNC_11(VAR_2);
 u32 VAR_6;
 int VAR_7;
 int VAR_8 = FUNC_2(VAR_4) ? 1 : 0;

 switch (VAR_3) {
 case 128:
  FUNC_0("DPMS_ON");
  break;
 case 129:
  FUNC_0("DPMS_OFF");
  break;
 default:
  FUNC_0("DPMS: %d", VAR_3);
 }

 if (VAR_3 != 128) {
  FUNC_8(VAR_5, 0);
  if (0)
   FUNC_9(VAR_5, VAR_3);

  if (VAR_3 == 129) {
   if (VAR_8)
    VAR_6 = FUNC_4(VAR_5->sdvo_reg);
   else
    VAR_6 = FUNC_3(VAR_5->sdvo_reg);

   if ((VAR_6 & VAR_1) != 0) {
    FUNC_10(VAR_5, VAR_6 & ~VAR_1);
   }
  }
 } else {
  bool VAR_9, VAR_10;
  u8 VAR_11;

  if (VAR_8)
   VAR_6 = FUNC_4(VAR_5->sdvo_reg);
  else
   VAR_6 = FUNC_3(VAR_5->sdvo_reg);

  if ((VAR_6 & VAR_1) == 0)
   FUNC_10(VAR_5, VAR_6 | VAR_1);

  for (VAR_7 = 0; VAR_7 < 2; VAR_7++)
   FUNC_6(VAR_4);

  VAR_11 = FUNC_7(VAR_5, &VAR_9, &VAR_10);




  if (VAR_11 == VAR_0 && !VAR_9) {
   FUNC_1("First %s output reported failure to "
     "sync\n", FUNC_5(VAR_5));
  }

  if (0)
   FUNC_9(VAR_5, VAR_3);
  FUNC_8(VAR_5, VAR_5->attached_output);
 }
 return;
}
