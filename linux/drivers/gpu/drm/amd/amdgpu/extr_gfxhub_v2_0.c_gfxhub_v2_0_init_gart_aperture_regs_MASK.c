
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gart_start; int gart_end; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5)
{
 FUNC_1(VAR_5);

 FUNC_0(VAR_0, 0, VAR_4,
       (u32)(VAR_5->gmc.gart_start >> 12));
 FUNC_0(VAR_0, 0, VAR_3,
       (u32)(VAR_5->gmc.gart_start >> 44));

 FUNC_0(VAR_0, 0, VAR_2,
       (u32)(VAR_5->gmc.gart_end >> 12));
 FUNC_0(VAR_0, 0, VAR_1,
       (u32)(VAR_5->gmc.gart_end >> 44));
}
