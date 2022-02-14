
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ignore_submodules; int ignore_untracked_in_submodules; int ignore_dirty_submodules; } ;
struct diff_options {TYPE_1__ flags; } ;


 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

void FUNC_2(struct diff_options *VAR_0,
      const char *VAR_1)
{
 VAR_0->flags.ignore_submodules = 0;
 VAR_0->flags.ignore_untracked_in_submodules = 0;
 VAR_0->flags.ignore_dirty_submodules = 0;

 if (!FUNC_1(VAR_1, "all"))
  VAR_0->flags.ignore_submodules = 1;
 else if (!FUNC_1(VAR_1, "untracked"))
  VAR_0->flags.ignore_untracked_in_submodules = 1;
 else if (!FUNC_1(VAR_1, "dirty"))
  VAR_0->flags.ignore_dirty_submodules = 1;
 else if (FUNC_1(VAR_1, "none"))
  FUNC_0("bad --ignore-submodules argument: %s", VAR_1);




}
