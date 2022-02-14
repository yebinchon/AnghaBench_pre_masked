
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_gpu_device {int num_scanouts; int ddev; TYPE_1__* outputs; } ;
struct TYPE_2__ {int edid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct virtio_gpu_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0 ; VAR_1 < VAR_0->num_scanouts; ++VAR_1)
  FUNC_2(VAR_0->outputs[VAR_1].edid);
 FUNC_0(VAR_0->ddev);
 FUNC_1(VAR_0->ddev);
}
