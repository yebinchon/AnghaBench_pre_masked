
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enc_in_bus_format; int enc_out_bus_format; } ;
struct dw_hdmi {TYPE_1__ hdmi_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dw_hdmi *VAR_0)
{
 if (!FUNC_1(VAR_0->hdmi_data.enc_out_bus_format))
  return 0;

 if (FUNC_0(VAR_0->hdmi_data.enc_in_bus_format) ||
     FUNC_2(VAR_0->hdmi_data.enc_in_bus_format))
  return 1;

 return 0;
}
