
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {int stagemask; } ;
struct wt_status {int prefix; scalar_t__ null_termination; int fp; } ;
struct string_list_item {char* string; struct wt_status_change_data* util; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct wt_status*) ;
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char*,int ,struct strbuf*) ;
 int VAR_2 ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct string_list_item *VAR_3,
      struct wt_status *VAR_4)
{
 struct wt_status_change_data *VAR_5 = VAR_3->util;
 const char *VAR_6 = "??";

 switch (VAR_5->stagemask) {
 case 1: VAR_6 = "DD"; break;
 case 2: VAR_6 = "AU"; break;
 case 3: VAR_6 = "UD"; break;
 case 4: VAR_6 = "UA"; break;
 case 5: VAR_6 = "DU"; break;
 case 6: VAR_6 = "AA"; break;
 case 7: VAR_6 = "UU"; break;
 }
 FUNC_1(VAR_4->fp, FUNC_0(VAR_1, VAR_4), "%s", VAR_6);
 if (VAR_4->null_termination) {
  FUNC_2(VAR_2, " %s%c", VAR_3->string, 0);
 } else {
  struct strbuf VAR_7 = VAR_0;
  const char *VAR_8;
  VAR_8 = FUNC_4(VAR_3->string, VAR_4->prefix, &VAR_7);
  FUNC_3(" %s\n", VAR_8);
  FUNC_5(&VAR_7);
 }
}
