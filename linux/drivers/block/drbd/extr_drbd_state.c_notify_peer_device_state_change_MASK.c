
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct peer_device_info {int peer_resync_susp_dependency; int peer_resync_susp_peer; int peer_resync_susp_user; int peer_disk_state; int peer_repl_state; } ;
struct drbd_peer_device_state_change {int * resync_susp_dependency; int * resync_susp_peer; int * resync_susp_user; int * disk_state; int * repl_state; struct drbd_peer_device* peer_device; } ;
struct drbd_peer_device {int dummy; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,struct drbd_peer_device*,struct peer_device_info*,int) ;

void FUNC_1(struct sk_buff *VAR_1,
         unsigned int VAR_2,
         struct drbd_peer_device_state_change *VAR_3,
         enum drbd_notification_type VAR_4)
{
 struct drbd_peer_device *VAR_5 = VAR_3->peer_device;
 struct peer_device_info VAR_6 = {
  .peer_repl_state = VAR_3->repl_state[VAR_0],
  .peer_disk_state = VAR_3->disk_state[VAR_0],
  .peer_resync_susp_user = VAR_3->resync_susp_user[VAR_0],
  .peer_resync_susp_peer = VAR_3->resync_susp_peer[VAR_0],
  .peer_resync_susp_dependency = VAR_3->resync_susp_dependency[VAR_0],
 };

 FUNC_0(VAR_1, VAR_2, VAR_5, &VAR_6, VAR_4);
}
