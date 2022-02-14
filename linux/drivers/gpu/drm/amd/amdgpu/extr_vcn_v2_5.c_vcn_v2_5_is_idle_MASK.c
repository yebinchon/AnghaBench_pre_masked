
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_vcn_inst; int harvest_config; } ;
struct amdgpu_device {TYPE_1__ vcn; } ;


 scalar_t__ FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;
 int VAR_5, VAR_6 = 1;

 for (VAR_5 = 0; VAR_5 < VAR_4->vcn.num_vcn_inst; ++VAR_5) {
  if (VAR_4->vcn.harvest_config & (1 << VAR_5))
   continue;
  VAR_6 &= (FUNC_0(VAR_1, VAR_5, VAR_2) == VAR_0);
 }

 return VAR_6;
}
