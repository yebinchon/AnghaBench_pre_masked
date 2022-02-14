
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* idx2wd; TYPE_2__* head2idx; } ;
typedef TYPE_5__ git_status_list ;
struct TYPE_16__ {scalar_t__ oid_calculations; scalar_t__ stat_calls; } ;
typedef TYPE_6__ git_diff_perfdata ;
struct TYPE_13__ {scalar_t__ oid_calculations; scalar_t__ stat_calls; } ;
struct TYPE_14__ {TYPE_3__ perf; } ;
struct TYPE_11__ {scalar_t__ oid_calculations; scalar_t__ stat_calls; } ;
struct TYPE_12__ {TYPE_1__ perf; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ,char*) ;
 int FUNC_1 (TYPE_6__*) ;

int FUNC_2(
 git_diff_perfdata *VAR_1, const git_status_list *VAR_2)
{
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_0, "git_diff_perfdata");

 VAR_1->stat_calls = 0;
 VAR_1->oid_calculations = 0;

 if (VAR_2->head2idx) {
  VAR_1->stat_calls += VAR_2->head2idx->perf.stat_calls;
  VAR_1->oid_calculations += VAR_2->head2idx->perf.oid_calculations;
 }
 if (VAR_2->idx2wd) {
  VAR_1->stat_calls += VAR_2->idx2wd->perf.stat_calls;
  VAR_1->oid_calculations += VAR_2->idx2wd->perf.oid_calculations;
 }

 return 0;
}
