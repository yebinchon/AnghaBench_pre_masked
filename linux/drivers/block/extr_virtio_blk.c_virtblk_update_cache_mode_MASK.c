
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtio_device {struct virtio_blk* priv; } ;
struct virtio_blk {TYPE_1__* disk; } ;
struct TYPE_2__ {int queue; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_3(struct virtio_device *VAR_0)
{
 u8 VAR_1 = FUNC_2(VAR_0);
 struct virtio_blk *VAR_2 = VAR_0->priv;

 FUNC_0(VAR_2->disk->queue, VAR_1, 0);
 FUNC_1(VAR_2->disk);
}
