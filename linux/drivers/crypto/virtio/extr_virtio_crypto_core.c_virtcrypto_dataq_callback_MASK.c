
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {unsigned int index; TYPE_1__* vdev; } ;
struct virtio_crypto_request {int (* alg_cb ) (struct virtio_crypto_request*,unsigned int) ;} ;
struct virtio_crypto {TYPE_2__* data_vq; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {struct virtio_crypto* priv; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct virtio_crypto_request*,unsigned int) ;
 int FUNC_3 (struct virtqueue*) ;
 int FUNC_4 (struct virtqueue*) ;
 struct virtio_crypto_request* FUNC_5 (struct virtqueue*,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct virtqueue *VAR_0)
{
 struct virtio_crypto *VAR_1 = VAR_0->vdev->priv;
 struct virtio_crypto_request *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5 = VAR_0->index;

 FUNC_0(&VAR_1->data_vq[VAR_5].lock, VAR_3);
 do {
  FUNC_3(VAR_0);
  while ((VAR_2 = FUNC_5(VAR_0, &VAR_4)) != ((void*)0)) {
   FUNC_1(
    &VAR_1->data_vq[VAR_5].lock, VAR_3);
   if (VAR_2->alg_cb)
    VAR_2->alg_cb(VAR_2, VAR_4);
   FUNC_0(
    &VAR_1->data_vq[VAR_5].lock, VAR_3);
  }
 } while (!FUNC_4(VAR_0));
 FUNC_1(&VAR_1->data_vq[VAR_5].lock, VAR_3);
}
