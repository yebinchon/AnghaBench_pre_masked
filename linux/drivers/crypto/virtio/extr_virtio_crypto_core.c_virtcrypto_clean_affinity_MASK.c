
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_crypto {int affinity_hint_set; int max_data_queues; TYPE_1__* data_vq; } ;
struct TYPE_2__ {int vq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_crypto *VAR_0, long VAR_1)
{
 int VAR_2;

 if (VAR_0->affinity_hint_set) {
  for (VAR_2 = 0; VAR_2 < VAR_0->max_data_queues; VAR_2++)
   FUNC_0(VAR_0->data_vq[VAR_2].vq, ((void*)0));

  VAR_0->affinity_hint_set = 0;
 }
}
