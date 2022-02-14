
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char cyg_uint32 ;


 unsigned char* VAR_0 ;

cyg_uint32
FUNC_0(cyg_uint32 VAR_1, unsigned char *VAR_2, int VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    VAR_1 = VAR_0[(VAR_1 ^ VAR_2[VAR_4]) & 0xff] ^ (VAR_1 >> 8);
  }
  return VAR_1;
}
