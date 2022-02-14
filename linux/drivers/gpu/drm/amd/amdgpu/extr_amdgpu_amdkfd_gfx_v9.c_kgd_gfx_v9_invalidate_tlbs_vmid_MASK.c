
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int num_vmhubs; } ;


 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ,int,int ) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct kgd_dev *VAR_0, uint16_t VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *) VAR_0;
 int VAR_3;

 if (!FUNC_0(VAR_2, VAR_1)) {
  FUNC_2("non kfd vmid %d\n", VAR_1);
  return 0;
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->num_vmhubs; VAR_3++)
  FUNC_1(VAR_2, VAR_1, VAR_3, 0);

 return 0;
}
