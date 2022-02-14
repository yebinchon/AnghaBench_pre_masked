
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_target {int pt_pid; } ;
struct pmcstat_args {int pa_flags; int pa_targets; } ;


 int VAR_0 ;
 struct pmcstat_target* FUNC_0 (int *) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct pmcstat_args *VAR_1)
{
 struct pmcstat_target *VAR_2;

 FUNC_1(VAR_1->pa_flags & VAR_0);





 VAR_2 = FUNC_0(&VAR_1->pa_targets);
 return (VAR_2->pt_pid);
}
