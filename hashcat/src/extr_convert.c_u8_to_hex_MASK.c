
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;



void FUNC_0 (const u8 VAR_0, u8 VAR_1[2])
{
  const u8 VAR_2[0x10] =
  {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'a', 'b', 'c', 'd', 'e', 'f',
  };

  VAR_1[1] = VAR_2[VAR_0 >> 0 & 15];
  VAR_1[0] = VAR_2[VAR_0 >> 4 & 15];
}
