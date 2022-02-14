
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line_len; char* line; } ;
typedef TYPE_1__ git_parse_ctx ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(git_parse_ctx *VAR_0)
{
 if (VAR_0->line_len != 1 || VAR_0->line[0] != '\n')
  return -1;

 FUNC_0(VAR_0);
 return 0;
}
