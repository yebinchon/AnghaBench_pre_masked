
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
union hdmi_infoframe {TYPE_2__ any; } ;
typedef int u8 ;
struct intel_encoder {int base; } ;
struct intel_digital_port {int (* read_infoframe ) (struct intel_encoder*,struct intel_crtc_state const*,int,int *,int) ;} ;
struct TYPE_3__ {int enable; } ;
struct intel_crtc_state {TYPE_1__ infoframes; } ;
typedef enum hdmi_infoframe_type { ____Placeholder_hdmi_infoframe_type } hdmi_infoframe_type ;
typedef int buffer ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 struct intel_digital_port* FUNC_1 (int *) ;
 int FUNC_2 (union hdmi_infoframe*,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*,int,int *,int) ;

void FUNC_6(struct intel_encoder *VAR_1,
     const struct intel_crtc_state *VAR_2,
     enum hdmi_infoframe_type VAR_3,
     union hdmi_infoframe *VAR_4)
{
 struct intel_digital_port *VAR_5 = FUNC_1(&VAR_1->base);
 u8 VAR_6[VAR_0];
 int VAR_7;

 if ((VAR_2->infoframes.enable &
      FUNC_3(VAR_3)) == 0)
  return;

 VAR_5->read_infoframe(VAR_1, VAR_2,
           VAR_3, VAR_6, sizeof(VAR_6));


 FUNC_4(&VAR_6[1], &VAR_6[0], 3);


 VAR_7 = FUNC_2(VAR_4, VAR_6 + 1, sizeof(VAR_6) - 1);
 if (VAR_7) {
  FUNC_0("Failed to unpack infoframe type 0x%02x\n", VAR_3);
  return;
 }

 if (VAR_4->any.type != VAR_3)
  FUNC_0("Found the wrong infoframe type 0x%x (expected 0x%02x)\n",
         VAR_4->any.type, VAR_3);
}
