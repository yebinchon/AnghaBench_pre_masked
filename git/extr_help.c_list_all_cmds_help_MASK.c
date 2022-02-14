
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct cmdname_help {char* name; int category; int help; } ;
struct TYPE_2__ {char* string; int util; } ;


 int FUNC_0 (struct cmdname_help*,int) ;
 struct string_list VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct cmdname_help*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct string_list*) ;
 int FUNC_4 (struct string_list*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (struct cmdname_help*,int,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct string_list*,int) ;
 int FUNC_10 (struct string_list*) ;
 size_t FUNC_11 (char*) ;

void FUNC_12(void)
{
 struct string_list VAR_3 = VAR_0;
 struct string_list VAR_4 = VAR_0;
 struct cmdname_help *VAR_5;
 int VAR_6, VAR_7;

 FUNC_8(FUNC_1("See 'git help <command>' to read about a specific subcommand"));
 FUNC_5(VAR_2, &VAR_7);

 FUNC_4(&VAR_3);
 if (VAR_3.nr)
  FUNC_7("\n%s\n", FUNC_1("External commands"));
 for (VAR_6 = 0; VAR_6 < VAR_3.nr; VAR_6++)
  FUNC_7("   %s\n", VAR_3.items[VAR_6].string);
 FUNC_9(&VAR_3, 0);

 FUNC_3(VAR_1, &VAR_4);
 FUNC_10(&VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_4.nr; VAR_6++) {
  size_t VAR_8 = FUNC_11(VAR_4.items[VAR_6].string);
  if (VAR_7 < VAR_8)
   VAR_7 = VAR_8;
 }

 if (VAR_4.nr) {
  FUNC_7("\n%s\n", FUNC_1("Command aliases"));
  FUNC_0(VAR_5, VAR_4.nr + 1);
  for (VAR_6 = 0; VAR_6 < VAR_4.nr; VAR_6++) {
   VAR_5[VAR_6].name = VAR_4.items[VAR_6].string;
   VAR_5[VAR_6].help = VAR_4.items[VAR_6].util;
   VAR_5[VAR_6].category = 1;
  }
  VAR_5[VAR_4.nr].name = ((void*)0);
  FUNC_6(VAR_5, 1, VAR_7);
  FUNC_2(VAR_5);
 }
 FUNC_9(&VAR_4, 1);
}
