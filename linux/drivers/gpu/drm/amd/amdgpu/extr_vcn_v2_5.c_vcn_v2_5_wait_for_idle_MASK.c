
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_vcn_inst; int harvest_config; } ;
struct amdgpu_device {TYPE_1__ vcn; } ;


 int FUNC_0 (int ,int,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->vcn.num_vcn_inst; ++VAR_5) {
  if (VAR_4->vcn.harvest_config & (1 << VAR_5))
   continue;
  FUNC_0(VAR_1, VAR_5, VAR_2, VAR_0,
   VAR_0, VAR_6);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_6;
}
