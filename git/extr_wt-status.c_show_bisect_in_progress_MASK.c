
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ branch; } ;
struct wt_status {scalar_t__ hints; TYPE_1__ state; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct wt_status*,char const*,int ,...) ;
 int FUNC_2 (struct wt_status*) ;

__attribute__((used)) static void FUNC_3(struct wt_status *VAR_0,
        const char *VAR_1)
{
 if (VAR_0->state.branch)
  FUNC_1(VAR_0, VAR_1,
     FUNC_0("You are currently bisecting, started from branch '%s'."),
     VAR_0->state.branch);
 else
  FUNC_1(VAR_0, VAR_1,
     FUNC_0("You are currently bisecting."));
 if (VAR_0->hints)
  FUNC_1(VAR_0, VAR_1,
   FUNC_0("  (use \"git bisect reset\" to get back to the original branch)"));
 FUNC_2(VAR_0);
}
