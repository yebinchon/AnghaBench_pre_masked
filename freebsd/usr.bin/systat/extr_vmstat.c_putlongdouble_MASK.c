
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int b ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int,char*,int,long double,...) ;

void
FUNC_4(long double VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 char VAR_7[128];

 FUNC_2(VAR_1, VAR_2);





 if (VAR_5 && VAR_0 == 0.0) {
  while (--VAR_3 >= 0)
   FUNC_0(' ');
  return;
 }
 VAR_6 = FUNC_3(VAR_7, sizeof(VAR_7), "%*.*Lf", VAR_3, VAR_4, VAR_0);
 if (VAR_6 != VAR_3)
  VAR_6 = FUNC_3(VAR_7, sizeof(VAR_7), "%*.0Lf", VAR_3, VAR_0);
 if (VAR_6 != VAR_3)
  VAR_6 = FUNC_3(VAR_7, sizeof(VAR_7), "%*.0Lfk", VAR_3 - 1, VAR_0 / 1000);
 if (VAR_6 != VAR_3)
  VAR_6 = FUNC_3(VAR_7, sizeof(VAR_7), "%*.0LfM", VAR_3 - 1, VAR_0 / 1000000);
 if (VAR_6 != VAR_3) {
  while (--VAR_3 >= 0)
   FUNC_0('*');
  return;
 }
 FUNC_1(VAR_7);
}
