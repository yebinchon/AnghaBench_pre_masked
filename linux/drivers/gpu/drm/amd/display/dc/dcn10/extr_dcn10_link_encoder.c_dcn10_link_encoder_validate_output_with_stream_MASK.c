
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_encoder {int dummy; } ;
struct dcn10_link_encoder {int dummy; } ;
struct TYPE_6__ {int pixel_encoding; } ;
struct dc_stream_state {int signal; int phy_pix_clk; TYPE_2__ timing; TYPE_1__* link; } ;
struct TYPE_5__ {int connector_signal; } ;


 int VAR_0 ;







 struct dcn10_link_encoder* FUNC_0 (struct link_encoder*) ;
 int FUNC_1 (struct dcn10_link_encoder*,TYPE_2__*) ;
 int FUNC_2 (struct dcn10_link_encoder*,int ,int,TYPE_2__*) ;
 int FUNC_3 (struct dcn10_link_encoder*,TYPE_2__*,int) ;

bool FUNC_4(
 struct link_encoder *VAR_1,
 const struct dc_stream_state *VAR_2)
{
 struct dcn10_link_encoder *VAR_3 = FUNC_0(VAR_1);
 bool VAR_4;

 switch (VAR_2->signal) {
 case 131:
 case 132:
  VAR_4 = FUNC_2(
   VAR_3,
   VAR_2->link->connector_signal,
   VAR_2->signal,
   &VAR_2->timing);
 break;
 case 129:
  VAR_4 = FUNC_3(
    VAR_3,
    &VAR_2->timing,
    VAR_2->phy_pix_clk * 10);
 break;
 case 134:
 case 133:
  VAR_4 = FUNC_1(
     VAR_3, &VAR_2->timing);
 break;
 case 130:
  VAR_4 = (VAR_2->timing.pixel_encoding == VAR_0) ? 1 : 0;
 break;
 case 128:
  VAR_4 = 1;
  break;
 default:
  VAR_4 = 0;
 break;
 }

 return VAR_4;
}
