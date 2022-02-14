
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ virtual_cfg_space; } ;
struct intel_vgpu {TYPE_1__ cfg_space; } ;


 int VAR_0 ;



 int VAR_1 ;

__attribute__((used)) static u64 FUNC_0(struct intel_vgpu *VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6;

 VAR_4 = (*(u32 *)(VAR_2->cfg_space.virtual_cfg_space + VAR_3)) &
   VAR_0;
 VAR_6 = (*(u32 *)(VAR_2->cfg_space.virtual_cfg_space + VAR_3)) &
   VAR_1;

 switch (VAR_6) {
 case 128:
  VAR_5 = (*(u32 *)(VAR_2->cfg_space.virtual_cfg_space
      + VAR_3 + 4));
  break;
 case 129:
 case 130:

 default:

  VAR_5 = 0;
  break;
 }

 return ((u64)VAR_5 << 32) | VAR_4;
}
