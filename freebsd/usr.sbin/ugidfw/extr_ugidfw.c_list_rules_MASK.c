
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_bsdextended_rule {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct mac_bsdextended_rule*,int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct mac_bsdextended_rule*,char*,int) ;
 int FUNC_4 (int,char*,char*) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char*,...) ;

void
FUNC_7(void)
{
 char VAR_1[VAR_0], VAR_2[VAR_0];
 struct mac_bsdextended_rule VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_0, VAR_1);
 if (VAR_7 == -1) {
  FUNC_6("unable to get rule slots; mac_bsdextended.ko "
      "may not be loaded");
  FUNC_4(1, "bsde_get_rule_slots: %s", VAR_1);
 }

 VAR_6 = FUNC_1(VAR_0, VAR_1);
 if (VAR_6 == -1)
  FUNC_4(1, "bsde_get_rule_count: %s", VAR_1);

 FUNC_5("%d slots, %d rules\n", VAR_7, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  VAR_4 = FUNC_0(VAR_5, &VAR_3, VAR_0, VAR_1);
  switch (VAR_4) {
  case -2:
   continue;
  case -1:
   FUNC_6("rule %d: %s", VAR_5, VAR_1);
   continue;
  case 0:
   break;
  }

  if (FUNC_3(&VAR_3, VAR_2, VAR_0) == -1)
   FUNC_6("unable to translate rule %d to string", VAR_5);
  else
   FUNC_5("%d %s\n", VAR_5, VAR_2);
 }
}
