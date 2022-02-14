
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_crypto {size_t max_data_queues; TYPE_1__* data_vq; } ;
typedef size_t int32_t ;
struct TYPE_2__ {scalar_t__ engine; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct virtio_crypto *VAR_0)
{
 int32_t VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_data_queues; VAR_1++) {
  if (VAR_0->data_vq[VAR_1].engine) {
   VAR_2 = FUNC_1(VAR_0->data_vq[VAR_1].engine);
   if (VAR_2)
    goto err;
  }
 }

 return 0;

err:
 while (--VAR_1 >= 0)
  if (VAR_0->data_vq[VAR_1].engine)
   FUNC_0(VAR_0->data_vq[VAR_1].engine);

 return VAR_2;
}
