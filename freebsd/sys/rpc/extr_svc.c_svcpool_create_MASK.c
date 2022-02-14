
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct sysctl_oid_list {int dummy; } ;
struct TYPE_7__ {int sg_minthreads; int sg_maxthreads; int sg_idlethreads; int sg_active; int sg_xlist; int sg_state; TYPE_1__* sg_pool; int sg_lock; } ;
struct TYPE_6__ {char const* sp_name; int sp_minthreads; int sp_maxthreads; int sp_groupcount; int sp_space_high; int sp_space_low; int sp_space_used; int sp_space_used_highest; int sp_space_throttled; int sp_space_throttle_count; int sp_sysctl; TYPE_2__* sp_groups; int sp_lcallouts; int sp_callouts; int * sp_proc; int sp_state; int sp_lock; } ;
typedef TYPE_1__ SVCPOOL ;
typedef TYPE_2__ SVCGROUP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,struct sysctl_oid_list*,int ,char*,int,int*,int ,char*) ;
 int FUNC_2 (int *,struct sysctl_oid_list*,int ,char*,int,TYPE_1__*,int ,int ,char*,char*) ;
 int FUNC_3 (int *,struct sysctl_oid_list*,int ,char*,int,int*,char*) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *,char*,int *,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int *) ;

SVCPOOL*
FUNC_8(const char *VAR_16, struct sysctl_oid_list *VAR_17)
{
 SVCPOOL *VAR_18;
 SVCGROUP *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_5(sizeof(SVCPOOL), VAR_5, VAR_6|VAR_7);

 FUNC_6(&VAR_18->sp_lock, "sp_lock", ((void*)0), VAR_4);
 VAR_18->sp_name = VAR_16;
 VAR_18->sp_state = VAR_10;
 VAR_18->sp_proc = ((void*)0);
 FUNC_4(&VAR_18->sp_callouts);
 FUNC_4(&VAR_18->sp_lcallouts);
 VAR_18->sp_minthreads = 1;
 VAR_18->sp_maxthreads = 1;
 VAR_18->sp_groupcount = 1;
 for (VAR_20 = 0; VAR_20 < VAR_11; VAR_20++) {
  VAR_19 = &VAR_18->sp_groups[VAR_20];
  FUNC_6(&VAR_19->sg_lock, "sg_lock", ((void*)0), VAR_4);
  VAR_19->sg_pool = VAR_18;
  VAR_19->sg_state = VAR_9;
  FUNC_4(&VAR_19->sg_xlist);
  FUNC_4(&VAR_19->sg_active);
  FUNC_0(&VAR_19->sg_idlethreads);
  VAR_19->sg_minthreads = 1;
  VAR_19->sg_maxthreads = 1;
 }
 VAR_18->sp_space_high = (u_long)VAR_12 * VAR_3 / 4;
 VAR_18->sp_space_low = (VAR_18->sp_space_high / 3) * 2;

 FUNC_7(&VAR_18->sp_sysctl);
 if (VAR_17) {
  FUNC_2(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "minthreads", VAR_2 | VAR_1,
      VAR_18, 0, VAR_14, "I",
      "Minimal number of threads");
  FUNC_2(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "maxthreads", VAR_2 | VAR_1,
      VAR_18, 0, VAR_13, "I",
      "Maximal number of threads");
  FUNC_2(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "threads", VAR_2 | VAR_0,
      VAR_18, 0, VAR_15, "I",
      "Current number of threads");
  FUNC_1(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "groups", VAR_0, &VAR_18->sp_groupcount, 0,
      "Number of thread groups");

  FUNC_3(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "request_space_used", VAR_0,
      &VAR_18->sp_space_used,
      "Space in parsed but not handled requests.");

  FUNC_3(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "request_space_used_highest", VAR_0,
      &VAR_18->sp_space_used_highest,
      "Highest space used since reboot.");

  FUNC_3(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "request_space_high", VAR_1,
      &VAR_18->sp_space_high,
      "Maximum space in parsed but not handled requests.");

  FUNC_3(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "request_space_low", VAR_1,
      &VAR_18->sp_space_low,
      "Low water mark for request space.");

  FUNC_1(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "request_space_throttled", VAR_0,
      &VAR_18->sp_space_throttled, 0,
      "Whether nfs requests are currently throttled");

  FUNC_1(&VAR_18->sp_sysctl, VAR_17, VAR_8,
      "request_space_throttle_count", VAR_0,
      &VAR_18->sp_space_throttle_count, 0,
      "Count of times throttling based on request space has occurred");
 }

 return VAR_18;
}
