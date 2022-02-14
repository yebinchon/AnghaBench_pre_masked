
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct dc_link_settings {int dummy; } ;
struct dc_link {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct dc_link*,struct dc_link_settings const*,int) ;
 int FUNC_1 (int) ;

bool FUNC_2(
 struct dc_link *VAR_2,
 const struct dc_link_settings *VAR_3,
 bool VAR_4,
 int VAR_5)
{
 uint8_t VAR_6;
 uint8_t VAR_7 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {

  if (FUNC_0(
    VAR_2,
    VAR_3,
    VAR_4) == VAR_1)
   return 1;

  FUNC_1(VAR_7);
  VAR_7 += VAR_0;
 }

 return 0;
}
