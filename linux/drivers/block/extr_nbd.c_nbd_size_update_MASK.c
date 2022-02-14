
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nbd_device {TYPE_2__* disk; struct nbd_config* config; } ;
struct nbd_config {int flags; int bytesize; int blksize; } ;
struct block_device {int bd_invalidated; scalar_t__ bd_disk; } ;
struct TYPE_8__ {int discard_alignment; int discard_granularity; } ;
struct TYPE_11__ {TYPE_1__ limits; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_9__ {TYPE_4__* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,int) ;
 struct block_device* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int *,int ) ;
 TYPE_3__* FUNC_7 (struct nbd_device*) ;
 int FUNC_8 (struct block_device*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_10(struct nbd_device *VAR_3)
{
 struct nbd_config *VAR_4 = VAR_3->config;
 struct block_device *VAR_5 = FUNC_1(VAR_3->disk, 0);

 if (VAR_4->flags & VAR_1) {
  VAR_3->disk->queue->limits.discard_granularity = VAR_4->blksize;
  VAR_3->disk->queue->limits.discard_alignment = VAR_4->blksize;
  FUNC_4(VAR_3->disk->queue, VAR_2);
 }
 FUNC_3(VAR_3->disk->queue, VAR_4->blksize);
 FUNC_5(VAR_3->disk->queue, VAR_4->blksize);
 FUNC_9(VAR_3->disk, VAR_4->bytesize >> 9);
 if (VAR_5) {
  if (VAR_5->bd_disk) {
   FUNC_0(VAR_5, VAR_4->bytesize);
   FUNC_8(VAR_5, VAR_4->blksize);
  } else
   VAR_5->bd_invalidated = 1;
  FUNC_2(VAR_5);
 }
 FUNC_6(&FUNC_7(VAR_3)->kobj, VAR_0);
}
