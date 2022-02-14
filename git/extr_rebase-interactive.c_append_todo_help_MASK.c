
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct strbuf*,char const*,int ) ;
 int FUNC_4 (struct strbuf*,char) ;
 int FUNC_5 (struct strbuf*,int ,char const*,char const*,int) ;
 int FUNC_6 (char const*) ;

void FUNC_7(unsigned VAR_1, int VAR_2,
        const char *VAR_3, const char *VAR_4,
        struct strbuf *VAR_5)
{
 const char *VAR_6 = FUNC_1("\nCommands:\n"
"p, pick <commit> = use commit\n"
"r, reword <commit> = use commit, but edit the commit message\n"
"e, edit <commit> = use commit, but stop for amending\n"
"s, squash <commit> = use commit, but meld into previous commit\n"
"f, fixup <commit> = like \"squash\", but discard this commit's log message\n"
"x, exec <command> = run command (the rest of the line) using shell\n"
"b, break = stop here (continue rebase later with 'git rebase --continue')\n"
"d, drop <commit> = remove commit\n"
"l, label <label> = label current HEAD with a name\n"
"t, reset <label> = reset HEAD to a label\n"
"m, merge [-C <commit> | -c <commit>] <label> [# <oneline>]\n"
".       create a merge commit using the original merge commit's\n"
".       message (or the oneline, if no original merge commit was\n"
".       specified). Use -c <commit> to reword the commit message.\n"
"\n"
"These lines can be re-ordered; they are executed from top to bottom.\n");
 unsigned VAR_7 = !(VAR_3 && VAR_4);

 if (!VAR_7) {
  FUNC_4(VAR_5, '\n');
  FUNC_5(VAR_5, FUNC_0("Rebase %s onto %s (%d command)",
           "Rebase %s onto %s (%d commands)",
           VAR_2),
          VAR_3, VAR_4, VAR_2);
 }

 FUNC_3(VAR_5, VAR_6, FUNC_6(VAR_6));

 if (FUNC_2() == VAR_0)
  VAR_6 = FUNC_1("\nDo not remove any line. Use 'drop' "
    "explicitly to remove a commit.\n");
 else
  VAR_6 = FUNC_1("\nIf you remove a line here "
    "THAT COMMIT WILL BE LOST.\n");

 FUNC_3(VAR_5, VAR_6, FUNC_6(VAR_6));

 if (VAR_7)
  VAR_6 = FUNC_1("\nYou are editing the todo file "
   "of an ongoing interactive rebase.\n"
   "To continue rebase after editing, run:\n"
   "    git rebase --continue\n\n");
 else
  VAR_6 = FUNC_1("\nHowever, if you remove everything, "
   "the rebase will be aborted.\n\n");

 FUNC_3(VAR_5, VAR_6, FUNC_6(VAR_6));

 if (!VAR_1) {
  VAR_6 = FUNC_1("Note that empty commits are commented out");
  FUNC_3(VAR_5, VAR_6, FUNC_6(VAR_6));
 }
}
