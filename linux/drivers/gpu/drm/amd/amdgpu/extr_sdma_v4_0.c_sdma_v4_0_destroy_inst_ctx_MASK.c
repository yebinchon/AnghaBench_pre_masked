
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_sdma_instance {int dummy; } ;
struct TYPE_3__ {int num_instances; TYPE_2__* instance; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ sdma; } ;
struct TYPE_4__ {int * fw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->sdma.num_instances; VAR_3++) {
  if (VAR_2->sdma.instance[VAR_3].fw != ((void*)0))
   FUNC_1(VAR_2->sdma.instance[VAR_3].fw);



  if (VAR_2->asic_type == VAR_1)
   break;
 }

 FUNC_0((void*)VAR_2->sdma.instance, 0,
  sizeof(struct amdgpu_sdma_instance) * VAR_0);
}
