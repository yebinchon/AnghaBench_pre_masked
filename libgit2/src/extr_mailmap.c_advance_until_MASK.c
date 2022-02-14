
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* line; scalar_t__ line_len; } ;
typedef TYPE_1__ git_parse_ctx ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1(
 const char **VAR_0, size_t *VAR_1, git_parse_ctx *VAR_2, char VAR_3)
{
 *VAR_0 = VAR_2->line;
 while (VAR_2->line_len > 0 && *VAR_2->line != '#' && *VAR_2->line != VAR_3)
  FUNC_0(VAR_2, 1);

 if (VAR_2->line_len == 0 || *VAR_2->line == '#')
  return -1;

 *VAR_1 = VAR_2->line - *VAR_0;
 FUNC_0(VAR_2, 1);
 return 0;
}
