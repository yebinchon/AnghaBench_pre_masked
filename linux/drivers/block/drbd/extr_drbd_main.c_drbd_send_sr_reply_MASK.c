
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p_req_state_reply {int retcode; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
typedef enum drbd_state_rv { ____Placeholder_drbd_state_rv } drbd_state_rv ;
struct TYPE_2__ {struct drbd_socket meta; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct p_req_state_reply* FUNC_1 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_2 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;

void FUNC_3(struct drbd_peer_device *VAR_1, enum drbd_state_rv VAR_2)
{
 struct drbd_socket *VAR_3;
 struct p_req_state_reply *VAR_4;

 VAR_3 = &VAR_1->connection->meta;
 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4) {
  VAR_4->retcode = FUNC_0(VAR_2);
  FUNC_2(VAR_1, VAR_3, VAR_0, sizeof(*VAR_4), ((void*)0), 0);
 }
}
