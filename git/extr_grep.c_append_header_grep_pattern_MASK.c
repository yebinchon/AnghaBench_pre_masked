
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_pat {int dummy; } ;
struct grep_opt {int use_reflog_filter; int header_tail; } ;
typedef enum grep_header_field { ____Placeholder_grep_header_field } grep_header_field ;


 int VAR_0 ;
 int VAR_1 ;
 struct grep_pat* FUNC_0 (char const*,int ,char*,int ,int ,int) ;
 int FUNC_1 (int *,struct grep_pat*) ;
 int FUNC_2 (char const*) ;

void FUNC_3(struct grep_opt *VAR_2,
    enum grep_header_field VAR_3, const char *VAR_4)
{
 struct grep_pat *VAR_5 = FUNC_0(VAR_4, FUNC_2(VAR_4), "header", 0,
          VAR_1, VAR_3);
 if (VAR_3 == VAR_0)
  VAR_2->use_reflog_filter = 1;
 FUNC_1(&VAR_2->header_tail, VAR_5);
}
