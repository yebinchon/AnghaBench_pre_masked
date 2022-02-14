
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,char*,long double) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(long double VAR_1, int VAR_2, double VAR_3)
{
 char VAR_4[10];
 int VAR_5;
 int VAR_6 = (int)(VAR_1 * VAR_3) + 0.5;

 VAR_5 = FUNC_0(VAR_6, VAR_2);
 if (VAR_6 > VAR_2) {
  FUNC_1(VAR_4, sizeof(VAR_4), "%5.2Lf", VAR_1);
  VAR_5 -= FUNC_2(VAR_4);
  while (VAR_5--)
   FUNC_3(VAR_0, 'X');
  FUNC_4(VAR_0, VAR_4);
  return;
 }
 while (VAR_5--)
  FUNC_3(VAR_0, 'X');
 FUNC_5(VAR_0);
}
