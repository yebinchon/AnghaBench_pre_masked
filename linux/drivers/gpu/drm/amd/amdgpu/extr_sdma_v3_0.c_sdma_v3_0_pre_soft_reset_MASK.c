
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ srbm_soft_reset; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;
 u32 VAR_5 = 0;

 if (!VAR_4->sdma.srbm_soft_reset)
  return 0;

 VAR_5 = VAR_4->sdma.srbm_soft_reset;

 if (FUNC_0(VAR_5, VAR_2, VAR_0) ||
     FUNC_0(VAR_5, VAR_2, VAR_1)) {
  FUNC_1(VAR_4, 0);
  FUNC_2(VAR_4, 0);
 }

 return 0;
}
