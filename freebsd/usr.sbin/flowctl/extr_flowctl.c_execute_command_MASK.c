
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* cmd_func ) (int,char**) ;int * cmd_name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (int,char**) ;

__attribute__((used)) static void
FUNC_5(int VAR_1, char **VAR_2)
{
 int VAR_3 = -1;
 int VAR_4;

 if (!VAR_1)
  FUNC_1();
 for (VAR_4 = 0; VAR_0[VAR_4].cmd_name != ((void*)0); VAR_4++)
  if (!FUNC_3(VAR_2[0], VAR_0[VAR_4].cmd_name, FUNC_2(VAR_2[0]))) {
   if (VAR_3 != -1)
    FUNC_0(1, "ambiguous command: %s", VAR_2[0]);
   VAR_3 = VAR_4;
  }
 if (VAR_3 == -1)
  FUNC_0(1, "bad command: %s", VAR_2[0]);
 VAR_1--;
 VAR_2++;
 (*VAR_0[VAR_3].cmd_func)(VAR_1, VAR_2);
}
