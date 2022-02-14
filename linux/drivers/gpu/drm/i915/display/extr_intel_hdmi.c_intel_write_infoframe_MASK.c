
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
union hdmi_infoframe {TYPE_2__ any; } ;
typedef scalar_t__ u8 ;
struct intel_encoder {int base; } ;
struct intel_digital_port {int (* write_infoframe ) (struct intel_encoder*,struct intel_crtc_state const*,int,scalar_t__*,scalar_t__) ;} ;
struct TYPE_3__ {int enable; } ;
struct intel_crtc_state {TYPE_1__ infoframes; } ;
typedef scalar_t__ ssize_t ;
typedef enum hdmi_infoframe_type { ____Placeholder_hdmi_infoframe_type } hdmi_infoframe_type ;
typedef int buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct intel_digital_port* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (union hdmi_infoframe const*,scalar_t__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*,int,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_1,
      const struct intel_crtc_state *VAR_2,
      enum hdmi_infoframe_type VAR_3,
      const union hdmi_infoframe *VAR_4)
{
 struct intel_digital_port *VAR_5 = FUNC_1(&VAR_1->base);
 u8 VAR_6[VAR_0];
 ssize_t VAR_7;

 if ((VAR_2->infoframes.enable &
      FUNC_3(VAR_3)) == 0)
  return;

 if (FUNC_0(VAR_4->any.type != VAR_3))
  return;


 VAR_7 = FUNC_2(VAR_4, VAR_6 + 1, sizeof(VAR_6) - 1);
 if (FUNC_0(VAR_7 < 0))
  return;


 FUNC_4(&VAR_6[0], &VAR_6[1], 3);
 VAR_6[3] = 0;
 VAR_7++;

 VAR_5->write_infoframe(VAR_1, VAR_2, VAR_3, VAR_6, VAR_7);
}
