
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {int dummy; } ;
struct drbd_peer_device {struct drbd_connection* connection; } ;
struct drbd_connection {struct drbd_request* req_ack_pending; } ;



__attribute__((used)) static void FUNC_0(struct drbd_peer_device *VAR_0, struct drbd_request *VAR_1)
{
 struct drbd_connection *VAR_2 = VAR_0 ? VAR_0->connection : ((void*)0);
 if (!VAR_2)
  return;
 if (VAR_2->req_ack_pending == ((void*)0))
  VAR_2->req_ack_pending = VAR_1;
}
