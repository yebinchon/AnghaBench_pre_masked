
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union drbd_state {int i; } ;
struct p_state {int state; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
struct TYPE_2__ {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct p_state* FUNC_1 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_2 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;

int FUNC_3(struct drbd_peer_device *VAR_2, union drbd_state VAR_3)
{
 struct drbd_socket *VAR_4;
 struct p_state *VAR_5;

 VAR_4 = &VAR_2->connection->data;
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->state = FUNC_0(VAR_3.i);
 return FUNC_2(VAR_2, VAR_4, VAR_1, sizeof(*VAR_5), ((void*)0), 0);
}
