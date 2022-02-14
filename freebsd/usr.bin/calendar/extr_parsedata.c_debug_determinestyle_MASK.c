
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, char *VAR_1, int VAR_2, char *VAR_3,
    int VAR_4, char *VAR_5, int VAR_6, char *VAR_7,
    int VAR_8, char *VAR_9, char *VAR_10, char *VAR_11,
    char *VAR_12, int VAR_13)
{

 if (VAR_0 != 0) {
  FUNC_0("-------\ndate: |%s|\n", VAR_1);
  if (VAR_0 == 1)
   return;
 }
 FUNC_0("flags: %x - %s\n", VAR_2, FUNC_1(VAR_2));
 if (VAR_9[0] != '\0')
  FUNC_0("modifieroffset: |%s|\n", VAR_9);
 if (VAR_10[0] != '\0')
  FUNC_0("modifierindex: |%s|\n", VAR_10);
 if (VAR_12[0] != '\0')
  FUNC_0("year: |%s| (%d)\n", VAR_12, VAR_13);
 if (VAR_3[0] != '\0')
  FUNC_0("month: |%s| (%d)\n", VAR_3, VAR_4);
 if (VAR_5[0] != '\0')
  FUNC_0("dayofmonth: |%s| (%d)\n", VAR_5, VAR_6);
 if (VAR_7[0] != '\0')
  FUNC_0("dayofweek: |%s| (%d)\n", VAR_7, VAR_8);
 if (VAR_11[0] != '\0')
  FUNC_0("specialday: |%s|\n", VAR_11);
}
