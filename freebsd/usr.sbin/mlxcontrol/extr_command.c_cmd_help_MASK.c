
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cmd; char* text; char* desc; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char *VAR_3[])
{
    int VAR_4;

    if (VAR_2 > 1)
 for (VAR_4 = 0; VAR_0[VAR_4].cmd != ((void*)0); VAR_4++)
     if (!FUNC_2(VAR_3[1], VAR_0[VAR_4].cmd)) {
  FUNC_1(VAR_1, "%s\n", VAR_0[VAR_4].text);
  FUNC_0(VAR_1);
  return(0);
     }

    if (VAR_3 != ((void*)0))
 FUNC_1(VAR_1, "Unknown command '%s'.\n", VAR_3[1]);
    FUNC_1(VAR_1, "Valid commands are:\n");
    for (VAR_4 = 0; VAR_0[VAR_4].cmd != ((void*)0); VAR_4++)
 FUNC_1(VAR_1, "  %-20s %s\n", VAR_0[VAR_4].cmd, VAR_0[VAR_4].desc);
    FUNC_0(VAR_1);
    return(0);
}
