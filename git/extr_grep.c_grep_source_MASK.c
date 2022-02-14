
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {int dummy; } ;
struct grep_opt {int pattern_expression; int all_match; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct grep_opt*,struct grep_source*,int) ;

int FUNC_3(struct grep_opt *VAR_0, struct grep_source *VAR_1)
{




 if (!VAR_0->all_match)
  return FUNC_2(VAR_0, VAR_1, 0);




 FUNC_1(VAR_0->pattern_expression);
 FUNC_2(VAR_0, VAR_1, 1);

 if (!FUNC_0(VAR_0->pattern_expression))
  return 0;

 return FUNC_2(VAR_0, VAR_1, 0);
}
