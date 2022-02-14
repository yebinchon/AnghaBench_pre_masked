
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct pretty_print_context {int fmt; int member_0; } ;
struct commit {int dummy; } ;
typedef enum cmit_fmt { ____Placeholder_cmit_fmt } cmit_fmt ;


 int FUNC_0 (struct pretty_print_context*,struct commit const*,struct strbuf*) ;

void FUNC_1(enum cmit_fmt VAR_0, const struct commit *VAR_1,
      struct strbuf *VAR_2)
{
 struct pretty_print_context VAR_3 = {0};
 VAR_3.fmt = VAR_0;
 FUNC_0(&VAR_3, VAR_1, VAR_2);
}
