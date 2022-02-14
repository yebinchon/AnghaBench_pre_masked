
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct rev_info {int date_mode; } ;
struct repository {int dummy; } ;
struct pretty_print_context {int output_encoding; int date_mode; int member_0; } ;
struct diff_options {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct diff_options*,int ) ;
 int FUNC_1 (struct diff_options*,int ) ;
 int FUNC_2 () ;
 struct commit* FUNC_3 (struct rev_info*) ;
 int FUNC_4 (struct repository*,struct commit*,char const*,struct strbuf*,struct pretty_print_context*) ;
 int FUNC_5 (struct strbuf*,char) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_8(struct repository *VAR_2, struct rev_info *VAR_3, struct diff_options *VAR_4)
{
 static const char VAR_5[] = "  %m %s";
 struct strbuf VAR_6 = VAR_0;
 struct commit *VAR_7;

 while ((VAR_7 = FUNC_3(VAR_3))) {
  struct pretty_print_context VAR_8 = {0};
  VAR_8.date_mode = VAR_3->date_mode;
  VAR_8.output_encoding = FUNC_2();
  FUNC_7(&VAR_6, 0);
  FUNC_4(VAR_2, VAR_7, VAR_5, &VAR_6,
          &VAR_8);
  FUNC_5(&VAR_6, '\n');
  if (VAR_7->object.flags & VAR_1)
   FUNC_1(VAR_4, VAR_6.buf);
  else
   FUNC_0(VAR_4, VAR_6.buf);
 }
 FUNC_6(&VAR_6);
}
