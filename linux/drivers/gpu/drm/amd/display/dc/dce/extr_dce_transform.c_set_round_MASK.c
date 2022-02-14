
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_transform {int dummy; } ;
typedef enum dcp_out_trunc_round_mode { ____Placeholder_dcp_out_trunc_round_mode } dcp_out_trunc_round_mode ;
typedef enum dcp_out_trunc_round_depth { ____Placeholder_dcp_out_trunc_round_depth } dcp_out_trunc_round_depth ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(
 struct dce_transform *VAR_2,
 enum dcp_out_trunc_round_mode VAR_3,
 enum dcp_out_trunc_round_depth VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;


 switch (VAR_4) {
 case 132:
  VAR_5 = 6;
  break;
 case 133:
  VAR_5 = 7;
  break;
 case 134:
  VAR_5 = 0;
  break;
 case 135:
  VAR_5 = 1;
  break;
 case 136:
  VAR_5 = 2;
  break;
 case 130:
  VAR_5 = 3;
  break;
 case 131:
  VAR_5 = 4;
  break;
 default:
  VAR_5 = 4;
  FUNC_0();
 }


 switch (VAR_3) {
 case 128:
  VAR_6 = 0;
  break;
 case 129:
  VAR_6 = 1;
  break;
 default:
  FUNC_0();
 }

 VAR_5 |= VAR_6 << 3;

 FUNC_1(VAR_0, 0, VAR_1, VAR_5);
}
