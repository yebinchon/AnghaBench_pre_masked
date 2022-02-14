
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enc_out_bus_format; } ;
struct dw_hdmi {TYPE_1__ hdmi_data; } ;


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
 int FUNC_0 (struct dw_hdmi*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dw_hdmi*,int,int ,int ) ;
 int FUNC_3 (struct dw_hdmi*,int,int ) ;
 scalar_t__ FUNC_4 (struct dw_hdmi*) ;
 scalar_t__ FUNC_5 (struct dw_hdmi*) ;

__attribute__((used)) static void FUNC_6(struct dw_hdmi *VAR_10)
{
 int VAR_11 = 0;
 int VAR_12 = VAR_3;
 int VAR_13 = 0;


 if (FUNC_5(VAR_10))
  VAR_12 = VAR_2;
 else if (FUNC_4(VAR_10))
  VAR_13 = VAR_1;

 switch (FUNC_1(VAR_10->hdmi_data.enc_out_bus_format)) {
 case 8:
  VAR_11 = VAR_5;
  break;
 case 10:
  VAR_11 = VAR_6;
  break;
 case 12:
  VAR_11 = VAR_7;
  break;
 case 16:
  VAR_11 = VAR_8;
  break;

 default:
  return;
 }


 FUNC_3(VAR_10, VAR_12 | VAR_13, VAR_0);
 FUNC_2(VAR_10, VAR_11, VAR_9,
    VAR_4);

 FUNC_0(VAR_10);
}
