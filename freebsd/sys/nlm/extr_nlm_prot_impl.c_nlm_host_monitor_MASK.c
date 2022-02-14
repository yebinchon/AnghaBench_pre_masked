
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct nlm_host {int nh_state; int nh_caller_name; scalar_t__ nh_monstate; int nh_lock; int nh_sysid; } ;
struct TYPE_9__ {scalar_t__ res_stat; } ;
typedef TYPE_3__ sm_stat_res ;
struct TYPE_7__ {char* my_name; int my_proc; int my_vers; int my_prog; } ;
struct TYPE_8__ {int mon_name; TYPE_1__ my_id; } ;
struct TYPE_10__ {int priv; TYPE_2__ mon_id; } ;
typedef TYPE_4__ mon ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int FUNC_0 (int ,int ,int ,TYPE_4__*,int ,TYPE_3__*,struct timeval) ;
 int FUNC_1 (int,char*,int,int ,...) ;
 int FUNC_2 (char*,int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

void
FUNC_6(struct nlm_host *VAR_12, int VAR_13)
{
 mon VAR_14;
 sm_stat_res VAR_15;
 struct timeval VAR_16;
 enum clnt_stat VAR_17;

 if (VAR_13 && !VAR_12->nh_state) {





  VAR_12->nh_state = VAR_13;
  FUNC_1(1, "NLM: host %s (sysid %d) has NSM state %d\n",
      VAR_12->nh_caller_name, VAR_12->nh_sysid, VAR_13);
 }

 FUNC_4(&VAR_12->nh_lock);
 if (VAR_12->nh_monstate != VAR_5) {
  FUNC_5(&VAR_12->nh_lock);
  return;
 }
 VAR_12->nh_monstate = VAR_0;
 FUNC_5(&VAR_12->nh_lock);

 FUNC_1(1, "NLM: monitoring %s (sysid %d)\n",
     VAR_12->nh_caller_name, VAR_12->nh_sysid);






 VAR_14.mon_id.mon_name = VAR_12->nh_caller_name;
 VAR_14.mon_id.my_id.my_name = "localhost";
 VAR_14.mon_id.my_id.my_prog = VAR_2;
 VAR_14.mon_id.my_id.my_vers = VAR_3;
 VAR_14.mon_id.my_id.my_proc = VAR_4;
 FUNC_3(VAR_14.priv, &VAR_12->nh_sysid, sizeof(VAR_12->nh_sysid));

 VAR_16.tv_sec = 25;
 VAR_16.tv_usec = 0;
 VAR_17 = FUNC_0(VAR_8, VAR_7,
     (xdrproc_t) VAR_10, &VAR_14,
     (xdrproc_t) VAR_11, &VAR_15, VAR_16);

 if (VAR_17 != VAR_6) {
  FUNC_2("Failed to contact local NSM - rpc error %d\n", VAR_17);
  return;
 }
 if (VAR_15.res_stat == VAR_9) {
  FUNC_2("Local NSM refuses to monitor %s\n",
      VAR_12->nh_caller_name);
  FUNC_4(&VAR_12->nh_lock);
  VAR_12->nh_monstate = VAR_1;
  FUNC_5(&VAR_12->nh_lock);
  return;
 }

 VAR_12->nh_monstate = VAR_0;
}
