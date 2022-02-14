
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (struct smu_context*,int ) ;
 int FUNC_3 (struct smu_context*,int ) ;
 int FUNC_4 (struct smu_context*) ;

__attribute__((used)) static int
FUNC_5(struct smu_context *VAR_3, uint16_t VAR_4,
         uint32_t VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->adev;
 int VAR_7 = 0, VAR_8 = 0;

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7)
  FUNC_1("Failed to send message 0x%x, response 0x%x, param 0x%x\n",
         VAR_8, VAR_7, VAR_5);

 FUNC_0(VAR_0, 0, VAR_2, 0);

 FUNC_0(VAR_0, 0, VAR_1, VAR_5);

 FUNC_3(VAR_3, (uint16_t)VAR_8);

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7)
  FUNC_1("Failed to send message 0x%x, response 0x%x param 0x%x\n",
         VAR_8, VAR_7, VAR_5);

 return VAR_7;
}
