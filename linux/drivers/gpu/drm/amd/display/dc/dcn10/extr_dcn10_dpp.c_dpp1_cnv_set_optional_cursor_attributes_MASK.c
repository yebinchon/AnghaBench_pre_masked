
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_cursor_attributes {int scale; int bias; } ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;

void FUNC_2(
  struct dpp *VAR_3,
  struct dpp_cursor_attributes *VAR_4)
{
 struct dcn10_dpp *VAR_5 = FUNC_1(VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_2, VAR_0, VAR_4->bias);
  FUNC_0(VAR_2, VAR_1, VAR_4->scale);
 }
}
