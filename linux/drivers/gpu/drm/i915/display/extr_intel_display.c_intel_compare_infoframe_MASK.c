
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union hdmi_infoframe {int dummy; } hdmi_infoframe ;


 scalar_t__ FUNC_0 (union hdmi_infoframe const*,union hdmi_infoframe const*,int) ;

__attribute__((used)) static bool
FUNC_1(const union hdmi_infoframe *VAR_0,
   const union hdmi_infoframe *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, sizeof(*VAR_0)) == 0;
}
