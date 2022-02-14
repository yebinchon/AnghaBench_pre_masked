
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ am_empty_patch; } ;
struct wt_status {TYPE_1__ state; scalar_t__ hints; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct wt_status*,char const*,int ) ;
 int FUNC_2 (struct wt_status*) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_0,
    const char *VAR_1)
{
 FUNC_1(VAR_0, VAR_1,
  FUNC_0("You are in the middle of an am session."));
 if (VAR_0->state.am_empty_patch)
  FUNC_1(VAR_0, VAR_1,
   FUNC_0("The current patch is empty."));
 if (VAR_0->hints) {
  if (!VAR_0->state.am_empty_patch)
   FUNC_1(VAR_0, VAR_1,
    FUNC_0("  (fix conflicts and then run \"git am --continue\")"));
  FUNC_1(VAR_0, VAR_1,
   FUNC_0("  (use \"git am --skip\" to skip this patch)"));
  FUNC_1(VAR_0, VAR_1,
   FUNC_0("  (use \"git am --abort\" to restore the original branch)"));
 }
 FUNC_2(VAR_0);
}
