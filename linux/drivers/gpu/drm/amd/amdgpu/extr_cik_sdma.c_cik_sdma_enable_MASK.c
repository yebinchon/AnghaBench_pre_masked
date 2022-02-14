
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_3, bool VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!VAR_4) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->sdma.num_instances; VAR_6++) {
  VAR_5 = FUNC_0(VAR_1 + VAR_2[VAR_6]);
  if (VAR_4)
   VAR_5 &= ~VAR_0;
  else
   VAR_5 |= VAR_0;
  FUNC_1(VAR_1 + VAR_2[VAR_6], VAR_5);
 }
}
