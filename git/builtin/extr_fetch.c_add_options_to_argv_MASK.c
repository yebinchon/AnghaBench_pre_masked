
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct argv_array*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_1(struct argv_array *VAR_13)
{
 if (VAR_4)
  FUNC_0(VAR_13, "--dry-run");
 if (VAR_7 != -1)
  FUNC_0(VAR_13, VAR_7 ? "--prune" : "--no-prune");
 if (VAR_8 != -1)
  FUNC_0(VAR_13, VAR_8 ? "--prune-tags" : "--no-prune-tags");
 if (VAR_11)
  FUNC_0(VAR_13, "--update-head-ok");
 if (VAR_5)
  FUNC_0(VAR_13, "--force");
 if (VAR_6)
  FUNC_0(VAR_13, "--keep");
 if (VAR_9 == VAR_0)
  FUNC_0(VAR_13, "--recurse-submodules");
 else if (VAR_9 == VAR_1)
  FUNC_0(VAR_13, "--recurse-submodules=on-demand");
 if (VAR_10 == VAR_2)
  FUNC_0(VAR_13, "--tags");
 else if (VAR_10 == VAR_3)
  FUNC_0(VAR_13, "--no-tags");
 if (VAR_12 >= 2)
  FUNC_0(VAR_13, "-v");
 if (VAR_12 >= 1)
  FUNC_0(VAR_13, "-v");
 else if (VAR_12 < 0)
  FUNC_0(VAR_13, "-q");

}
