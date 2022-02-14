
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p_block_req {int blksize; int block_id; int sector; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
typedef int sector_t ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_2__ {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct p_block_req* FUNC_2 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_3 (struct drbd_peer_device*,struct drbd_socket*,int,int,void*,int) ;

int FUNC_4(struct drbd_peer_device *VAR_2, sector_t VAR_3, int VAR_4,
       void *VAR_5, int VAR_6, enum drbd_packet VAR_7)
{
 struct drbd_socket *VAR_8;
 struct p_block_req *VAR_9;



 VAR_8 = &VAR_2->connection->data;
 VAR_9 = FUNC_2(VAR_2, VAR_8);
 if (!VAR_9)
  return -VAR_0;
 VAR_9->sector = FUNC_1(VAR_3);
 VAR_9->block_id = VAR_1 ;
 VAR_9->blksize = FUNC_0(VAR_4);
 return FUNC_3(VAR_2, VAR_8, VAR_7, sizeof(*VAR_9), VAR_5, VAR_6);
}
