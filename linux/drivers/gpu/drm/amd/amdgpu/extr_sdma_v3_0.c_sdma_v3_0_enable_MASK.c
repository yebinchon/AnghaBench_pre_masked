
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_instances; } ;
struct amdgpu_device {TYPE_1__ sdma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 if (!VAR_5) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->sdma.num_instances; VAR_7++) {
  VAR_6 = FUNC_1(VAR_2 + VAR_3[VAR_7]);
  if (VAR_5)
   VAR_6 = FUNC_0(VAR_6, VAR_1, VAR_0, 0);
  else
   VAR_6 = FUNC_0(VAR_6, VAR_1, VAR_0, 1);
  FUNC_2(VAR_2 + VAR_3[VAR_7], VAR_6);
 }
}
