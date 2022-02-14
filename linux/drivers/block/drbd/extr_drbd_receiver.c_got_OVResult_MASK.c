
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet_info {int vnr; struct p_block_ack* data; } ;
struct p_block_ack {int block_id; int seq_num; int blksize; int sector; } ;
struct drbd_peer_device {TYPE_1__* connection; struct drbd_device* device; } ;
struct TYPE_4__ {int cb; } ;
struct drbd_device_work {TYPE_2__ w; struct drbd_device* device; } ;
struct drbd_device {int ov_left; } ;
struct drbd_connection {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_3__ {int sender_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct drbd_peer_device* FUNC_2 (struct drbd_connection*,int ) ;
 int FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (struct drbd_device*,int) ;
 int FUNC_5 (struct drbd_device*,char*) ;
 int FUNC_6 (struct drbd_device*,scalar_t__,int) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (struct drbd_device*) ;
 int FUNC_9 (struct drbd_device*,scalar_t__) ;
 int FUNC_10 (struct drbd_device*) ;
 struct drbd_device_work* FUNC_11 (int,int ) ;
 int FUNC_12 (struct drbd_device*) ;
 int FUNC_13 (struct drbd_device*) ;
 int FUNC_14 (struct drbd_peer_device*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_15(struct drbd_connection *VAR_4, struct packet_info *VAR_5)
{
 struct drbd_peer_device *VAR_6;
 struct drbd_device *VAR_7;
 struct p_block_ack *VAR_8 = VAR_5->data;
 struct drbd_device_work *VAR_9;
 sector_t VAR_10;
 int VAR_11;

 VAR_6 = FUNC_2(VAR_4, VAR_5->vnr);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_6->device;

 VAR_10 = FUNC_1(VAR_8->sector);
 VAR_11 = FUNC_0(VAR_8->blksize);

 FUNC_14(VAR_6, FUNC_0(VAR_8->seq_num));

 if (FUNC_1(VAR_8->block_id) == VAR_2)
  FUNC_6(VAR_7, VAR_10, VAR_11);
 else
  FUNC_12(VAR_7);

 if (!FUNC_10(VAR_7))
  return 0;

 FUNC_9(VAR_7, VAR_10);
 FUNC_3(VAR_7);

 --VAR_7->ov_left;


 if ((VAR_7->ov_left & 0x200) == 0x200)
  FUNC_4(VAR_7, VAR_7->ov_left);

 if (VAR_7->ov_left == 0) {
  VAR_9 = FUNC_11(sizeof(*VAR_9), VAR_1);
  if (VAR_9) {
   VAR_9->w.cb = VAR_3;
   VAR_9->device = VAR_7;
   FUNC_7(&VAR_6->connection->sender_work, &VAR_9->w);
  } else {
   FUNC_5(VAR_7, "kmalloc(dw) failed.");
   FUNC_12(VAR_7);
   FUNC_8(VAR_7);
  }
 }
 FUNC_13(VAR_7);
 return 0;
}
