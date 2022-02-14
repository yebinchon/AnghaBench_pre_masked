
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (size_t,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(void)
{
  uint8_t VAR_0[8];
  uint32_t VAR_1[32];

  for (size_t VAR_2 = 0; VAR_2 < 8; VAR_2++)
    VAR_0[VAR_2] = 1 << VAR_2;
  for (size_t VAR_3 = 0; VAR_3 < 32; VAR_3++)
    VAR_1[VAR_3] = 1 << VAR_3;

  for (size_t VAR_4 = 0; VAR_4 < 8; VAR_4++)
  {
    FUNC_0(FUNC_2(VAR_4, VAR_0, 8) == VAR_0[VAR_4]);
  }

  for (size_t VAR_5 = 0; VAR_5 < 32; VAR_5++)
  {
    FUNC_0(FUNC_1(VAR_5, VAR_1, 32) == VAR_1[VAR_5]);
  }
}
