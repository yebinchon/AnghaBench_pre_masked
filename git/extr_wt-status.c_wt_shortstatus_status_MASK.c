
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {char* rename_source; scalar_t__ worktree_status; scalar_t__ index_status; } ;
struct wt_status {int prefix; scalar_t__ null_termination; int fp; } ;
struct string_list_item {char* string; struct wt_status_change_data* util; } ;
struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct wt_status*) ;
 int FUNC_1 (int ,int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,char*,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char) ;
 char* FUNC_5 (char*,int ,struct strbuf*) ;
 int VAR_3 ;
 int FUNC_6 (struct strbuf*,char) ;
 int FUNC_7 (struct strbuf*) ;
 int * FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(struct string_list_item *VAR_4,
    struct wt_status *VAR_5)
{
 struct wt_status_change_data *VAR_6 = VAR_4->util;

 if (VAR_6->index_status)
  FUNC_1(VAR_5->fp, FUNC_0(VAR_2, VAR_5), "%c", VAR_6->index_status);
 else
  FUNC_4(' ');
 if (VAR_6->worktree_status)
  FUNC_1(VAR_5->fp, FUNC_0(VAR_1, VAR_5), "%c", VAR_6->worktree_status);
 else
  FUNC_4(' ');
 FUNC_4(' ');
 if (VAR_5->null_termination) {
  FUNC_2(VAR_3, "%s%c", VAR_4->string, 0);
  if (VAR_6->rename_source)
   FUNC_2(VAR_3, "%s%c", VAR_6->rename_source, 0);
 } else {
  struct strbuf VAR_7 = VAR_0;
  const char *VAR_8;

  if (VAR_6->rename_source) {
   VAR_8 = FUNC_5(VAR_6->rename_source, VAR_5->prefix, &VAR_7);
   if (*VAR_8 != '"' && FUNC_8(VAR_8, ' ') != ((void*)0)) {
    FUNC_4('"');
    FUNC_6(&VAR_7, '"');
    VAR_8 = VAR_7.buf;
   }
   FUNC_3("%s -> ", VAR_8);
   FUNC_7(&VAR_7);
  }
  VAR_8 = FUNC_5(VAR_4->string, VAR_5->prefix, &VAR_7);
  if (*VAR_8 != '"' && FUNC_8(VAR_8, ' ') != ((void*)0)) {
   FUNC_4('"');
   FUNC_6(&VAR_7, '"');
   VAR_8 = VAR_7.buf;
  }
  FUNC_3("%s\n", VAR_8);
  FUNC_7(&VAR_7);
 }
}
