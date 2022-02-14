
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct TYPE_2__ {int type; } ;
struct pretty_print_context {TYPE_1__ date_mode; int member_0; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(struct commit *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 struct pretty_print_context VAR_5 = {0};
 VAR_5.date_mode.type = VAR_0;
 FUNC_0(VAR_3, " %h: %m %s", &VAR_4, &VAR_5);
 FUNC_1(VAR_2, "%s\n", VAR_4.buf);
 FUNC_2(&VAR_4);
}
