
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ load_type; } ;
struct amdgpu_device {int smu; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(void *VAR_2)
{
 int VAR_3;
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_2;

 VAR_3 = FUNC_3(VAR_4);
 if (VAR_3)
  return VAR_3;

 if (!VAR_1)
  FUNC_4(VAR_4);

 if (VAR_4->firmware.load_type == VAR_0) {





  VAR_3 = FUNC_10(&VAR_4->smu);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_9(&VAR_4->smu);
  if (VAR_3) {
   FUNC_8("SMC firmware status is not correct\n");
   return VAR_3;
  }
 }


 if (!FUNC_0(VAR_4))
  FUNC_6(VAR_4);

 FUNC_1(VAR_4);

 VAR_3 = FUNC_5(VAR_4);
 if (VAR_3)
  return VAR_3;





 FUNC_7(VAR_4);

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3)
  return VAR_3;

 return VAR_3;
}
