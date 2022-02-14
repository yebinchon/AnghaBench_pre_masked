
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p_data {int block_id; int sector; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_2__ {scalar_t__ peer_integrity_tfm; } ;


 int FUNC_0 (struct drbd_peer_device*,int,int ,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3(struct drbd_peer_device *VAR_0, enum drbd_packet VAR_1,
        struct p_data *VAR_2, int VAR_3)
{
 if (VAR_0->connection->peer_integrity_tfm)
  VAR_3 -= FUNC_2(VAR_0->connection->peer_integrity_tfm);
 FUNC_0(VAR_0, VAR_1, VAR_2->sector, FUNC_1(VAR_3),
         VAR_2->block_id);
}
