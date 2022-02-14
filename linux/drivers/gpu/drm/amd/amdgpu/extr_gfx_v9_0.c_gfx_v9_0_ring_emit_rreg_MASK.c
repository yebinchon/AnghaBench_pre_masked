
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct TYPE_4__ {int reg_val_offs; } ;
struct TYPE_3__ {scalar_t__ gpu_addr; } ;
struct amdgpu_device {TYPE_2__ virt; TYPE_1__ wb; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_1, uint32_t VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_1->adev;

 FUNC_1(VAR_1, FUNC_0(VAR_0, 4));
 FUNC_1(VAR_1, 0 |
    (5 << 8) |
    (1 << 20));
 FUNC_1(VAR_1, VAR_2);
 FUNC_1(VAR_1, 0);
 FUNC_1(VAR_1, FUNC_2(VAR_3->wb.gpu_addr +
    VAR_3->virt.reg_val_offs * 4));
 FUNC_1(VAR_1, FUNC_3(VAR_3->wb.gpu_addr +
    VAR_3->virt.reg_val_offs * 4));
}
