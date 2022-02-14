
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opts; } ;
typedef TYPE_2__ tag_state ;
struct TYPE_4__ {int num_lines; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const tag_state *VAR_1)
{
 const char *VAR_2 = VAR_0;
 int VAR_3 = VAR_1->opts->num_lines - 1;

 if (!VAR_2) return;


 while(*VAR_2 && *VAR_2 != '\n') FUNC_0("%c", *VAR_2++);


 while(*VAR_2 && *VAR_2 == '\n') VAR_2++;

 FUNC_0("\n");


 if (VAR_3 == 0) return;
 if (*VAR_2 && VAR_2[1]) FUNC_0("\n");


 while (*VAR_2 && VAR_3-- >= 2) {
  FUNC_0("    ");

  while (*VAR_2 && *VAR_2 != '\n') FUNC_0("%c", *VAR_2++);


  if (*VAR_2 && *VAR_2 == '\n' && VAR_2[1] == '\n') {
   VAR_3--;
   FUNC_0("\n");
  }
  while(*VAR_2 && *VAR_2 == '\n') VAR_2++;

  FUNC_0("\n");
 }
}
