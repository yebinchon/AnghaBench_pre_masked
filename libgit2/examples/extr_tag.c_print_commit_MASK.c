
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* opts; } ;
typedef TYPE_2__ tag_state ;
typedef int git_commit ;
struct TYPE_5__ {scalar_t__ num_lines; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char const*,TYPE_2__ const*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(git_commit *VAR_0, const char *VAR_1,
  const tag_state *VAR_2)
{
 FUNC_2("%-16s", VAR_1);

 if (VAR_2->opts->num_lines) {
  const char *VAR_3 = FUNC_0(VAR_0);
  FUNC_1(VAR_3, VAR_2);
 } else {
  FUNC_2("\n");
 }
}
