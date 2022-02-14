
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_peer_device {int device; } ;
struct drbd_connection {int peer_devices; } ;


 int FUNC_0 (int ) ;
 struct drbd_peer_device* FUNC_1 (int *,int*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct drbd_connection *VAR_0)
{
 struct drbd_peer_device *VAR_1;
 int VAR_2 = 0, VAR_3 = -1;

 FUNC_2();
 VAR_1 = FUNC_1(&VAR_0->peer_devices, &VAR_2);
 if (VAR_1)
  VAR_3 = FUNC_0(VAR_1->device);
 FUNC_3();

 return VAR_3;
}
