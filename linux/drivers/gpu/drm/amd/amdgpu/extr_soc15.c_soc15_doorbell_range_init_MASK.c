
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct amdgpu_ring {int doorbell_index; int use_doorbell; } ;
struct TYPE_10__ {int doorbell_index; int use_doorbell; } ;
struct TYPE_11__ {TYPE_4__ ih; } ;
struct TYPE_8__ {int sdma_doorbell_range; } ;
struct TYPE_12__ {int num_instances; TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_5__ irq; TYPE_3__* nbio_funcs; TYPE_2__ doorbell_index; TYPE_6__ sdma; } ;
struct TYPE_9__ {int (* ih_doorbell_range ) (struct amdgpu_device*,int ,int ) ;int (* sdma_doorbell_range ) (struct amdgpu_device*,int,int ,int ,int ) ;} ;
struct TYPE_7__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int,int ,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_0)
{
 int VAR_1;
 struct amdgpu_ring *VAR_2;


 if (!FUNC_0(VAR_0)) {
  for (VAR_1 = 0; VAR_1 < VAR_0->sdma.num_instances; VAR_1++) {
   VAR_2 = &VAR_0->sdma.instance[VAR_1].ring;
   VAR_0->nbio_funcs->sdma_doorbell_range(VAR_0, VAR_1,
    VAR_2->use_doorbell, VAR_2->doorbell_index,
    VAR_0->doorbell_index.sdma_doorbell_range);
  }

  VAR_0->nbio_funcs->ih_doorbell_range(VAR_0, VAR_0->irq.ih.use_doorbell,
      VAR_0->irq.ih.doorbell_index);
 }
}
