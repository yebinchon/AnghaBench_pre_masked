
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
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(struct commit *VAR_2)
{
 struct strbuf VAR_3 = VAR_1;
 struct pretty_print_context VAR_4 = {0};
 VAR_4.date_mode.type = VAR_0;
 FUNC_0(VAR_2, " %m %s", &VAR_3, &VAR_4);
 FUNC_1("%s\n", VAR_3.buf);
 FUNC_2(&VAR_3);
}
