
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct kgd_dev *VAR_2, uint16_t VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *) VAR_2;

 if (!FUNC_2(VAR_4, VAR_3)) {
  FUNC_3("non kfd vmid\n");
  return 0;
 }

 FUNC_1(VAR_0, 1 << VAR_3);
 FUNC_0(VAR_1);
 return 0;
}
