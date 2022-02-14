
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct branch {int dummy; } ;
typedef enum ahead_behind_flags { ____Placeholder_ahead_behind_flags } ahead_behind_flags ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int ) ;
 int FUNC_4 (struct branch*,int*,int*,char const**,int ,int) ;
 int FUNC_5 (struct strbuf*,int ,char*,...) ;
 int FUNC_6 (struct strbuf*,int ) ;

int FUNC_7(struct branch *VAR_2, struct strbuf *VAR_3,
    enum ahead_behind_flags VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 const char *VAR_8;
 char *VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_4(VAR_2, &VAR_5, &VAR_6, &VAR_8, 0, VAR_4);
 if (VAR_7 < 0) {
  if (!VAR_8)
   return 0;
  VAR_10 = 1;
 }

 VAR_9 = FUNC_3(VAR_8, 0);
 if (VAR_10) {
  FUNC_5(VAR_3,
   FUNC_1("Your branch is based on '%s', but the upstream is gone.\n"),
   VAR_9);
  if (VAR_1)
   FUNC_6(VAR_3,
    FUNC_1("  (use \"git branch --unset-upstream\" to fixup)\n"));
 } else if (!VAR_7) {
  FUNC_5(VAR_3,
   FUNC_1("Your branch is up to date with '%s'.\n"),
   VAR_9);
 } else if (VAR_4 == VAR_0) {
  FUNC_5(VAR_3,
       FUNC_1("Your branch and '%s' refer to different commits.\n"),
       VAR_9);
  if (VAR_1)
   FUNC_5(VAR_3, FUNC_1("  (use \"%s\" for details)\n"),
        "git status --ahead-behind");
 } else if (!VAR_6) {
  FUNC_5(VAR_3,
   FUNC_0("Your branch is ahead of '%s' by %d commit.\n",
      "Your branch is ahead of '%s' by %d commits.\n",
      VAR_5),
   VAR_9, VAR_5);
  if (VAR_1)
   FUNC_6(VAR_3,
    FUNC_1("  (use \"git push\" to publish your local commits)\n"));
 } else if (!VAR_5) {
  FUNC_5(VAR_3,
   FUNC_0("Your branch is behind '%s' by %d commit, "
          "and can be fast-forwarded.\n",
      "Your branch is behind '%s' by %d commits, "
          "and can be fast-forwarded.\n",
      VAR_6),
   VAR_9, VAR_6);
  if (VAR_1)
   FUNC_6(VAR_3,
    FUNC_1("  (use \"git pull\" to update your local branch)\n"));
 } else {
  FUNC_5(VAR_3,
   FUNC_0("Your branch and '%s' have diverged,\n"
          "and have %d and %d different commit each, "
          "respectively.\n",
      "Your branch and '%s' have diverged,\n"
          "and have %d and %d different commits each, "
          "respectively.\n",
      VAR_5 + VAR_6),
   VAR_9, VAR_5, VAR_6);
  if (VAR_1)
   FUNC_6(VAR_3,
    FUNC_1("  (use \"git pull\" to merge the remote branch into yours)\n"));
 }
 FUNC_2(VAR_9);
 return 1;
}
