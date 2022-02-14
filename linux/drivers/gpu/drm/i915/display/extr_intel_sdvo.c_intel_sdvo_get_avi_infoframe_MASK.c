
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
union hdmi_infoframe {TYPE_1__ any; } ;
typedef int u8 ;
struct intel_sdvo {int dummy; } ;
struct TYPE_4__ {int enable; union hdmi_infoframe avi; } ;
struct intel_crtc_state {TYPE_2__ infoframes; int has_hdmi_sink; } ;
typedef scalar_t__ ssize_t ;
typedef int sdvo_data ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (union hdmi_infoframe*,int *,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct intel_sdvo*,int ,int *,int) ;

__attribute__((used)) static void FUNC_5(struct intel_sdvo *VAR_3,
      struct intel_crtc_state *VAR_4)
{
 u8 VAR_5[FUNC_1(VAR_0)];
 union hdmi_infoframe *VAR_6 = &VAR_4->infoframes.avi;
 ssize_t VAR_7;
 int VAR_8;

 if (!VAR_4->has_hdmi_sink)
  return;

 VAR_7 = FUNC_4(VAR_3, VAR_2,
     VAR_5, sizeof(VAR_5));
 if (VAR_7 < 0) {
  FUNC_0("failed to read AVI infoframe\n");
  return;
 } else if (VAR_7 == 0) {
  return;
 }

 VAR_4->infoframes.enable |=
  FUNC_3(VAR_1);

 VAR_8 = FUNC_2(VAR_6, VAR_5, VAR_7);
 if (VAR_8) {
  FUNC_0("Failed to unpack AVI infoframe\n");
  return;
 }

 if (VAR_6->any.type != VAR_1)
  FUNC_0("Found the wrong infoframe type 0x%x (expected 0x%02x)\n",
         VAR_6->any.type, VAR_1);
}
