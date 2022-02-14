
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int fp; int prefix; scalar_t__ null_termination; } ;
struct string_list_item {char* string; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct wt_status*) ;
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (int ,char*,char const*,char*,int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*,int ,struct strbuf*) ;
 int VAR_2 ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct string_list_item *VAR_3,
     struct wt_status *VAR_4, const char *VAR_5)
{
 if (VAR_4->null_termination) {
  FUNC_2(VAR_2, "%s %s%c", VAR_5, VAR_3->string, 0);
 } else {
  struct strbuf VAR_6 = VAR_0;
  const char *VAR_7;
  VAR_7 = FUNC_4(VAR_3->string, VAR_4->prefix, &VAR_6);
  FUNC_1(VAR_4->fp, FUNC_0(VAR_1, VAR_4), "%s", VAR_5);
  FUNC_3(" %s\n", VAR_7);
  FUNC_5(&VAR_6);
 }
}
