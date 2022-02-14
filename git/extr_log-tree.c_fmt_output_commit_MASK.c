
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct rev_info {int dummy; } ;
struct pretty_print_context {int member_0; } ;
struct commit {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,int ,struct rev_info*) ;
 int FUNC_1 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_2 (struct strbuf*) ;

void FUNC_3(struct strbuf *VAR_1,
         struct commit *VAR_2,
         struct rev_info *VAR_3)
{
 struct pretty_print_context VAR_4 = {0};
 struct strbuf VAR_5 = VAR_0;

 FUNC_1(VAR_2, "%f", &VAR_5, &VAR_4);
 FUNC_0(VAR_1, VAR_5.buf, VAR_3);
 FUNC_2(&VAR_5);
}
