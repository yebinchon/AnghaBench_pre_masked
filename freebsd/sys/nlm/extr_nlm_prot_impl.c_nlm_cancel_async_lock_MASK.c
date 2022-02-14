
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {int nh_lock; int nh_pending; int nh_sysid; int nh_caller_name; } ;
struct nlm_async_lock {int af_task; int af_cookie; int af_fl; int af_vp; struct nlm_host* af_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,struct nlm_async_lock*,int ,int ) ;
 int FUNC_1 (int *,struct nlm_async_lock*,int ) ;
 int FUNC_2 (int ,int *,int ,int *,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nlm_async_lock*) ;
 int FUNC_7 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_8(struct nlm_async_lock *VAR_5)
{
 struct nlm_host *VAR_6 = VAR_5->af_host;
 int VAR_7;

 FUNC_3(&VAR_6->nh_lock, VAR_2);

 FUNC_5(&VAR_6->nh_lock);

 VAR_7 = FUNC_2(VAR_5->af_vp, ((void*)0), VAR_0, &VAR_5->af_fl,
     VAR_1, ((void*)0), &VAR_5->af_cookie);

 if (VAR_7) {




  FUNC_7(VAR_4, &VAR_5->af_task);
 }

 FUNC_4(&VAR_6->nh_lock);

 if (!VAR_7) {
  FUNC_0(2, "NLM: async lock %p for %s (sysid %d) "
      "cancelled\n", VAR_5, VAR_6->nh_caller_name, VAR_6->nh_sysid);





  FUNC_1(&VAR_6->nh_pending, VAR_5, VAR_3);
  FUNC_5(&VAR_6->nh_lock);
  FUNC_6(VAR_5);
  FUNC_4(&VAR_6->nh_lock);
 }

 return (VAR_7);
}
