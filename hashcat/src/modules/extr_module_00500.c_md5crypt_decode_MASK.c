
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1 (u8 VAR_0[16], const u8 VAR_1[22])
{
  int VAR_2;

  VAR_2 = FUNC_0 (VAR_1[ 0]) << 0;
  VAR_2 |= FUNC_0 (VAR_1[ 1]) << 6;
  VAR_2 |= FUNC_0 (VAR_1[ 2]) << 12;
  VAR_2 |= FUNC_0 (VAR_1[ 3]) << 18;

  VAR_0[ 0] = (VAR_2 >> 16) & 0xff;
  VAR_0[ 6] = (VAR_2 >> 8) & 0xff;
  VAR_0[12] = (VAR_2 >> 0) & 0xff;

  VAR_2 = FUNC_0 (VAR_1[ 4]) << 0;
  VAR_2 |= FUNC_0 (VAR_1[ 5]) << 6;
  VAR_2 |= FUNC_0 (VAR_1[ 6]) << 12;
  VAR_2 |= FUNC_0 (VAR_1[ 7]) << 18;

  VAR_0[ 1] = (VAR_2 >> 16) & 0xff;
  VAR_0[ 7] = (VAR_2 >> 8) & 0xff;
  VAR_0[13] = (VAR_2 >> 0) & 0xff;

  VAR_2 = FUNC_0 (VAR_1[ 8]) << 0;
  VAR_2 |= FUNC_0 (VAR_1[ 9]) << 6;
  VAR_2 |= FUNC_0 (VAR_1[10]) << 12;
  VAR_2 |= FUNC_0 (VAR_1[11]) << 18;

  VAR_0[ 2] = (VAR_2 >> 16) & 0xff;
  VAR_0[ 8] = (VAR_2 >> 8) & 0xff;
  VAR_0[14] = (VAR_2 >> 0) & 0xff;

  VAR_2 = FUNC_0 (VAR_1[12]) << 0;
  VAR_2 |= FUNC_0 (VAR_1[13]) << 6;
  VAR_2 |= FUNC_0 (VAR_1[14]) << 12;
  VAR_2 |= FUNC_0 (VAR_1[15]) << 18;

  VAR_0[ 3] = (VAR_2 >> 16) & 0xff;
  VAR_0[ 9] = (VAR_2 >> 8) & 0xff;
  VAR_0[15] = (VAR_2 >> 0) & 0xff;

  VAR_2 = FUNC_0 (VAR_1[16]) << 0;
  VAR_2 |= FUNC_0 (VAR_1[17]) << 6;
  VAR_2 |= FUNC_0 (VAR_1[18]) << 12;
  VAR_2 |= FUNC_0 (VAR_1[19]) << 18;

  VAR_0[ 4] = (VAR_2 >> 16) & 0xff;
  VAR_0[10] = (VAR_2 >> 8) & 0xff;
  VAR_0[ 5] = (VAR_2 >> 0) & 0xff;

  VAR_2 = FUNC_0 (VAR_1[20]) << 0;
  VAR_2 |= FUNC_0 (VAR_1[21]) << 6;

  VAR_0[11] = (VAR_2 >> 0) & 0xff;
}
