
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u64 ;



void FUNC_0 (const u64 VAR_0, u8 VAR_1[16])
{
  const u8 VAR_2[0x10] =
  {
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    'a', 'b', 'c', 'd', 'e', 'f',
  };

  VAR_1[ 1] = VAR_2[VAR_0 >> 0 & 15];
  VAR_1[ 0] = VAR_2[VAR_0 >> 4 & 15];
  VAR_1[ 3] = VAR_2[VAR_0 >> 8 & 15];
  VAR_1[ 2] = VAR_2[VAR_0 >> 12 & 15];
  VAR_1[ 5] = VAR_2[VAR_0 >> 16 & 15];
  VAR_1[ 4] = VAR_2[VAR_0 >> 20 & 15];
  VAR_1[ 7] = VAR_2[VAR_0 >> 24 & 15];
  VAR_1[ 6] = VAR_2[VAR_0 >> 28 & 15];
  VAR_1[ 9] = VAR_2[VAR_0 >> 32 & 15];
  VAR_1[ 8] = VAR_2[VAR_0 >> 36 & 15];
  VAR_1[11] = VAR_2[VAR_0 >> 40 & 15];
  VAR_1[10] = VAR_2[VAR_0 >> 44 & 15];
  VAR_1[13] = VAR_2[VAR_0 >> 48 & 15];
  VAR_1[12] = VAR_2[VAR_0 >> 52 & 15];
  VAR_1[15] = VAR_2[VAR_0 >> 56 & 15];
  VAR_1[14] = VAR_2[VAR_0 >> 60 & 15];
}
