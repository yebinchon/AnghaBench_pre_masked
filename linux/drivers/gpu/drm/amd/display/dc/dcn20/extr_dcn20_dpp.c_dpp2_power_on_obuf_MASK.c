
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_5 ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

void FUNC_2(
  struct dpp *VAR_6,
 bool VAR_7)
{
 struct dcn20_dpp *VAR_8 = FUNC_1(VAR_6);

 FUNC_0(VAR_0, VAR_5, VAR_7 == 1 ? 1:0);

 FUNC_0(VAR_3,
   VAR_4, VAR_7 == 1 ? 0:1);

 FUNC_0(VAR_1,
   VAR_2, VAR_7 == 1 ? 0:1);
}
