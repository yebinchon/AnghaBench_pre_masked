
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static bool FUNC_2(
  struct dpp *VAR_2,
       bool *VAR_3)
{
 bool VAR_4 = 0;
 uint32_t VAR_5 = 0;
 struct dcn10_dpp *VAR_6 = FUNC_1(VAR_2);

 FUNC_0(VAR_1, VAR_0,
   &VAR_5);

 if (VAR_5 == 9) {
  *VAR_3 = 1;
  VAR_4 = 1;
 } else if (VAR_5 == 10) {
  *VAR_3 = 0;
  VAR_4 = 1;
 }
 return VAR_4;
}
