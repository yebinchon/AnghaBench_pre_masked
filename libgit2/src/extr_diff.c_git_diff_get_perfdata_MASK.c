
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int oid_calculations; int stat_calls; } ;
typedef TYPE_2__ git_diff_perfdata ;
struct TYPE_8__ {int oid_calculations; int stat_calls; } ;
struct TYPE_10__ {TYPE_1__ perf; } ;
typedef TYPE_3__ git_diff ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(git_diff_perfdata *VAR_1, const git_diff *VAR_2)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_0, "git_diff_perfdata");
 VAR_1->stat_calls = VAR_2->perf.stat_calls;
 VAR_1->oid_calculations = VAR_2->perf.oid_calculations;
 return 0;
}
