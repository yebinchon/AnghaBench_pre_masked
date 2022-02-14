
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int fp; int prefix; scalar_t__ null_termination; } ;
struct string_list_item {char* string; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,char*,char,char const*,char) ;
 char* FUNC_1 (char*,int ,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(
 struct string_list_item *VAR_1,
 struct wt_status *VAR_2,
 char VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 const char *VAR_5;
 char VAR_6;

 if (VAR_2->null_termination) {
  VAR_5 = VAR_1->string;
  VAR_6 = '\0';
 } else {
  VAR_5 = FUNC_1(VAR_1->string, VAR_2->prefix, &VAR_4);
  VAR_6 = '\n';
 }

 FUNC_0(VAR_2->fp, "%c %s%c", VAR_3, VAR_5, VAR_6);

 FUNC_2(&VAR_4);
}
