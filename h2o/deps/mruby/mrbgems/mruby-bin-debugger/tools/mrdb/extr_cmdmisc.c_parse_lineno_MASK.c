
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
typedef void* mrb_bool ;
struct TYPE_3__ {void* parse_error; void* has_line_max; int line_max; void* has_line_min; int line_min; } ;
typedef TYPE_1__ listcmd_parser_state ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (char**,int *) ;
 scalar_t__ FUNC_1 (char**,char) ;

__attribute__((used)) static mrb_bool
FUNC_2(mrb_state *VAR_2, char **VAR_3, listcmd_parser_state *VAR_4)
{
  if (*VAR_3 == ((void*)0) || **VAR_3 == '\0') {
    return VAR_0;
  }

  VAR_4->has_line_min = VAR_0;
  VAR_4->has_line_max = VAR_0;

  if (FUNC_0(VAR_3, &VAR_4->line_min)) {
    VAR_4->has_line_min = VAR_1;
  }
  else {
    return VAR_0;
  }

  if (FUNC_1(VAR_3, ',')) {
    if (FUNC_0(VAR_3, &VAR_4->line_max)) {
      VAR_4->has_line_max = VAR_1;
    }
    else {
      VAR_4->parse_error = VAR_1;
      return VAR_0;
    }
  }
  return VAR_1;
}
