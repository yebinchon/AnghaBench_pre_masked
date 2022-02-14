
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {int extended_regexp_option; int fixed; int pcre2; int pcre1; } ;
typedef enum grep_pattern_type { ____Placeholder_grep_pattern_type } grep_pattern_type ;
__attribute__((used)) static void FUNC_0(enum grep_pattern_type VAR_0, struct grep_opt *VAR_1)
{
 if (VAR_0 != 131 &&
     VAR_1->extended_regexp_option)
  VAR_1->extended_regexp_option = 0;

 switch (VAR_0) {
 case 128:


 case 132:
  break;

 case 131:
  VAR_1->extended_regexp_option = 1;
  break;

 case 130:
  VAR_1->fixed = 1;
  break;

 case 129:
  VAR_1->pcre1 = 1;

  break;
 }
}
