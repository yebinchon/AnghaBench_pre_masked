
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* tag_name; char const* target; int num_lines; int force; char const* pattern; char const* message; } ;
typedef TYPE_1__ tag_options ;
typedef int * tag_action ;
struct TYPE_8__ {int pos; } ;
typedef TYPE_2__ args_info ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int*,TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_1 (char const**,TYPE_2__*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4(tag_action *VAR_5, tag_options *VAR_6, int VAR_7, char **VAR_8)
{
 args_info VAR_9 = VAR_0;
 *VAR_5 = &VAR_4;

 for (VAR_9.pos = 1; VAR_9.pos < VAR_7; ++VAR_9.pos) {
  const char *VAR_10 = VAR_8[VAR_9.pos];

  if (VAR_10[0] != '-') {
   if (!VAR_6->tag_name)
    VAR_6->tag_name = VAR_10;
   else if (!VAR_6->target)
    VAR_6->target = VAR_10;
   else
    FUNC_2();

   if (*VAR_5 != &VAR_2)
    *VAR_5 = &VAR_1;
  } else if (!FUNC_3(VAR_10, "-n")) {
   VAR_6->num_lines = 1;
   *VAR_5 = &VAR_4;
  } else if (!FUNC_3(VAR_10, "-a")) {
   *VAR_5 = &VAR_2;
  } else if (!FUNC_3(VAR_10, "-f")) {
   VAR_6->force = 1;
  } else if (FUNC_0(&VAR_6->num_lines, &VAR_9, "-n", 0)) {
   *VAR_5 = &VAR_4;
  } else if (FUNC_1(&VAR_6->pattern, &VAR_9, "-l")) {
   *VAR_5 = &VAR_4;
  } else if (FUNC_1(&VAR_6->tag_name, &VAR_9, "-d")) {
   *VAR_5 = &VAR_3;
  } else if (FUNC_1(&VAR_6->message, &VAR_9, "-m")) {
   *VAR_5 = &VAR_2;
  }
 }
}
