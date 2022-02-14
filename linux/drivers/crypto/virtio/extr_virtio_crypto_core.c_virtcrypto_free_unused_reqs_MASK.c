
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {int dummy; } ;
struct virtio_crypto_request {int sgs; int req_data; } ;
struct virtio_crypto {int max_data_queues; TYPE_1__* data_vq; } ;
struct TYPE_2__ {struct virtqueue* vq; } ;


 int FUNC_0 (int ) ;
 struct virtio_crypto_request* FUNC_1 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_2(struct virtio_crypto *VAR_0)
{
 struct virtio_crypto_request *VAR_1;
 int VAR_2;
 struct virtqueue *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->max_data_queues; VAR_2++) {
  VAR_3 = VAR_0->data_vq[VAR_2].vq;
  while ((VAR_1 = FUNC_1(VAR_3)) != ((void*)0)) {
   FUNC_0(VAR_1->req_data);
   FUNC_0(VAR_1->sgs);
  }
 }
}
