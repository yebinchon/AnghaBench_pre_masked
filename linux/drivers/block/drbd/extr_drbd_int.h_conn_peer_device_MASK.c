
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_peer_device {int dummy; } ;
struct drbd_connection {int peer_devices; } ;


 struct drbd_peer_device* FUNC_0 (int *,int) ;

__attribute__((used)) static inline struct drbd_peer_device *
FUNC_1(struct drbd_connection *VAR_0, int VAR_1)
{
 return FUNC_0(&VAR_0->peer_devices, VAR_1);
}
