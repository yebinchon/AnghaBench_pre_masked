
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* cmd; char* desc; } ;


 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_2)
{
    int VAR_3;

    if (VAR_2 != ((void*)0)) {

 for (VAR_3 = 0; VAR_0[VAR_3].cmd != ((void*)0); VAR_3++)
     if (!FUNC_1(VAR_2, VAR_0[VAR_3].cmd)) {
  FUNC_0(VAR_1, "%s\n", VAR_0[VAR_3].desc);
  return;
     }
 FUNC_0(VAR_1, "Unknown command '%s'\n", VAR_2);
    }


    FUNC_0(VAR_1, "Valid commands are :\n");
    for (VAR_3 = 0; VAR_0[VAR_3].cmd != ((void*)0); VAR_3++)
 FUNC_0(VAR_1, "    %s\n", VAR_0[VAR_3].cmd);
    FUNC_0(VAR_1, "Use help <command> for command-specific help\n");
}
