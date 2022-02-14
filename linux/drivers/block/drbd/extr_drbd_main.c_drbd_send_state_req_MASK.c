
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union drbd_state {int i; } ;
struct p_req_state {void* val; void* mask; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
struct TYPE_2__ {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct p_req_state* FUNC_1 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_2 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;

int FUNC_3(struct drbd_peer_device *VAR_2, union drbd_state VAR_3, union drbd_state VAR_4)
{
 struct drbd_socket *VAR_5;
 struct p_req_state *VAR_6;

 VAR_5 = &VAR_2->connection->data;
 VAR_6 = FUNC_1(VAR_2, VAR_5);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->mask = FUNC_0(VAR_3.i);
 VAR_6->val = FUNC_0(VAR_4.i);
 return FUNC_2(VAR_2, VAR_5, VAR_1, sizeof(*VAR_6), ((void*)0), 0);
}
