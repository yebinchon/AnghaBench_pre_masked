
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_socket {int mutex; } ;
struct drbd_peer_device {TYPE_1__* device; int connection; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_2__ {int vnr; } ;


 int FUNC_0 (int ,int ,struct drbd_socket*,int,unsigned int,void*,unsigned int) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct drbd_peer_device *VAR_0, struct drbd_socket *VAR_1,
        enum drbd_packet VAR_2, unsigned int VAR_3,
        void *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0->connection, VAR_0->device->vnr,
        VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_1->mutex);
 return VAR_6;
}
