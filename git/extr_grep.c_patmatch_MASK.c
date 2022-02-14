
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {int regexp; scalar_t__ pcre2_pattern; scalar_t__ pcre1_regexp; } ;
typedef int regmatch_t ;


 int FUNC_0 (struct grep_pat*,char*,char*,int *,int) ;
 int FUNC_1 (struct grep_pat*,char*,char*,int *,int) ;
 int FUNC_2 (int *,char*,int,int,int *,int) ;

__attribute__((used)) static int FUNC_3(struct grep_pat *VAR_0, char *VAR_1, char *VAR_2,
      regmatch_t *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_0->pcre1_regexp)
  VAR_5 = !FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (VAR_0->pcre2_pattern)
  VAR_5 = !FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  VAR_5 = !FUNC_2(&VAR_0->regexp, VAR_1, VAR_2 - VAR_1, 1, VAR_3,
       VAR_4);

 return VAR_5;
}
