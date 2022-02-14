
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct p_block_desc {int blksize; int sector; } ;
struct drbd_socket {int dummy; } ;
struct TYPE_4__ {int size; int sector; } ;
struct drbd_request {TYPE_2__ i; } ;
struct drbd_peer_device {TYPE_1__* connection; } ;
struct TYPE_3__ {struct drbd_socket data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct p_block_desc* FUNC_2 (struct drbd_peer_device*,struct drbd_socket*) ;
 int FUNC_3 (struct drbd_peer_device*,struct drbd_socket*,int ,int,int *,int ) ;

int FUNC_4(struct drbd_peer_device *VAR_2, struct drbd_request *VAR_3)
{
 struct drbd_socket *VAR_4;
 struct p_block_desc *VAR_5;

 VAR_4 = &VAR_2->connection->data;
 VAR_5 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->sector = FUNC_1(VAR_3->i.sector);
 VAR_5->blksize = FUNC_0(VAR_3->i.size);
 return FUNC_3(VAR_2, VAR_4, VAR_1, sizeof(*VAR_5), ((void*)0), 0);
}
