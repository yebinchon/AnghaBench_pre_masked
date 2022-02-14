
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_device {int gart_pin_size; int visible_pin_size; int vram_pin_size; } ;
struct TYPE_4__ {scalar_t__ mem_type; } ;
struct TYPE_3__ {TYPE_2__ mem; int bdev; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_bo *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_1(VAR_2->tbo.bdev);

 if (VAR_2->tbo.mem.mem_type == VAR_1) {
  FUNC_3(FUNC_0(VAR_2), &VAR_3->vram_pin_size);
  FUNC_3(FUNC_2(VAR_2),
        &VAR_3->visible_pin_size);
 } else if (VAR_2->tbo.mem.mem_type == VAR_0) {
  FUNC_3(FUNC_0(VAR_2), &VAR_3->gart_pin_size);
 }
}
