
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
union hdmi_infoframe {TYPE_2__ any; } ;
typedef int u8 ;
struct intel_sdvo {int dummy; } ;
struct TYPE_3__ {int enable; union hdmi_infoframe avi; } ;
struct intel_crtc_state {TYPE_1__ infoframes; } ;
typedef scalar_t__ ssize_t ;
typedef int sdvo_data ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (union hdmi_infoframe const*,int *,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct intel_sdvo*,int ,int ,int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct intel_sdvo *VAR_4,
      const struct intel_crtc_state *VAR_5)
{
 u8 VAR_6[FUNC_0(VAR_0)];
 const union hdmi_infoframe *VAR_7 = &VAR_5->infoframes.avi;
 ssize_t VAR_8;

 if ((VAR_5->infoframes.enable &
      FUNC_3(VAR_1)) == 0)
  return 1;

 if (FUNC_1(VAR_7->any.type != VAR_1))
  return 0;

 VAR_8 = FUNC_2(VAR_7, VAR_6, sizeof(VAR_6));
 if (FUNC_1(VAR_8 < 0))
  return 0;

 return FUNC_4(VAR_4, VAR_2,
       VAR_3,
       VAR_6, VAR_8);
}
