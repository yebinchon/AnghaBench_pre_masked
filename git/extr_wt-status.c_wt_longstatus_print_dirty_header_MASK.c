
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status {int hints; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,struct wt_status*) ;
 int FUNC_2 (struct wt_status*,char const*,int ) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_1,
          int VAR_2,
          int VAR_3)
{
 const char *VAR_4 = FUNC_1(VAR_0, VAR_1);

 FUNC_2(VAR_1, VAR_4, FUNC_0("Changes not staged for commit:"));
 if (!VAR_1->hints)
  return;
 if (!VAR_2)
  FUNC_2(VAR_1, VAR_4, FUNC_0("  (use \"git add <file>...\" to update what will be committed)"));
 else
  FUNC_2(VAR_1, VAR_4, FUNC_0("  (use \"git add/rm <file>...\" to update what will be committed)"));
 FUNC_2(VAR_1, VAR_4, FUNC_0("  (use \"git restore <file>...\" to discard changes in working directory)"));
 if (VAR_3)
  FUNC_2(VAR_1, VAR_4, FUNC_0("  (commit or discard the untracked or modified content in submodules)"));
}
