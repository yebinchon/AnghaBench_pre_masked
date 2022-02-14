
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_info {int cmd; int vnr; struct p_block_ack* data; } ;
struct p_block_ack {int seq_num; int blksize; int sector; } ;
struct drbd_peer_device {struct drbd_device* device; } ;
struct drbd_device {int dummy; } ;
struct drbd_connection {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct drbd_peer_device* FUNC_3 (struct drbd_connection*,int ) ;
 int FUNC_4 (struct drbd_device*) ;
 int FUNC_5 (struct drbd_device*,int ) ;
 int FUNC_6 (struct drbd_device*,int ,int) ;
 scalar_t__ FUNC_7 (struct drbd_device*,int ) ;
 int FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (struct drbd_peer_device*,int) ;

__attribute__((used)) static int FUNC_10(struct drbd_connection *VAR_2, struct packet_info *VAR_3)
{
 struct drbd_peer_device *VAR_4;
 struct drbd_device *VAR_5;
 sector_t VAR_6;
 int VAR_7;
 struct p_block_ack *VAR_8 = VAR_3->data;

 VAR_4 = FUNC_3(VAR_2, VAR_3->vnr);
 if (!VAR_4)
  return -VAR_1;
 VAR_5 = VAR_4->device;

 VAR_6 = FUNC_2(VAR_8->sector);
 VAR_7 = FUNC_1(VAR_8->blksize);

 FUNC_9(VAR_4, FUNC_1(VAR_8->seq_num));

 FUNC_4(VAR_5);

 if (FUNC_7(VAR_5, VAR_0)) {
  FUNC_5(VAR_5, VAR_6);
  switch (VAR_3->cmd) {
  case 129:
   FUNC_6(VAR_5, VAR_6, VAR_7);
  case 128:
   break;
  default:
   FUNC_0();
  }
  FUNC_8(VAR_5);
 }

 return 0;
}
