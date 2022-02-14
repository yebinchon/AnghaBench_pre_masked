
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {int stagemask; } ;
struct wt_status {int prefix; } ;
struct string_list_item {int string; struct wt_status_change_data* util; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,struct wt_status*) ;
 int FUNC_1 (char* (*) (int ),int,int) ;
 int FUNC_2 (char*,char,int) ;
 char* FUNC_3 (int ,int ,struct strbuf*) ;
 int FUNC_4 (struct wt_status*,char*,char*) ;
 int FUNC_5 (struct wt_status*,char const*,char*,char const*,int,char*,char const*) ;
 int FUNC_6 (struct strbuf*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (int ) ;
 char* FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct wt_status *VAR_3,
           struct string_list_item *VAR_4)
{
 const char *VAR_5 = FUNC_0(VAR_2, VAR_3);
 struct wt_status_change_data *VAR_6 = VAR_4->util;
 struct strbuf VAR_7 = VAR_0;
 static char *VAR_8;
 static int VAR_9;
 const char *VAR_10, *VAR_11;
 int VAR_12;

 if (!VAR_8) {
  VAR_9 = FUNC_1(FUNC_9, 1, 7);
  VAR_9 += FUNC_7(" ");
  VAR_8 = FUNC_10(VAR_9);
  FUNC_2(VAR_8, ' ', VAR_9);
 }

 VAR_10 = FUNC_3(VAR_4->string, VAR_3->prefix, &VAR_7);
 FUNC_4(VAR_3, FUNC_0(VAR_1, VAR_3), "\t");

 VAR_11 = FUNC_9(VAR_6->stagemask);
 VAR_12 = VAR_9 - FUNC_8(VAR_11);
 FUNC_5(VAR_3, VAR_5, "%s%.*s%s\n", VAR_11, VAR_12, VAR_8, VAR_10);
 FUNC_6(&VAR_7);
}
