
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int sector; } ;
struct drbd_peer_request {int block_id; TYPE_1__ i; } ;
struct drbd_peer_device {int dummy; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int FUNC_0 (struct drbd_peer_device*,int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct drbd_peer_device *VAR_0, enum drbd_packet VAR_1,
    struct drbd_peer_request *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1,
         FUNC_2(VAR_2->i.sector),
         FUNC_1(VAR_2->i.size),
         VAR_2->block_id);
}
