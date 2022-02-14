
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p_block_req {int blksize; int block_id; int sector; } ;
struct drbd_socket {int dummy; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
typedef int sector_t ;
struct TYPE_2__ {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct p_block_req* FUNC_2 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_3 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;

int FUNC_4(struct drbd_peer_device *VAR_3, sector_t VAR_4, int VAR_5)
{
 struct drbd_socket *VAR_6;
 struct p_block_req *VAR_7;

 VAR_6 = &VAR_3->connection->data;
 VAR_7 = FUNC_2(VAR_3, VAR_6);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->sector = FUNC_1(VAR_4);
 VAR_7->block_id = VAR_1 ;
 VAR_7->blksize = FUNC_0(VAR_5);
 return FUNC_3(VAR_3, VAR_6, VAR_2, sizeof(*VAR_7), ((void*)0), 0);
}
