
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct nlm_host {int nh_lock; int nh_finished; int nh_granted; } ;
struct TYPE_4__ {int cookie; } ;
struct nlm_async_lock {scalar_t__ af_expiretime; TYPE_2__ af_granted; TYPE_1__* af_host; } ;
struct TYPE_3__ {int nh_sysid; int nh_caller_name; } ;


 int FUNC_0 (int,char*,struct nlm_async_lock*,int ,int ,int ,int ) ;
 struct nlm_async_lock* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nlm_async_lock*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nlm_async_lock*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_8(struct nlm_host *VAR_2)
{
 struct nlm_async_lock *VAR_3;
 time_t VAR_4 = VAR_1;

 FUNC_3(&VAR_2->nh_lock);
 while ((VAR_3 = FUNC_1(&VAR_2->nh_granted)) != ((void*)0)
     && VAR_4 >= VAR_3->af_expiretime) {
  FUNC_0(2, "NLM: async lock %p for %s (sysid %d) expired,"
      " cookie %d:%d\n", VAR_3, VAR_3->af_host->nh_caller_name,
      VAR_3->af_host->nh_sysid, FUNC_6(&VAR_3->af_granted.cookie),
      FUNC_5(&VAR_3->af_granted.cookie));
  FUNC_2(&VAR_2->nh_granted, VAR_3, VAR_0);
  FUNC_4(&VAR_2->nh_lock);
  FUNC_7(VAR_3);
  FUNC_3(&VAR_2->nh_lock);
 }
 while ((VAR_3 = FUNC_1(&VAR_2->nh_finished)) != ((void*)0)) {
  FUNC_2(&VAR_2->nh_finished, VAR_3, VAR_0);
  FUNC_4(&VAR_2->nh_lock);
  FUNC_7(VAR_3);
  FUNC_3(&VAR_2->nh_lock);
 }
 FUNC_4(&VAR_2->nh_lock);
}
