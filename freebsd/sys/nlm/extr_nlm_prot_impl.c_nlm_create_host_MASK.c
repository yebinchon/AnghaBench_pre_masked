
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct nlm_host {int nh_refs; int nh_sysid; int nh_grantcookie; int nh_sysctl; scalar_t__ nh_monstate; scalar_t__ nh_vers; int nh_caller_name; int nh_sysid_string; int nh_finished; int nh_granted; int nh_pending; scalar_t__ nh_state; int nh_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,char const*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct sysctl_oid* FUNC_1 (int *,int ,int ,int ,int,int *,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,struct nlm_host*,int ,int ,char*,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int,int ,int ,char*) ;
 int FUNC_4 (int *,int ,int ,char*,int,scalar_t__*,int ,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct nlm_host*,int ) ;
 int VAR_10 ;
 struct nlm_host* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int ,int,char*,int) ;
 int FUNC_15 (int ,char const*,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static struct nlm_host *
FUNC_17(const char* VAR_17)
{
 struct nlm_host *VAR_18;
 struct sysctl_oid *VAR_19;

 FUNC_10(&VAR_12, VAR_3);

 FUNC_0(1, "NLM: new host %s (sysid %d)\n",
     VAR_17, VAR_16);
 VAR_18 = FUNC_9(sizeof(struct nlm_host), VAR_5, VAR_6|VAR_7);
 if (!VAR_18)
  return (((void*)0));
 FUNC_11(&VAR_18->nh_lock, "nh_lock", ((void*)0), VAR_4);
 VAR_18->nh_refs = 1;
 FUNC_15(VAR_18->nh_caller_name, VAR_17, VAR_2);
 VAR_18->nh_sysid = VAR_16++;
 FUNC_14(VAR_18->nh_sysid_string, sizeof(VAR_18->nh_sysid_string),
  "%d", VAR_18->nh_sysid);
 VAR_18->nh_vers = 0;
 VAR_18->nh_state = 0;
 VAR_18->nh_monstate = VAR_8;
 VAR_18->nh_grantcookie = 1;
 FUNC_7(&VAR_18->nh_pending);
 FUNC_7(&VAR_18->nh_granted);
 FUNC_7(&VAR_18->nh_finished);
 FUNC_8(&VAR_15, VAR_18, VAR_11);

 FUNC_13(&VAR_12);

 FUNC_16(&VAR_18->nh_sysctl);
 VAR_19 = FUNC_1(&VAR_18->nh_sysctl,
     FUNC_6(VAR_10),
     VAR_9, VAR_18->nh_sysid_string, VAR_0, ((void*)0), "");
 FUNC_3(&VAR_18->nh_sysctl, FUNC_5(VAR_19), VAR_9,
     "hostname", VAR_0, VAR_18->nh_caller_name, 0, "");
 FUNC_4(&VAR_18->nh_sysctl, FUNC_5(VAR_19), VAR_9,
     "version", VAR_0, &VAR_18->nh_vers, 0, "");
 FUNC_4(&VAR_18->nh_sysctl, FUNC_5(VAR_19), VAR_9,
     "monitored", VAR_0, &VAR_18->nh_monstate, 0, "");
 FUNC_2(&VAR_18->nh_sysctl, FUNC_5(VAR_19), VAR_9,
     "lock_count", VAR_1 | VAR_0, VAR_18, 0,
     VAR_14, "I", "");
 FUNC_2(&VAR_18->nh_sysctl, FUNC_5(VAR_19), VAR_9,
     "client_lock_count", VAR_1 | VAR_0, VAR_18, 0,
     VAR_13, "I", "");

 FUNC_12(&VAR_12);

 return (VAR_18);
}
