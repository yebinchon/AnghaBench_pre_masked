
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct nlm_host {int nh_caller_name; int nh_monstate; int nh_sysid; } ;
struct TYPE_7__ {scalar_t__ res_stat; } ;
typedef TYPE_2__ sm_stat_res ;
struct TYPE_6__ {char* my_name; int my_proc; int my_vers; int my_prog; } ;
struct TYPE_8__ {int mon_name; TYPE_1__ my_id; } ;
typedef TYPE_3__ mon_id ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;


 int FUNC_0 (int ,int ,int ,TYPE_3__*,int ,TYPE_2__*,struct timeval) ;
 int FUNC_1 (int,char*,int,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_3(struct nlm_host *VAR_10)
{
 mon_id VAR_11;
 sm_stat_res VAR_12;
 struct timeval VAR_13;
 enum clnt_stat VAR_14;

 FUNC_1(1, "NLM: unmonitoring %s (sysid %d)\n",
     VAR_10->nh_caller_name, VAR_10->nh_sysid);






 VAR_11.mon_name = VAR_10->nh_caller_name;
 VAR_11.my_id.my_name = "localhost";
 VAR_11.my_id.my_prog = VAR_0;
 VAR_11.my_id.my_vers = VAR_1;
 VAR_11.my_id.my_proc = VAR_2;

 VAR_13.tv_sec = 25;
 VAR_13.tv_usec = 0;
 VAR_14 = FUNC_0(VAR_6, VAR_5,
     (xdrproc_t) VAR_8, &VAR_11,
     (xdrproc_t) VAR_9, &VAR_12, VAR_13);

 if (VAR_14 != VAR_4) {
  FUNC_2("Failed to contact local NSM - rpc error %d\n", VAR_14);
  return;
 }
 if (VAR_12.res_stat == VAR_7) {
  FUNC_2("Local NSM refuses to unmonitor %s\n",
      VAR_10->nh_caller_name);
  return;
 }

 VAR_10->nh_monstate = VAR_3;
}
