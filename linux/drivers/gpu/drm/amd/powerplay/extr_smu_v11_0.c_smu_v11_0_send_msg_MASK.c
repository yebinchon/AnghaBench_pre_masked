
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (struct smu_context*,int ) ;
 int FUNC_4 (struct smu_context*,int ) ;
 int FUNC_5 (struct smu_context*) ;

__attribute__((used)) static int FUNC_6(struct smu_context *VAR_2, uint16_t VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->adev;
 int VAR_5 = 0, VAR_6 = 0;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_5(VAR_2);

 FUNC_0(VAR_0, 0, VAR_1, 0);

 FUNC_4(VAR_2, (uint16_t)VAR_6);

 VAR_5 = FUNC_5(VAR_2);

 if (VAR_5)
  FUNC_1("failed send message: %10s (%d) response %#x\n",
         FUNC_2(VAR_2, VAR_3), VAR_6, VAR_5);

 return VAR_5;

}
