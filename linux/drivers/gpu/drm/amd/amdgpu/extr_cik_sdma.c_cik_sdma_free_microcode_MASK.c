
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_instances; TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {int * fw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->sdma.num_instances; VAR_1++) {
   FUNC_0(VAR_0->sdma.instance[VAR_1].fw);
   VAR_0->sdma.instance[VAR_1].fw = ((void*)0);
 }
}
