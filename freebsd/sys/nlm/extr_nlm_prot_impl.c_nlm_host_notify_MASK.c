
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nlm_host {int nh_sysid; int nh_state; scalar_t__ nh_monstate; int nh_caller_name; int nh_refs; int nh_lock; int nh_pending; } ;
struct nlm_async_lock {int dummy; } ;


 int FUNC_0 (int,char*,int ,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nlm_async_lock* FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct nlm_host*,int ,struct thread**,int ,int ,char*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nlm_async_lock*) ;
 int FUNC_8 (struct nlm_host*) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct nlm_host *VAR_4, int VAR_5)
{
 struct nlm_async_lock *VAR_6;

 if (VAR_5) {
  FUNC_0(1, "NLM: host %s (sysid %d) rebooted, new "
      "state is %d\n", VAR_4->nh_caller_name,
      VAR_4->nh_sysid, VAR_5);
 }




 FUNC_5(&VAR_4->nh_lock);
 while ((VAR_6 = FUNC_1(&VAR_4->nh_pending)) != ((void*)0)) {




  FUNC_7(VAR_6);
 }
 FUNC_6(&VAR_4->nh_lock);
 FUNC_8(VAR_4);




 FUNC_3(VAR_4->nh_sysid);
 VAR_4->nh_state = VAR_5;






 if (VAR_5 != 0
     && VAR_4->nh_monstate != VAR_0
     && FUNC_4(VAR_1 | VAR_4->nh_sysid) > 0) {
  struct thread *VAR_7;
  VAR_4->nh_monstate = VAR_0;
  FUNC_9(&VAR_4->nh_refs);
  FUNC_2(VAR_3, VAR_4, VAR_2, &VAR_7, 0, 0,
      "NFS lock recovery for %s", VAR_4->nh_caller_name);
 }
}
