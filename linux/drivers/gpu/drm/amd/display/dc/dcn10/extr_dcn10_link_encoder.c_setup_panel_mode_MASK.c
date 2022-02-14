
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dcn10_link_encoder {int dummy; } ;
typedef enum dp_panel_mode { ____Placeholder_dp_panel_mode } dp_panel_mode ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(
 struct dcn10_link_encoder *VAR_1,
 enum dp_panel_mode VAR_2)
{
 uint32_t VAR_3;

 if (!FUNC_0(VAR_0))
  return;

 VAR_3 = FUNC_1(VAR_0);

 switch (VAR_2) {
 case 129:
  VAR_3 = 0x1;
  break;
 case 128:
  VAR_3 = 0x11;
  break;
 default:
  VAR_3 = 0x0;
  break;
 }

 FUNC_2(VAR_0, VAR_3);
}
