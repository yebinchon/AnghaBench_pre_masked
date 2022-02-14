
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(unsigned char *VAR_0)
{
  int VAR_1,VAR_2,VAR_3;

  for (VAR_1=0, VAR_2=128-16 ; VAR_1<VAR_2 ; VAR_1+=16, VAR_2-=16) {
    unsigned char VAR_4;
    for (VAR_3=0; VAR_3<16; ++VAR_3) {
      VAR_4=VAR_0[VAR_1+VAR_3];
      VAR_0[VAR_1+VAR_3]=VAR_0[VAR_2+VAR_3];
      VAR_0[VAR_2+VAR_3]=VAR_4;
    }
  }
}
