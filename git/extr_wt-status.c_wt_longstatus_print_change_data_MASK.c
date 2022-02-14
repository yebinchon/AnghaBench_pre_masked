
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {int index_status; int dirty_submodule; int worktree_status; int rename_status; char* rename_source; int new_submodule_commits; } ;
struct wt_status {int prefix; } ;
struct string_list_item {char* string; struct wt_status_change_data* util; } ;
struct strbuf {int buf; scalar_t__ len; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;

 int VAR_4 ;

 char* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (int,struct wt_status*) ;
 int FUNC_4 (char* (*) (int),char,char) ;
 int FUNC_5 (char*,char,int) ;
 char* FUNC_6 (char*,int ,struct strbuf*) ;
 int FUNC_7 (struct wt_status*,char*,char*) ;
 int FUNC_8 (struct wt_status*,char const*,char*,...) ;
 int FUNC_9 (struct strbuf*,char) ;
 int FUNC_10 (struct strbuf*,char*) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (struct strbuf*,scalar_t__) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (int) ;
 char* FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct wt_status *VAR_5,
         int VAR_6,
         struct string_list_item *VAR_7)
{
 struct wt_status_change_data *VAR_8 = VAR_7->util;
 const char *VAR_9 = FUNC_3(VAR_6, VAR_5);
 int VAR_10;
 char *VAR_11;
 char *VAR_12;
 const char *VAR_13, *VAR_14;
 struct strbuf VAR_15 = VAR_3, VAR_16 = VAR_3;
 struct strbuf VAR_17 = VAR_3;
 static char *VAR_18;
 static int VAR_19;
 const char *VAR_20;
 int VAR_21;

 if (!VAR_18) {

  VAR_19 = FUNC_4(FUNC_15, 'A', 'Z');
  VAR_19 += FUNC_13(" ");
  VAR_18 = FUNC_16(VAR_19);
  FUNC_5(VAR_18, ' ', VAR_19);
 }

 VAR_11 = VAR_12 = VAR_7->string;
 switch (VAR_6) {
 case 128:
  VAR_10 = VAR_8->index_status;
  break;
 case 129:
  if (VAR_8->new_submodule_commits || VAR_8->dirty_submodule) {
   FUNC_10(&VAR_17, " (");
   if (VAR_8->new_submodule_commits)
    FUNC_10(&VAR_17, FUNC_1("new commits, "));
   if (VAR_8->dirty_submodule & VAR_0)
    FUNC_10(&VAR_17, FUNC_1("modified content, "));
   if (VAR_8->dirty_submodule & VAR_1)
    FUNC_10(&VAR_17, FUNC_1("untracked content, "));
   FUNC_12(&VAR_17, VAR_17.len - 2);
   FUNC_9(&VAR_17, ')');
  }
  VAR_10 = VAR_8->worktree_status;
  break;
 default:
  FUNC_0("unhandled change_type %d in wt_longstatus_print_change_data",
      VAR_6);
 }






 if (VAR_8->rename_status == VAR_10)
  VAR_11 = VAR_8->rename_source;

 VAR_13 = FUNC_6(VAR_11, VAR_5->prefix, &VAR_15);
 VAR_14 = FUNC_6(VAR_12, VAR_5->prefix, &VAR_16);

 FUNC_7(VAR_5, FUNC_3(VAR_4, VAR_5), "\t");
 VAR_20 = FUNC_15(VAR_10);
 if (!VAR_20)
  FUNC_0("unhandled diff status %c", VAR_10);
 VAR_21 = VAR_19 - FUNC_14(VAR_20);
 FUNC_2(VAR_21 >= 0);
 if (VAR_11 != VAR_12)
  FUNC_8(VAR_5, VAR_9, "%s%.*s%s -> %s",
       VAR_20, VAR_21, VAR_18, VAR_13, VAR_14);
 else
  FUNC_8(VAR_5, VAR_9, "%s%.*s%s",
       VAR_20, VAR_21, VAR_18, VAR_13);
 if (VAR_17.len) {
  FUNC_8(VAR_5, FUNC_3(VAR_4, VAR_5), "%s", VAR_17.buf);
  FUNC_11(&VAR_17);
 }
 FUNC_8(VAR_5, VAR_2, "\n");
 FUNC_11(&VAR_15);
 FUNC_11(&VAR_16);
}
