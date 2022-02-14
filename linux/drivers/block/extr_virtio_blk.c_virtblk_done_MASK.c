
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtqueue {int index; TYPE_3__* vdev; } ;
struct virtio_blk {TYPE_2__* vqs; TYPE_1__* disk; } ;
struct virtblk_req {int dummy; } ;
struct request {int dummy; } ;
struct TYPE_6__ {struct virtio_blk* priv; } ;
struct TYPE_5__ {int lock; int vq; } ;
struct TYPE_4__ {int queue; } ;


 int FUNC_0 (struct request*) ;
 struct request* FUNC_1 (struct virtblk_req*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct virtqueue*) ;
 int FUNC_7 (struct virtqueue*) ;
 struct virtblk_req* FUNC_8 (int ,unsigned int*) ;
 int FUNC_9 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_10(struct virtqueue *VAR_0)
{
 struct virtio_blk *VAR_1 = VAR_0->vdev->priv;
 bool VAR_2 = 0;
 int VAR_3 = VAR_0->index;
 struct virtblk_req *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;

 FUNC_3(&VAR_1->vqs[VAR_3].lock, VAR_5);
 do {
  FUNC_6(VAR_0);
  while ((VAR_4 = FUNC_8(VAR_1->vqs[VAR_3].vq, &VAR_6)) != ((void*)0)) {
   struct request *VAR_7 = FUNC_1(VAR_4);

   FUNC_0(VAR_7);
   VAR_2 = 1;
  }
  if (FUNC_5(FUNC_9(VAR_0)))
   break;
 } while (!FUNC_7(VAR_0));


 if (VAR_2)
  FUNC_2(VAR_1->disk->queue, 1);
 FUNC_4(&VAR_1->vqs[VAR_3].lock, VAR_5);
}
