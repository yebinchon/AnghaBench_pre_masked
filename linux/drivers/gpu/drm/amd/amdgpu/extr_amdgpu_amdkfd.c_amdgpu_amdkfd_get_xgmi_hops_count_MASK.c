
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_3__ {int physical_node_id; } ;
struct TYPE_4__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_device*) ;

uint8_t FUNC_2(struct kgd_dev *VAR_0, struct kgd_dev *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_0;
 int VAR_4 = FUNC_1(VAR_3, VAR_2);

 if (VAR_4 < 0) {
  FUNC_0("amdgpu: failed to get  xgmi hops count between node %d and %d. ret = %d\n",
   VAR_3->gmc.xgmi.physical_node_id,
   VAR_2->gmc.xgmi.physical_node_id, VAR_4);
  VAR_4 = 0;
 }
 return (uint8_t)VAR_4;
}
