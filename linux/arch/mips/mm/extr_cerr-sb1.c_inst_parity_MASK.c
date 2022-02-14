
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static unsigned char FUNC_0(uint32_t VAR_0)
{
 int VAR_1, VAR_2;
 char VAR_3 = 0;
 for (VAR_2=0; VAR_2<4; VAR_2++) {
  char VAR_4 = 0;
  for (VAR_1=0; VAR_1<8; VAR_1++) {
   if (VAR_0 & 0x80000000)
    VAR_4 = !VAR_4;
   VAR_0 <<= 1;
  }
  VAR_3 <<= 1;
  VAR_3 |= VAR_4;
 }
 return VAR_3;
}
