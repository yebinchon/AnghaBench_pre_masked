
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hubp {int dummy; } ;
struct dcn20_hubp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const) ;
 struct dcn20_hubp* FUNC_1 (struct hubp*) ;

void FUNC_2(
  struct hubp *VAR_1,
  uint32_t VAR_2,
  const uint32_t *VAR_3)
{
 int VAR_4;
 struct dcn20_hubp *VAR_5 = FUNC_1(VAR_1);


 for (VAR_4 = 0; VAR_4 < VAR_2 / 4; VAR_4++)
  FUNC_0(VAR_0, VAR_3[VAR_4]);
}
