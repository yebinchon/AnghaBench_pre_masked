
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_0, u_char *VAR_1, int VAR_2)
{
 u_char *VAR_3, *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0))
  return (0);
 if ((FUNC_3(VAR_3) < 2) || (*VAR_3 != 'X')) {
  FUNC_0(VAR_4);
  return (0);
 }
 VAR_5 = 0;
 VAR_3++;
 for (;;) {
  if (*VAR_3 == 'X') {
   FUNC_0(VAR_4);
   return (VAR_5);
  }
  if ((FUNC_2(VAR_3, "%2x", &VAR_6) != 1) || (VAR_6 > 0xff)) {
   FUNC_0(VAR_4);
   return (0);
  }
  *(VAR_1++) = VAR_6;
  VAR_5++;
  VAR_3 += 2;
  if (VAR_5 > VAR_2) {
      FUNC_0(VAR_4);
      return (0);
  }
 }
}
