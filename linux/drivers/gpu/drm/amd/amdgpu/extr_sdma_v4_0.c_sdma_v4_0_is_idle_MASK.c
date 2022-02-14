
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_instances; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_1(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->sdma.num_instances; VAR_4++) {
  u32 VAR_5 = FUNC_0(VAR_4, VAR_1);

  if (!(VAR_5 & VAR_0))
   return 0;
 }

 return 1;
}
