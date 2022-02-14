
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rebase_interactive_in_progress; } ;
struct wt_status {scalar_t__ hints; TYPE_1__ state; } ;
struct string_list {int nr; TYPE_2__* items; } ;
struct TYPE_4__ {int string; } ;


 int FUNC_0 (char*,char*,int) ;
 struct string_list VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,struct string_list*) ;
 int FUNC_4 (struct wt_status*,char const*,char*,...) ;
 int FUNC_5 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_6(struct wt_status *VAR_1,
        const char *VAR_2)
{
 if (VAR_1->state.rebase_interactive_in_progress) {
  int VAR_3;
  int VAR_4 = 2;

  struct string_list VAR_5 = VAR_0;
  struct string_list VAR_6 = VAR_0;

  FUNC_3("rebase-merge/done", &VAR_5);
  if (FUNC_3("rebase-merge/git-rebase-todo",
      &VAR_6))
   FUNC_4(VAR_1, VAR_2,
    FUNC_1("git-rebase-todo is missing."));
  if (VAR_5.nr == 0)
   FUNC_4(VAR_1, VAR_2, FUNC_1("No commands done."));
  else {
   FUNC_4(VAR_1, VAR_2,
    FUNC_0("Last command done (%d command done):",
     "Last commands done (%d commands done):",
     VAR_5.nr),
    VAR_5.nr);
   for (VAR_3 = (VAR_5.nr > VAR_4)
    ? VAR_5.nr - VAR_4 : 0;
    VAR_3 < VAR_5.nr;
    VAR_3++)
    FUNC_4(VAR_1, VAR_2, "   %s", VAR_5.items[VAR_3].string);
   if (VAR_5.nr > VAR_4 && VAR_1->hints)
    FUNC_4(VAR_1, VAR_2,
     FUNC_1("  (see more in file %s)"), FUNC_2("rebase-merge/done"));
  }

  if (VAR_6.nr == 0)
   FUNC_4(VAR_1, VAR_2,
      FUNC_1("No commands remaining."));
  else {
   FUNC_4(VAR_1, VAR_2,
    FUNC_0("Next command to do (%d remaining command):",
     "Next commands to do (%d remaining commands):",
     VAR_6.nr),
    VAR_6.nr);
   for (VAR_3 = 0; VAR_3 < VAR_4 && VAR_3 < VAR_6.nr; VAR_3++)
    FUNC_4(VAR_1, VAR_2, "   %s", VAR_6.items[VAR_3].string);
   if (VAR_1->hints)
    FUNC_4(VAR_1, VAR_2,
     FUNC_1("  (use \"git rebase --edit-todo\" to view and edit)"));
  }
  FUNC_5(&VAR_6, 0);
  FUNC_5(&VAR_5, 0);
 }
}
