
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ recovery_cp; scalar_t__ reshape_position; int flags; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {scalar_t__ slot_number; int lockspace; int bitmap_lockres; int resync_lockres; int no_new_dev_lockres; int ack_lockres; int token_lockres; int message_lockres; int recv_thread; int recovery_thread; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct md_cluster_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mddev*) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_3)
{
 struct md_cluster_info *VAR_4 = VAR_3->cluster_info;

 if (!VAR_4)
  return 0;
 if ((VAR_4->slot_number > 0 && VAR_3->recovery_cp != VAR_2) ||
     (VAR_3->reshape_position != VAR_2 &&
      FUNC_6(VAR_0, &VAR_3->flags)))
  FUNC_4(VAR_3);

 FUNC_5(VAR_1, &VAR_4->state);
 FUNC_3(&VAR_4->recovery_thread);
 FUNC_3(&VAR_4->recv_thread);
 FUNC_2(VAR_4->message_lockres);
 FUNC_2(VAR_4->token_lockres);
 FUNC_2(VAR_4->ack_lockres);
 FUNC_2(VAR_4->no_new_dev_lockres);
 FUNC_2(VAR_4->resync_lockres);
 FUNC_2(VAR_4->bitmap_lockres);
 FUNC_7(VAR_3);
 FUNC_0(VAR_4->lockspace, 2);
 FUNC_1(VAR_4);
 return 0;
}
