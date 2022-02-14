
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {TYPE_2__* funcs; } ;
struct amdgpu_kiq {int ring_lock; struct amdgpu_ring ring; } ;
struct TYPE_3__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {scalar_t__ in_gpu_reset; TYPE_1__ gfx; } ;
struct TYPE_4__ {int emit_wreg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_ring*,int *) ;
 long FUNC_2 (struct amdgpu_ring*,int ,int ) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

void FUNC_12(struct amdgpu_device *VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 signed long VAR_6, VAR_7 = 0;
 unsigned long VAR_8;
 uint32_t VAR_9;
 struct amdgpu_kiq *VAR_10 = &VAR_3->gfx.kiq;
 struct amdgpu_ring *VAR_11 = &VAR_10->ring;

 FUNC_0(!VAR_11->funcs->emit_wreg);

 FUNC_10(&VAR_10->ring_lock, VAR_8);
 FUNC_3(VAR_11, 32);
 FUNC_5(VAR_11, VAR_4, VAR_5);
 FUNC_1(VAR_11, &VAR_9);
 FUNC_4(VAR_11);
 FUNC_11(&VAR_10->ring_lock, VAR_8);

 VAR_6 = FUNC_2(VAR_11, VAR_9, VAR_2);
 if (VAR_6 < 1 && (VAR_3->in_gpu_reset || FUNC_6()))
  goto failed_kiq_write;

 FUNC_7();
 while (VAR_6 < 1 && VAR_7++ < VAR_1) {

  FUNC_8(VAR_0);
  VAR_6 = FUNC_2(VAR_11, VAR_9, VAR_2);
 }

 if (VAR_7 > VAR_1)
  goto failed_kiq_write;

 return;

failed_kiq_write:
 FUNC_9("failed to write reg:%x\n", VAR_4);
}
