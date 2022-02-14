
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0 (const u8 *VAR_0, u8 *VAR_1)
{
  VAR_1[0] = (VAR_0[0] >> 0);
  VAR_1[1] = (VAR_0[0] << 7) | (VAR_0[1] >> 1);
  VAR_1[2] = (VAR_0[1] << 6) | (VAR_0[2] >> 2);
  VAR_1[3] = (VAR_0[2] << 5) | (VAR_0[3] >> 3);
  VAR_1[4] = (VAR_0[3] << 4) | (VAR_0[4] >> 4);
  VAR_1[5] = (VAR_0[4] << 3) | (VAR_0[5] >> 5);
  VAR_1[6] = (VAR_0[5] << 2) | (VAR_0[6] >> 6);
  VAR_1[7] = (VAR_0[6] << 1);

  VAR_1[0] |= 0x01;
  VAR_1[1] |= 0x01;
  VAR_1[2] |= 0x01;
  VAR_1[3] |= 0x01;
  VAR_1[4] |= 0x01;
  VAR_1[5] |= 0x01;
  VAR_1[6] |= 0x01;
  VAR_1[7] |= 0x01;
}
