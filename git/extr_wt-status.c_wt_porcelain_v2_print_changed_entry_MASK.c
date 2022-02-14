
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_change_data {char index_status; char worktree_status; char* rename_source; int mode_head; int mode_index; int mode_worktree; int rename_status; char* rename_score; int oid_index; int oid_head; } ;
struct wt_status {int fp; int prefix; scalar_t__ null_termination; } ;
struct string_list_item {char* string; struct wt_status_change_data* util; } ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*,int,int,int,char*,char*,...) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (char*,int ,struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct string_list_item*) ;
 int FUNC_5 (struct wt_status_change_data*,char*) ;

__attribute__((used)) static void FUNC_6(
 struct string_list_item *VAR_1,
 struct wt_status *VAR_2)
{
 struct wt_status_change_data *VAR_3 = VAR_1->util;
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;
 const char *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 char VAR_8[3];
 char VAR_9[5];
 char VAR_10, VAR_11;

 FUNC_4(VAR_1);
 FUNC_5(VAR_3, VAR_9);

 VAR_8[0] = VAR_3->index_status ? VAR_3->index_status : '.';
 VAR_8[1] = VAR_3->worktree_status ? VAR_3->worktree_status : '.';
 VAR_8[2] = 0;

 if (VAR_2->null_termination) {




  VAR_10 = '\0';
  VAR_11 = '\0';
  VAR_6 = VAR_1->string;
  VAR_7 = VAR_3->rename_source;
 } else {






  VAR_10 = '\t';
  VAR_11 = '\n';
  VAR_6 = FUNC_2(VAR_1->string, VAR_2->prefix, &VAR_4);
  if (VAR_3->rename_source)
   VAR_7 = FUNC_2(VAR_3->rename_source, VAR_2->prefix, &VAR_5);
 }

 if (VAR_7)
  FUNC_0(VAR_2->fp, "2 %s %s %06o %06o %06o %s %s %c%s %s%c%s%c",
    VAR_8, VAR_9,
    VAR_3->mode_head, VAR_3->mode_index, VAR_3->mode_worktree,
    FUNC_1(&VAR_3->oid_head), FUNC_1(&VAR_3->oid_index),
    VAR_3->rename_status, VAR_3->rename_score,
    VAR_6, VAR_10, VAR_7, VAR_11);
 else
  FUNC_0(VAR_2->fp, "1 %s %s %06o %06o %06o %s %s %s%c",
    VAR_8, VAR_9,
    VAR_3->mode_head, VAR_3->mode_index, VAR_3->mode_worktree,
    FUNC_1(&VAR_3->oid_head), FUNC_1(&VAR_3->oid_index),
    VAR_6, VAR_11);

 FUNC_3(&VAR_4);
 FUNC_3(&VAR_5);
}
