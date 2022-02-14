
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct p_state {int state; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_3__* device; TYPE_1__* connection; } ;
struct TYPE_5__ {int i; } ;
struct TYPE_6__ {TYPE_2__ state; } ;
struct TYPE_4__ {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct p_state* FUNC_1 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_2 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;

int FUNC_3(struct drbd_peer_device *VAR_2)
{
 struct drbd_socket *VAR_3;
 struct p_state *VAR_4;

 VAR_3 = &VAR_2->connection->data;
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->state = FUNC_0(VAR_2->device->state.i);
 return FUNC_2(VAR_2, VAR_3, VAR_1, sizeof(*VAR_4), ((void*)0), 0);
}
