
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct md_thread {TYPE_2__* mddev; } ;
struct md_cluster_info {int recv_mutex; struct dlm_lock_resource* message_lockres; struct dlm_lock_resource* ack_lockres; } ;
struct TYPE_3__ {int sb_lvbptr; } ;
struct dlm_lock_resource {TYPE_1__ lksb; } ;
struct cluster_msg {int dummy; } ;
struct TYPE_4__ {struct md_cluster_info* cluster_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_lock_resource*,int ) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (struct cluster_msg*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_2__*,struct cluster_msg*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct md_thread *VAR_2)
{
 struct md_cluster_info *VAR_3 = VAR_2->mddev->cluster_info;
 struct dlm_lock_resource *VAR_4 = VAR_3->ack_lockres;
 struct dlm_lock_resource *VAR_5 = VAR_3->message_lockres;
 struct cluster_msg VAR_6;
 int VAR_7;

 FUNC_3(&VAR_3->recv_mutex);

 if (FUNC_0(VAR_5, VAR_0)) {
  FUNC_5("md/raid1:failed to get CR on MESSAGE\n");
  FUNC_4(&VAR_3->recv_mutex);
  return;
 }


 FUNC_2(&VAR_6, VAR_5->lksb.sb_lvbptr, sizeof(struct cluster_msg));
 VAR_7 = FUNC_7(VAR_2->mddev, &VAR_6);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_1(VAR_4);
 if (FUNC_8(VAR_7 != 0))
  FUNC_6("unlock ack failed return %d\n", VAR_7);

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 if (FUNC_8(VAR_7 != 0))
  FUNC_6("lock PR on msg failed return %d\n", VAR_7);

 VAR_7 = FUNC_0(VAR_4, VAR_0);
 if (FUNC_8(VAR_7 != 0))
  FUNC_6("lock CR on ack failed return %d\n", VAR_7);
out:

 VAR_7 = FUNC_1(VAR_5);
 if (FUNC_8(VAR_7 != 0))
  FUNC_6("unlock msg failed return %d\n", VAR_7);
 FUNC_4(&VAR_3->recv_mutex);
}
