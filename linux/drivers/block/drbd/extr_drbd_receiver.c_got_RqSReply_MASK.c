
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_info {int vnr; struct p_req_state_reply* data; } ;
struct p_req_state_reply {int retcode; } ;
struct drbd_peer_device {struct drbd_device* device; } ;
struct drbd_device {int state_wait; int flags; } ;
struct drbd_connection {int agreed_pro_version; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct drbd_peer_device* FUNC_2 (struct drbd_connection*,int ) ;
 int FUNC_3 (struct drbd_device*,char*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drbd_connection*,struct packet_info*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct drbd_connection *VAR_5, struct packet_info *VAR_6)
{
 struct drbd_peer_device *VAR_7;
 struct drbd_device *VAR_8;
 struct p_req_state_reply *VAR_9 = VAR_6->data;
 int VAR_10 = FUNC_1(VAR_9->retcode);

 VAR_7 = FUNC_2(VAR_5, VAR_6->vnr);
 if (!VAR_7)
  return -VAR_3;
 VAR_8 = VAR_7->device;

 if (FUNC_7(VAR_2, &VAR_5->flags)) {
  FUNC_0(VAR_8, VAR_5->agreed_pro_version < 100);
  return FUNC_5(VAR_5, VAR_6);
 }

 if (VAR_10 >= VAR_4) {
  FUNC_6(VAR_1, &VAR_8->flags);
 } else {
  FUNC_6(VAR_0, &VAR_8->flags);
  FUNC_3(VAR_8, "Requested state change failed by peer: %s (%d)\n",
   FUNC_4(VAR_10), VAR_10);
 }
 FUNC_8(&VAR_8->state_wait);

 return 0;
}
