
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;


 int FUNC_0 () ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;
 int FUNC_2 (struct dcn10_dpp*,int const*) ;
 int * FUNC_3 (int,int*) ;

void FUNC_4(
  struct dpp *VAR_0,
  enum dc_color_space VAR_1)
{
 struct dcn10_dpp *VAR_2 = FUNC_1(VAR_0);
 const uint16_t *VAR_3 = ((void*)0);
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, &VAR_4);
 if (VAR_3 == ((void*)0)) {
  FUNC_0();
  return;
 }

 FUNC_2(VAR_2, VAR_3);
}
