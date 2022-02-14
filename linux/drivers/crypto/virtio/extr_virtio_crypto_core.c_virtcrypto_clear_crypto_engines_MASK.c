
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct virtio_crypto {size_t max_data_queues; TYPE_1__* data_vq; } ;
struct TYPE_2__ {scalar_t__ engine; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct virtio_crypto *VAR_0)
{
 u32 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_data_queues; VAR_1++)
  if (VAR_0->data_vq[VAR_1].engine)
   FUNC_0(VAR_0->data_vq[VAR_1].engine);
}
