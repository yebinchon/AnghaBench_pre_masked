
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct p_block_ack {int seq_num; int blksize; void* block_id; void* sector; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_3__* device; TYPE_1__* connection; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;
struct TYPE_5__ {scalar_t__ conn; } ;
struct TYPE_6__ {int packet_seq; TYPE_2__ state; } ;
struct TYPE_4__ {struct drbd_socket meta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct p_block_ack* FUNC_2 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_3 (struct drbd_peer_device*,struct drbd_socket*,int,int,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct drbd_peer_device *VAR_2, enum drbd_packet VAR_3,
     u64 VAR_4, u32 VAR_5, u64 VAR_6)
{
 struct drbd_socket *VAR_7;
 struct p_block_ack *VAR_8;

 if (VAR_2->device->state.conn < VAR_0)
  return -VAR_1;

 VAR_7 = &VAR_2->connection->meta;
 VAR_8 = FUNC_2(VAR_2, VAR_7);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->sector = VAR_4;
 VAR_8->block_id = VAR_6;
 VAR_8->blksize = VAR_5;
 VAR_8->seq_num = FUNC_1(FUNC_0(&VAR_2->device->packet_seq));
 return FUNC_3(VAR_2, VAR_7, VAR_3, sizeof(*VAR_8), ((void*)0), 0);
}
