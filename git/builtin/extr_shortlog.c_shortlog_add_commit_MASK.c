
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; scalar_t__ len; } ;
struct shortlog {scalar_t__ user_format; int summary; scalar_t__ email; scalar_t__ committer; int abbrev; } ;
struct TYPE_2__ {int type; } ;
struct pretty_print_context {int print_email_subject; int output_encoding; TYPE_1__ date_mode; int abbrev; int fmt; int member_0; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (struct commit*,char const*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct shortlog*,char*,char*) ;
 int FUNC_3 (struct pretty_print_context*,struct commit*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;

void FUNC_5(struct shortlog *VAR_3, struct commit *VAR_4)
{
 struct strbuf VAR_5 = VAR_2;
 struct strbuf VAR_6 = VAR_2;
 struct pretty_print_context VAR_7 = {0};
 const char *VAR_8;

 VAR_7.fmt = VAR_0;
 VAR_7.abbrev = VAR_3->abbrev;
 VAR_7.print_email_subject = 1;
 VAR_7.date_mode.type = VAR_1;
 VAR_7.output_encoding = FUNC_1();

 VAR_8 = VAR_3->committer ?
  (VAR_3->email ? "%cN <%cE>" : "%cN") :
  (VAR_3->email ? "%aN <%aE>" : "%aN");

 FUNC_0(VAR_4, VAR_8, &VAR_5, &VAR_7);
 if (!VAR_3->summary) {
  if (VAR_3->user_format)
   FUNC_3(&VAR_7, VAR_4, &VAR_6);
  else
   FUNC_0(VAR_4, "%s", &VAR_6, &VAR_7);
 }

 FUNC_2(VAR_3, VAR_5.buf, VAR_6.len ? VAR_6.buf : "<none>");

 FUNC_4(&VAR_5);
 FUNC_4(&VAR_6);
}
