
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_ring {TYPE_2__* funcs; } ;
struct amdgpu_kiq {int ring_lock; struct amdgpu_ring ring; } ;
struct TYPE_8__ {size_t reg_val_offs; } ;
struct TYPE_7__ {int * wb; } ;
struct TYPE_5__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {TYPE_4__ virt; TYPE_3__ wb; scalar_t__ in_gpu_reset; TYPE_1__ gfx; } ;
struct TYPE_6__ {int emit_rreg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_ring*,int *) ;
 long FUNC_2 (struct amdgpu_ring*,int ,int ) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

uint32_t FUNC_12(struct amdgpu_device *VAR_3, uint32_t VAR_4)
{
 signed long VAR_5, VAR_6 = 0;
 unsigned long VAR_7;
 uint32_t VAR_8;
 struct amdgpu_kiq *VAR_9 = &VAR_3->gfx.kiq;
 struct amdgpu_ring *VAR_10 = &VAR_9->ring;

 FUNC_0(!VAR_10->funcs->emit_rreg);

 FUNC_10(&VAR_9->ring_lock, VAR_7);
 FUNC_3(VAR_10, 32);
 FUNC_5(VAR_10, VAR_4);
 FUNC_1(VAR_10, &VAR_8);
 FUNC_4(VAR_10);
 FUNC_11(&VAR_9->ring_lock, VAR_7);

 VAR_5 = FUNC_2(VAR_10, VAR_8, VAR_2);
 if (VAR_5 < 1 && (VAR_3->in_gpu_reset || FUNC_6()))
  goto failed_kiq_read;

 FUNC_7();
 while (VAR_5 < 1 && VAR_6++ < VAR_1) {
  FUNC_8(VAR_0);
  VAR_5 = FUNC_2(VAR_10, VAR_8, VAR_2);
 }

 if (VAR_6 > VAR_1)
  goto failed_kiq_read;

 return VAR_3->wb.wb[VAR_3->virt.reg_val_offs];

failed_kiq_read:
 FUNC_9("failed to read reg:%x\n", VAR_4);
 return ~0;
}
