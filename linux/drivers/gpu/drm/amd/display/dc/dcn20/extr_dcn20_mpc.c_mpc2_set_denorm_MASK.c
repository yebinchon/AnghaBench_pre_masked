
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;

void FUNC_2(
  struct mpc *VAR_2,
  int VAR_3,
  enum dc_color_depth VAR_4)
{
 struct dcn20_mpc *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = 0;

 switch (VAR_4) {
 case 130:
  VAR_6 = 1;
  break;
 case 129:
  VAR_6 = 2;
  break;
 case 128:
  VAR_6 = 3;
  break;
 case 135:
  VAR_6 = 4;
  break;
 case 134:
  VAR_6 = 5;
  break;
 case 133:
  VAR_6 = 6;
  break;
 case 132:
 case 131:
 default:

  break;
 }

 FUNC_0(VAR_0[VAR_3],
   VAR_1, VAR_6);
}
