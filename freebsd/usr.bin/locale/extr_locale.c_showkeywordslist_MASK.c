
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; scalar_t__ type; char* comment; int catid; } ;


 char* VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int ) ;

void
FUNC_4(char *VAR_4)
{
 size_t VAR_5;



 if (VAR_4 == ((void*)0))
  FUNC_1("List of available keywords\n\n");
 else
  FUNC_1("List of available keywords starting with '%s'\n\n",
      VAR_4);
 FUNC_1("%-20s %-12s %-7s %-20s\n", "Keyword", "Category", "Type", "Comment");
 FUNC_1("-------------------- ------------ ------- --------------------\n");
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4 != ((void*)0)) {
   if (FUNC_3(VAR_3[VAR_5].name, VAR_4,
       FUNC_2(VAR_4)) != 0)
    continue;
  }
  FUNC_1("%-20s %-12s %-7s %-20s\n",
   VAR_3[VAR_5].name,
   FUNC_0(VAR_3[VAR_5].catid),
   (VAR_3[VAR_5].type == VAR_2) ? "number" : "string",
   VAR_3[VAR_5].comment);
 }
}
