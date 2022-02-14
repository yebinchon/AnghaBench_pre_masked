
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ virtual_cfg_space; } ;
struct intel_vgpu {TYPE_1__ cfg_space; } ;


 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(struct intel_vgpu *VAR_1, int VAR_2)
{

 return (*(u64 *)(VAR_1->cfg_space.virtual_cfg_space + VAR_2)) &
   VAR_0;
}
