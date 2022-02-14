
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_target {int pt_pid; } ;
struct pmcstat_args {int pa_flags; int pa_targets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmcstat_target* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void
FUNC_4(struct pmcstat_args *VAR_3)
{
 struct pmcstat_target *VAR_4;

 FUNC_1(VAR_3->pa_flags & VAR_1);





 VAR_4 = FUNC_0(&VAR_3->pa_targets);
 FUNC_1(VAR_4 != ((void*)0));

 if (FUNC_3(VAR_4->pt_pid, VAR_2) != 0)
  FUNC_2(VAR_0, "ERROR: cannot signal child process");
}
