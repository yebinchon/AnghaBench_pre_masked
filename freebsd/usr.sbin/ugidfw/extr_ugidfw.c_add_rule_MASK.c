
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_bsdextended_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,struct mac_bsdextended_rule*,int,char*) ;
 int FUNC_1 (int,char**,struct mac_bsdextended_rule*,int,char*) ;
 int FUNC_2 (struct mac_bsdextended_rule*,char*,int) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(int VAR_1, char *VAR_2[])
{
 char VAR_3[VAR_0], VAR_4[VAR_0];
 struct mac_bsdextended_rule VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_0, VAR_3);
 if (VAR_6) {
  FUNC_4("%s", VAR_3);
  return;
 }

 VAR_6 = FUNC_0(&VAR_7, &VAR_5, VAR_0, VAR_3);
 if (VAR_6) {
  FUNC_4("%s", VAR_3);
  return;
 }
 if (FUNC_2(&VAR_5, VAR_4, VAR_0) == -1)
  FUNC_4("Added rule, but unable to print string.");
 else
  FUNC_3("%d %s\n", VAR_7, VAR_4);
}
