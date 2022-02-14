
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_socket {int dummy; } ;
struct drbd_peer_device {int connection; } ;


 void* FUNC_0 (int ,struct drbd_socket*) ;

void *FUNC_1(struct drbd_peer_device *VAR_0, struct drbd_socket *VAR_1)
{
 return FUNC_0(VAR_0->connection, VAR_1);
}
