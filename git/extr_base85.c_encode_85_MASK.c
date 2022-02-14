
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int) ;

void FUNC_2(char *VAR_1, const unsigned char *VAR_2, int VAR_3)
{
 FUNC_0("encode 85");
 while (VAR_3) {
  unsigned VAR_4 = 0;
  int VAR_5;
  for (VAR_5 = 24; VAR_5 >= 0; VAR_5 -= 8) {
   unsigned VAR_6 = *VAR_2++;
   VAR_4 |= VAR_6 << VAR_5;
   if (--VAR_3 == 0)
    break;
  }
  FUNC_1(" %08x", VAR_4);
  for (VAR_5 = 4; VAR_5 >= 0; VAR_5--) {
   int VAR_7 = VAR_4 % 85;
   VAR_4 /= 85;
   VAR_1[VAR_5] = VAR_0[VAR_7];
  }
  VAR_1 += 5;
 }
 FUNC_0("\n");

 *VAR_1 = 0;
}
