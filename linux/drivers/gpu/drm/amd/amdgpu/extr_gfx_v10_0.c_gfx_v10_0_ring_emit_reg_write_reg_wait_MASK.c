
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; TYPE_1__* funcs; } ;
struct TYPE_4__ {int cp_fw_write_wait; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*,int ,int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_ring*,int,int ,int,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_1,
         uint32_t VAR_2, uint32_t VAR_3,
         uint32_t VAR_4, uint32_t VAR_5)
{
 int VAR_6 = (VAR_1->funcs->type == VAR_0);
 struct amdgpu_device *VAR_7 = VAR_1->adev;
 bool VAR_8 = 0;

 VAR_8 = VAR_7->gfx.cp_fw_write_wait;

 if (VAR_8)
  FUNC_1(VAR_1, VAR_6, 0, 1, VAR_2, VAR_3,
           VAR_4, VAR_5, 0x20);
 else
  FUNC_0(VAR_1, VAR_2, VAR_3,
          VAR_4, VAR_5);
}
