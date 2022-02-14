
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct virtio_device {TYPE_2__* config; struct virtio_blk* priv; } ;
struct virtio_blk {int index; struct virtio_blk* vqs; TYPE_3__* disk; int tag_set; int config_work; } ;
struct TYPE_7__ {int kref; } ;
struct TYPE_10__ {TYPE_1__ kobj; } ;
struct TYPE_9__ {int queue; } ;
struct TYPE_8__ {int (* del_vqs ) (struct virtio_device*) ;int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct virtio_blk*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct virtio_device*) ;
 int FUNC_10 (struct virtio_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_11(struct virtio_device *VAR_1)
{
 struct virtio_blk *VAR_2 = VAR_1->priv;
 int VAR_3 = VAR_2->index;
 int VAR_4;


 FUNC_4(&VAR_2->config_work);

 FUNC_2(VAR_2->disk);
 FUNC_0(VAR_2->disk->queue);

 FUNC_1(&VAR_2->tag_set);


 VAR_1->config->reset(VAR_1);

 VAR_4 = FUNC_7(&FUNC_3(VAR_2->disk)->kobj.kref);
 FUNC_8(VAR_2->disk);
 VAR_1->config->del_vqs(VAR_1);
 FUNC_6(VAR_2->vqs);
 FUNC_6(VAR_2);


 if (VAR_4 == 1)
  FUNC_5(&VAR_0, VAR_3);
}
