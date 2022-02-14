
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p_block_req {int block_id; int blksize; int sector; } ;
struct drbd_peer_device {int dummy; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int FUNC_0 (struct drbd_peer_device*,int,int ,int ,int ) ;

void FUNC_1(struct drbd_peer_device *VAR_0, enum drbd_packet VAR_1,
        struct p_block_req *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->sector, VAR_2->blksize, VAR_2->block_id);
}
