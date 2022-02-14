
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum todo_command { ____Placeholder_todo_command } todo_command ;
struct TYPE_2__ {char* str; char c; } ;


 scalar_t__ FUNC_0 (char const*,char const*,char const**) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(enum todo_command VAR_1, const char **VAR_2)
{
 const char *VAR_3 = VAR_0[VAR_1].str;
 const char VAR_4 = VAR_0[VAR_1].c;
 const char *VAR_5 = *VAR_2 + 1;

 return FUNC_0(*VAR_2, VAR_3, VAR_2) ||
  ((VAR_4 && **VAR_2 == VAR_4) &&
   (*VAR_5 == ' ' || *VAR_5 == '\t' || *VAR_5 == '\n' || *VAR_5 == '\r' || !*VAR_5) &&
   (*VAR_2 = VAR_5));
}
