
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int onto; scalar_t__ branch; } ;
struct wt_status {TYPE_1__ state; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct wt_status*,char const*,int ,...) ;

__attribute__((used)) static void FUNC_2(struct wt_status *VAR_0,
          const char *VAR_1)
{
 if (VAR_0->state.branch)
  FUNC_1(VAR_0, VAR_1,
     FUNC_0("You are currently rebasing branch '%s' on '%s'."),
     VAR_0->state.branch,
     VAR_0->state.onto);
 else
  FUNC_1(VAR_0, VAR_1,
     FUNC_0("You are currently rebasing."));
}
