
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
typedef int regs ;
typedef int brand ;


 int FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (char*,int*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 char VAR_2[48];
 u_int VAR_3[4];
 uint64_t VAR_4;
 char *VAR_5;
 u_int VAR_6;






 if (VAR_0 >= 0x80000004) {
  VAR_5 = VAR_2;
  for (VAR_6 = 0x80000002; VAR_6 < 0x80000005; VAR_6++) {
   FUNC_1(VAR_6, VAR_3);
   FUNC_2(VAR_5, VAR_3, sizeof(VAR_3));
   VAR_5 += sizeof(VAR_3);
  }
  VAR_5 = ((void*)0);
  for (VAR_6 = 0; VAR_6 < sizeof(VAR_2) - 1; VAR_6++)
   if (VAR_2[VAR_6] == 'H' && VAR_2[VAR_6 + 1] == 'z')
    VAR_5 = VAR_2 + VAR_6;
  if (VAR_5 != ((void*)0)) {
   VAR_5 -= 5;
   switch (VAR_5[4]) {
   case 'M':
    VAR_6 = 1;
    break;
   case 'G':
    VAR_6 = 1000;
    break;
   case 'T':
    VAR_6 = 1000000;
    break;
   default:
    return;
   }

   if (VAR_5[1] == '.') {
    VAR_4 = ((VAR_5[0]) - '0') * 1000;
    VAR_4 += ((VAR_5[2]) - '0') * 100;
    VAR_4 += ((VAR_5[3]) - '0') * 10;
    VAR_4 *= VAR_6 * 1000;
   } else {
    VAR_4 = ((VAR_5[0]) - '0') * 1000;
    VAR_4 += ((VAR_5[1]) - '0') * 100;
    VAR_4 += ((VAR_5[2]) - '0') * 10;
    VAR_4 += ((VAR_5[3]) - '0');
    VAR_4 *= VAR_6 * 1000000;
   }

   VAR_1 = VAR_4;
  }
 }
}
