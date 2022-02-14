
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {scalar_t__ hints; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct wt_status*) ;
 int FUNC_2 (struct wt_status*,char const*,int ) ;
 int FUNC_3 (struct wt_status*) ;

__attribute__((used)) static void FUNC_4(struct wt_status *VAR_0,
       const char *VAR_1)
{
 if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_0, VAR_1, FUNC_0("You have unmerged paths."));
  if (VAR_0->hints) {
   FUNC_2(VAR_0, VAR_1,
      FUNC_0("  (fix conflicts and run \"git commit\")"));
   FUNC_2(VAR_0, VAR_1,
      FUNC_0("  (use \"git merge --abort\" to abort the merge)"));
  }
 } else {
  FUNC_2(VAR_0, VAR_1,
   FUNC_0("All conflicts fixed but you are still merging."));
  if (VAR_0->hints)
   FUNC_2(VAR_0, VAR_1,
    FUNC_0("  (use \"git commit\" to conclude merge)"));
 }
 FUNC_3(VAR_0);
}
