
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct kgd_dev *VAR_1, uint16_t VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *) VAR_1;

 if (!FUNC_0(VAR_3, VAR_2)) {
  FUNC_2("non kfd vmid %d\n", VAR_2);
  return 0;
 }

 FUNC_1(VAR_3, VAR_2, VAR_0, 0);
 return 0;
}
