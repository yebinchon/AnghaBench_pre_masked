
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_3,
  bool VAR_4)
{
 struct dcn10_dpp *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1, 3);
  FUNC_0(VAR_0, VAR_2, 1);
 } else {
  FUNC_0(VAR_0, VAR_1, 2);
  FUNC_0(VAR_0, VAR_2, 0);
 }
}
