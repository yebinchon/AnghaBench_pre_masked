
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct amdgpu_ring {int wptr_offs; int me; int doorbell_index; int pipe; int queue; TYPE_2__* funcs; int mqd_obj; struct amdgpu_device* adev; } ;
struct TYPE_3__ {scalar_t__ gpu_addr; } ;
struct amdgpu_device {TYPE_1__ wb; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct amdgpu_ring*,int) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct amdgpu_ring *VAR_2,
     struct amdgpu_ring *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->adev;
 uint64_t VAR_5 = FUNC_11(VAR_3->mqd_obj);
 uint64_t VAR_6 = VAR_4->wb.gpu_addr + (VAR_3->wptr_offs * 4);
 uint32_t VAR_7 = VAR_3->funcs->type == VAR_0 ? 4 : 0;

 FUNC_12(VAR_2, FUNC_0(VAR_1, 5));

 FUNC_12(VAR_2,
     FUNC_8(0) |
     FUNC_10(0) |
     FUNC_7(VAR_3->queue) |
     FUNC_6(VAR_3->pipe) |
     FUNC_4((VAR_3->me == 1 ? 0 : 1)) |
     FUNC_9(0) |
     FUNC_1(0) |
     FUNC_3(VAR_7) |
     FUNC_5(1));
 FUNC_12(VAR_2, FUNC_2(VAR_3->doorbell_index));
 FUNC_12(VAR_2, FUNC_13(VAR_5));
 FUNC_12(VAR_2, FUNC_14(VAR_5));
 FUNC_12(VAR_2, FUNC_13(VAR_6));
 FUNC_12(VAR_2, FUNC_14(VAR_6));
}
