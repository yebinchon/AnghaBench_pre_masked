
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * gmc_funcs; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 if (VAR_1->gmc.gmc_funcs == ((void*)0))
  VAR_1->gmc.gmc_funcs = &VAR_0;
}
