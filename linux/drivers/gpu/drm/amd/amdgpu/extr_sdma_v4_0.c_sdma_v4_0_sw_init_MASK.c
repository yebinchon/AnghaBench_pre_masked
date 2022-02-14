
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_ring {int use_doorbell; int doorbell_index; int name; int * ring_obj; } ;
struct TYPE_6__ {int num_instances; int trap_irq; TYPE_1__* instance; scalar_t__ has_page_queue; int ecc_irq; } ;
struct TYPE_5__ {int* sdma_engine; } ;
struct amdgpu_device {TYPE_3__ sdma; TYPE_2__ doorbell_index; } ;
struct TYPE_4__ {struct amdgpu_ring page; struct amdgpu_ring ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int *) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct amdgpu_ring *VAR_4;
 int VAR_5, VAR_6;
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_3;


 for (VAR_6 = 0; VAR_6 < VAR_7->sdma.num_instances; VAR_6++) {
  VAR_5 = FUNC_1(VAR_7, FUNC_3(VAR_6),
          VAR_2,
          &VAR_7->sdma.trap_irq);
  if (VAR_5)
   return VAR_5;
 }


 for (VAR_6 = 0; VAR_6 < VAR_7->sdma.num_instances; VAR_6++) {
  VAR_5 = FUNC_1(VAR_7, FUNC_3(VAR_6),
          VAR_1,
          &VAR_7->sdma.ecc_irq);
  if (VAR_5)
   return VAR_5;
 }

 for (VAR_6 = 0; VAR_6 < VAR_7->sdma.num_instances; VAR_6++) {
  VAR_4 = &VAR_7->sdma.instance[VAR_6].ring;
  VAR_4->ring_obj = ((void*)0);
  VAR_4->use_doorbell = 1;

  FUNC_0("use_doorbell being set to: [%s]\n",
    VAR_4->use_doorbell?"true":"false");


  VAR_4->doorbell_index = VAR_7->doorbell_index.sdma_engine[VAR_6] << 1;

  FUNC_4(VAR_4->name, "sdma%d", VAR_6);
  VAR_5 = FUNC_2(VAR_7, VAR_4, 1024, &VAR_7->sdma.trap_irq,
         VAR_0 + VAR_6);
  if (VAR_5)
   return VAR_5;

  if (VAR_7->sdma.has_page_queue) {
   VAR_4 = &VAR_7->sdma.instance[VAR_6].page;
   VAR_4->ring_obj = ((void*)0);
   VAR_4->use_doorbell = 1;




   VAR_4->doorbell_index = VAR_7->doorbell_index.sdma_engine[VAR_6] << 1;
   VAR_4->doorbell_index += 0x400;

   FUNC_4(VAR_4->name, "page%d", VAR_6);
   VAR_5 = FUNC_2(VAR_7, VAR_4, 1024,
          &VAR_7->sdma.trap_irq,
          VAR_0 + VAR_6);
   if (VAR_5)
    return VAR_5;
  }
 }

 return VAR_5;
}
