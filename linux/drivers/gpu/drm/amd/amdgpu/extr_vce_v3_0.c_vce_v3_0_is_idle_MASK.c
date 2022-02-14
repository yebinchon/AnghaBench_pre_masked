
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int harvest_config; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(void *VAR_5)
{
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_5;
 u32 VAR_7 = 0;

 VAR_7 |= (VAR_6->vce.harvest_config & VAR_0) ? 0 : VAR_2;
 VAR_7 |= (VAR_6->vce.harvest_config & VAR_1) ? 0 : VAR_3;

 return !(FUNC_0(VAR_4) & VAR_7);
}
