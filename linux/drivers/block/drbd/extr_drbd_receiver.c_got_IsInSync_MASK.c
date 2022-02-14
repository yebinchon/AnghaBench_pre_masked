
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_info {int vnr; struct p_block_ack* data; } ;
struct p_block_ack {int seq_num; int blksize; int sector; } ;
struct drbd_peer_device {TYPE_1__* connection; struct drbd_device* device; } ;
struct drbd_device {int rs_same_csum; int rs_sect_in; } ;
struct drbd_connection {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int agreed_pro_version; } ;


 int VAR_0 ;
 int FUNC_0 (struct drbd_device*,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct drbd_peer_device* FUNC_4 (struct drbd_connection*,int ) ;
 int FUNC_5 (struct drbd_device*) ;
 int FUNC_6 (struct drbd_device*,int ) ;
 int FUNC_7 (struct drbd_device*,int ,int) ;
 scalar_t__ FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (struct drbd_device*) ;
 int FUNC_10 (struct drbd_peer_device*,int) ;

__attribute__((used)) static int FUNC_11(struct drbd_connection *VAR_2, struct packet_info *VAR_3)
{
 struct drbd_peer_device *VAR_4;
 struct drbd_device *VAR_5;
 struct p_block_ack *VAR_6 = VAR_3->data;
 sector_t VAR_7 = FUNC_3(VAR_6->sector);
 int VAR_8 = FUNC_2(VAR_6->blksize);

 VAR_4 = FUNC_4(VAR_2, VAR_3->vnr);
 if (!VAR_4)
  return -VAR_1;
 VAR_5 = VAR_4->device;

 FUNC_0(VAR_5, VAR_4->connection->agreed_pro_version >= 89);

 FUNC_10(VAR_4, FUNC_2(VAR_6->seq_num));

 if (FUNC_8(VAR_5)) {
  FUNC_6(VAR_5, VAR_7);
  FUNC_7(VAR_5, VAR_7, VAR_8);

  VAR_5->rs_same_csum += (VAR_8 >> VAR_0);
  FUNC_9(VAR_5);
 }
 FUNC_5(VAR_5);
 FUNC_1(VAR_8 >> 9, &VAR_5->rs_sect_in);

 return 0;
}
