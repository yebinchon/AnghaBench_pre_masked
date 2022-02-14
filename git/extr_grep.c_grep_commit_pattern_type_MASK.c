
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {int pattern_type_option; scalar_t__ extended_regexp_option; } ;
typedef enum grep_pattern_type { ____Placeholder_grep_pattern_type } grep_pattern_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct grep_opt*) ;

void FUNC_1(enum grep_pattern_type VAR_2, struct grep_opt *VAR_3)
{
 if (VAR_2 != VAR_1)
  FUNC_0(VAR_2, VAR_3);
 else if (VAR_3->pattern_type_option != VAR_1)
  FUNC_0(VAR_3->pattern_type_option, VAR_3);
 else if (VAR_3->extended_regexp_option)





  FUNC_0(VAR_0, VAR_3);
}
