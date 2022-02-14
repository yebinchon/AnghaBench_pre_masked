
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
typedef enum ipp_degamma_mode { ____Placeholder_ipp_degamma_mode } ipp_degamma_mode ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ,int ,int) ;
 struct dcn20_dpp* FUNC_2 (struct dpp*) ;
 int FUNC_3 (struct dpp*) ;

void FUNC_4(
  struct dpp *VAR_2,
  enum ipp_degamma_mode VAR_3)
{
 struct dcn20_dpp *VAR_4 = FUNC_2(VAR_2);
 FUNC_3(VAR_2);

 switch (VAR_3) {
 case 130:

  FUNC_1(VAR_0, VAR_1, 0);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1, 1);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_1, 2);
   break;
 default:
  FUNC_0();
  break;
 }
}
