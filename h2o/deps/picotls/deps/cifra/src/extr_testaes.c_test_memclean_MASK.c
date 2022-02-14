
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static void FUNC_4(void)
{
  uint8_t VAR_0[32], VAR_1[32];
  FUNC_3(VAR_0, 0xff, sizeof VAR_0);
  FUNC_1(VAR_0 + 1, sizeof VAR_0 - 2);
  FUNC_0(VAR_0[0] == 0xff);
  FUNC_0(VAR_0[1] == 0x00);
  FUNC_0(VAR_0[16] == 0x00);
  FUNC_0(VAR_0[30] == 0x00);
  FUNC_0(VAR_0[31] == 0xff);

  FUNC_2(VAR_1, VAR_0, sizeof VAR_0);
  FUNC_0(VAR_1[0] == 0xff);
  FUNC_0(VAR_1[1] == 0x00);
  FUNC_0(VAR_1[16] == 0x00);
  FUNC_0(VAR_1[30] == 0x00);
  FUNC_0(VAR_1[31] == 0xff);

  FUNC_3(VAR_1, 0xee, sizeof VAR_0);
  FUNC_0(VAR_1[0] == 0xee);
  FUNC_0(VAR_1[1] == 0xee);
  FUNC_0(VAR_1[2] == 0xee);
  FUNC_0(VAR_1[3] == 0xee);
  FUNC_0(VAR_1[30] == 0xee);
  FUNC_0(VAR_1[31] == 0xee);
}
