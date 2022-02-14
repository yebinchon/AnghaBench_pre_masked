
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef int args ;
struct TYPE_5__ {int ucEnable; } ;
typedef TYPE_2__ ENABLE_DISP_POWER_GATING_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

void FUNC_3(struct amdgpu_device *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2);
 ENABLE_DISP_POWER_GATING_PS_ALLOCATION VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.ucEnable = VAR_0;

 FUNC_1(VAR_3->mode_info.atom_context, VAR_4, (uint32_t *)&VAR_5);
}
