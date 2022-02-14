
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* opts; } ;
typedef TYPE_2__ tag_state ;
typedef int git_tag ;
struct TYPE_5__ {scalar_t__ num_lines; } ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char const*,TYPE_2__ const*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(git_tag *VAR_0, const tag_state *VAR_1)
{
 FUNC_3("%-16s", FUNC_1(VAR_0));

 if (VAR_1->opts->num_lines) {
  const char *VAR_2 = FUNC_0(VAR_0);
  FUNC_2(VAR_2, VAR_1);
 } else {
  FUNC_3("\n");
 }
}
