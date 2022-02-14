
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_bsdextended_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char**,struct mac_bsdextended_rule*,int,char*) ;
 int FUNC_1 (int,struct mac_bsdextended_rule*,int,char*) ;
 long FUNC_2 (char*,char**,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;

void
FUNC_5(int VAR_1, char *VAR_2[])
{
 char VAR_3[VAR_0];
 struct mac_bsdextended_rule VAR_4;
 long VAR_5;
 int VAR_6, VAR_7;
 char *VAR_8;

 if (VAR_1 < 1)
  FUNC_3();

 VAR_5 = FUNC_2(VAR_2[0], &VAR_8, 10);
 if (*VAR_8 != '\0')
  FUNC_3();

 if ((long) VAR_5 != (int) VAR_5 || VAR_5 < 0)
  FUNC_3();

 VAR_7 = VAR_5;

 VAR_6 = FUNC_0(VAR_1 - 1, VAR_2 + 1, &VAR_4, VAR_0, VAR_3);
 if (VAR_6) {
  FUNC_4("%s", VAR_3);
  return;
 }

 VAR_6 = FUNC_1(VAR_7, &VAR_4, VAR_0, VAR_3);
 if (VAR_6) {
  FUNC_4("%s", VAR_3);
  return;
 }
}
