
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int usec_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->adev;
 uint32_t VAR_7, VAR_8, VAR_9 = VAR_6->usec_timeout * 10;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_7 = FUNC_0(VAR_2, 0, VAR_4);
  if ((VAR_7 & VAR_3) != 0)
   break;
  FUNC_1(1);
 }


 if (VAR_8 == VAR_9)
  return -VAR_1;

 return FUNC_0(VAR_2, 0, VAR_4) == 0x1 ? 0 : -VAR_0;
}
