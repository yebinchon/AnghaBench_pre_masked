
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wt_status_state {scalar_t__ bisect_in_progress; scalar_t__ revert_in_progress; scalar_t__ cherry_pick_in_progress; scalar_t__ rebase_interactive_in_progress; scalar_t__ rebase_in_progress; scalar_t__ am_in_progress; scalar_t__ merge_in_progress; } ;
struct wt_status {int fp; struct wt_status_state state; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,struct wt_status*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct wt_status*,char const*) ;
 int FUNC_3 (struct wt_status*,char const*) ;
 int FUNC_4 (struct wt_status*,char const*) ;
 int FUNC_5 (struct wt_status*,char const*) ;
 int FUNC_6 (struct wt_status*,char const*) ;
 int FUNC_7 (struct wt_status*,char const*) ;
 int FUNC_8 (struct wt_status*,char const*) ;

__attribute__((used)) static void FUNC_9(struct wt_status *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_0, VAR_1);
 struct wt_status_state *VAR_3 = &VAR_1->state;

 if (VAR_3->merge_in_progress) {
  if (VAR_3->rebase_interactive_in_progress) {
   FUNC_7(VAR_1, VAR_2);
   FUNC_1("\n", VAR_1->fp);
  }
  FUNC_5(VAR_1, VAR_2);
 } else if (VAR_3->am_in_progress)
  FUNC_2(VAR_1, VAR_2);
 else if (VAR_3->rebase_in_progress || VAR_3->rebase_interactive_in_progress)
  FUNC_6(VAR_1, VAR_2);
 else if (VAR_3->cherry_pick_in_progress)
  FUNC_4(VAR_1, VAR_2);
 else if (VAR_3->revert_in_progress)
  FUNC_8(VAR_1, VAR_2);
 if (VAR_3->bisect_in_progress)
  FUNC_3(VAR_1, VAR_2);
}
