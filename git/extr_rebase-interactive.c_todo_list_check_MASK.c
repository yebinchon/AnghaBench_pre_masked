
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct todo_list {int nr; struct todo_item* items; } ;
struct todo_item {int arg_len; struct commit* commit; } ;
struct strbuf {int buf; int len; } ;
struct commit_seen {int dummy; } ;
struct TYPE_2__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
typedef enum missing_commit_check_level { ____Placeholder_missing_commit_check_level } missing_commit_check_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (struct commit_seen*) ;
 int* FUNC_2 (struct commit_seen*,struct commit*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct commit_seen*) ;
 int VAR_4 ;
 int FUNC_8 (struct strbuf*,char*,int ,int ,int ) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct todo_list*,struct todo_item*) ;

int FUNC_11(struct todo_list *VAR_5, struct todo_list *VAR_6)
{
 enum missing_commit_check_level VAR_7 = FUNC_6();
 struct strbuf VAR_8 = VAR_3;
 int VAR_9 = 0, VAR_10;
 struct commit_seen VAR_11;

 FUNC_7(&VAR_11);

 if (VAR_7 == VAR_2)
  goto leave_check;


 for (VAR_10 = 0; VAR_10 < VAR_6->nr; VAR_10++) {
  struct commit *VAR_12 = VAR_6->items[VAR_10].commit;
  if (VAR_12)
   *FUNC_2(&VAR_11, VAR_12) = 1;
 }


 for (VAR_10 = VAR_5->nr - 1; VAR_10 >= 0; VAR_10--) {
  struct todo_item *VAR_13 = VAR_5->items + VAR_10;
  struct commit *VAR_14 = VAR_13->commit;
  if (VAR_14 && !*FUNC_2(&VAR_11, VAR_14)) {
   FUNC_8(&VAR_8, " - %s %.*s\n",
        FUNC_3(&VAR_14->object.oid, VAR_0),
        VAR_13->arg_len,
        FUNC_10(VAR_5, VAR_13));
   *FUNC_2(&VAR_11, VAR_14) = 1;
  }
 }


 if (!VAR_8.len)
  goto leave_check;

 if (VAR_7 == VAR_1)
  VAR_9 = 1;

 FUNC_4(VAR_4,
  "%s", FUNC_0("Warning: some commits may have been dropped accidentally.\n"
  "Dropped commits (newer to older):\n"));


 FUNC_5(VAR_8.buf, VAR_4);
 FUNC_9(&VAR_8);

 FUNC_4(VAR_4, "%s", FUNC_0("To avoid this message, use \"drop\" to "
  "explicitly remove a commit.\n\n"
  "Use 'git config rebase.missingCommitsCheck' to change "
  "the level of warnings.\n"
  "The possible behaviours are: ignore, warn, error.\n\n"));

leave_check:
 FUNC_1(&VAR_11);
 return VAR_9;
}
