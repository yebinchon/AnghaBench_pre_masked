
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t line_len; char* line; } ;
typedef TYPE_1__ git_parse_ctx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;

int FUNC_1(char *VAR_1, git_parse_ctx *VAR_2, int VAR_3)
{
 size_t VAR_4 = VAR_2->line_len;
 const char *VAR_5 = VAR_2->line;

 while (VAR_4) {
  char VAR_6 = *VAR_5;

  if ((VAR_3 & VAR_0) &&
      FUNC_0(VAR_6)) {
   VAR_4--;
   VAR_5++;
   continue;
  }

  *VAR_1 = VAR_6;
  return 0;
 }

 return -1;
}
