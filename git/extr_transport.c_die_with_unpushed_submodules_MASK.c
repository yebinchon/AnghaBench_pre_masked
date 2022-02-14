
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct TYPE_2__ {char* string; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_3 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_4(struct string_list *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_0, "%s", FUNC_0("The following submodule paths contain changes that can\n"
   "not be found on any remote:\n"));
 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++)
  FUNC_2(VAR_0, "  %s\n", VAR_1->items[VAR_2].string);
 FUNC_2(VAR_0, "%s", FUNC_0("\nPlease try\n\n"
     "	git push --recurse-submodules=on-demand\n\n"
     "or cd to the path and use\n\n"
     "	git push\n\n"
     "to push them to a remote.\n\n"));

 FUNC_3(VAR_1, 0);

 FUNC_1(FUNC_0("Aborting."));
}
