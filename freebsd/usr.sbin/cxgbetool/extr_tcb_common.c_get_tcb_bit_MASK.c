
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(unsigned char *VAR_0, int VAR_1)
{
  int VAR_2=0;
  int VAR_3,VAR_4;

  VAR_3 = 127 - (VAR_1>>3);
  VAR_4=VAR_1&0x7;

  VAR_2=(VAR_0[VAR_3] >> VAR_4) & 1;
  return VAR_2;
}
