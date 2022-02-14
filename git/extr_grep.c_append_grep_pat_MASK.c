
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {int dummy; } ;
struct grep_opt {int pattern_tail; } ;
typedef enum grep_pat_token { ____Placeholder_grep_pat_token } grep_pat_token ;


 struct grep_pat* FUNC_0 (char const*,size_t,char const*,int,int,int ) ;
 int FUNC_1 (int *,struct grep_pat*) ;

void FUNC_2(struct grep_opt *VAR_0, const char *VAR_1, size_t VAR_2,
       const char *VAR_3, int VAR_4, enum grep_pat_token VAR_5)
{
 struct grep_pat *VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 0);
 FUNC_1(&VAR_0->pattern_tail, VAR_6);
}
