
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct TYPE_3__ {int gart_start; int gart_end; } ;
struct TYPE_4__ {int bo; } ;
struct amdgpu_device {TYPE_1__ gmc; TYPE_2__ gart; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5)
{
 uint64_t VAR_6 = FUNC_1(VAR_5->gart.bo);

 FUNC_2(VAR_5, 0, VAR_6);

 FUNC_0(VAR_0, 0, VAR_4,
       (u32)(VAR_5->gmc.gart_start >> 12));
 FUNC_0(VAR_0, 0, VAR_3,
       (u32)(VAR_5->gmc.gart_start >> 44));

 FUNC_0(VAR_0, 0, VAR_2,
       (u32)(VAR_5->gmc.gart_end >> 12));
 FUNC_0(VAR_0, 0, VAR_1,
       (u32)(VAR_5->gmc.gart_end >> 44));
}
