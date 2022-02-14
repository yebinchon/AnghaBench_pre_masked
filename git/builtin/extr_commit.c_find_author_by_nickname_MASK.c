
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct strbuf {char* buf; } ;
struct rev_info {struct string_list* mailmap; } ;
struct TYPE_2__ {int type; } ;
struct pretty_print_context {TYPE_1__ date_mode; int member_0; } ;
struct commit {int dummy; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 struct string_list VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct string_list*) ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (struct commit*,char*,struct strbuf*,struct pretty_print_context*) ;
 struct commit* FUNC_4 (struct rev_info*) ;
 scalar_t__ FUNC_5 (struct rev_info*) ;
 int FUNC_6 (struct string_list*,int *) ;
 int FUNC_7 (int ,struct rev_info*,int *) ;
 int FUNC_8 (int,char const**,struct rev_info*,int *) ;
 int FUNC_9 (struct strbuf*,char*,char const*) ;
 char const* FUNC_10 (struct strbuf*,int *) ;
 int FUNC_11 (struct strbuf*) ;
 int VAR_3 ;

__attribute__((used)) static const char *FUNC_12(const char *VAR_4)
{
 struct rev_info VAR_5;
 struct commit *VAR_6;
 struct strbuf VAR_7 = VAR_1;
 struct string_list VAR_8 = VAR_2;
 const char *VAR_9[20];
 int VAR_10 = 0;

 FUNC_7(VAR_3, &VAR_5, ((void*)0));
 FUNC_9(&VAR_7, "--author=%s", VAR_4);
 VAR_9[++VAR_10] = "--all";
 VAR_9[++VAR_10] = "-i";
 VAR_9[++VAR_10] = VAR_7.buf;
 VAR_9[++VAR_10] = ((void*)0);
 FUNC_8(VAR_10, VAR_9, &VAR_5, ((void*)0));
 VAR_5.mailmap = &VAR_8;
 FUNC_6(VAR_5.mailmap, ((void*)0));

 if (FUNC_5(&VAR_5))
  FUNC_2(FUNC_0("revision walk setup failed"));
 VAR_6 = FUNC_4(&VAR_5);
 if (VAR_6) {
  struct pretty_print_context VAR_11 = {0};
  VAR_11.date_mode.type = VAR_0;
  FUNC_11(&VAR_7);
  FUNC_3(VAR_6, "%aN <%aE>", &VAR_7, &VAR_11);
  FUNC_1(&VAR_8);
  return FUNC_10(&VAR_7, ((void*)0));
 }
 FUNC_2(FUNC_0("--author '%s' is not 'Name <email>' and matches no existing author"), VAR_4);
}
