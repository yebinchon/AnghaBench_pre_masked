
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct drbd_connection_state_change {int * peer_role; int * cstate; struct drbd_connection* connection; } ;
struct drbd_connection {int dummy; } ;
struct connection_info {int conn_role; int conn_connection_state; } ;
typedef enum drbd_notification_type { ____Placeholder_drbd_notification_type } drbd_notification_type ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,struct drbd_connection*,struct connection_info*,int) ;

void FUNC_1(struct sk_buff *VAR_1,
        unsigned int VAR_2,
        struct drbd_connection_state_change *VAR_3,
        enum drbd_notification_type VAR_4)
{
 struct drbd_connection *VAR_5 = VAR_3->connection;
 struct connection_info VAR_6 = {
  .conn_connection_state = VAR_3->cstate[VAR_0],
  .conn_role = VAR_3->peer_role[VAR_0],
 };

 FUNC_0(VAR_1, VAR_2, VAR_5, &VAR_6, VAR_4);
}
