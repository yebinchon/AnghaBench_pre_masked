
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* funcs; } ;
struct TYPE_10__ {int queue; int pipe; int me; } ;
struct TYPE_6__ {TYPE_5__ ring; } ;
struct TYPE_9__ {TYPE_3__ rlc; TYPE_1__ kiq; int priv_inst_irq; int priv_reg_irq; int cp_ecc_error_irq; } ;
struct amdgpu_device {TYPE_4__ gfx; int srbm_mutex; int in_suspend; int in_gpu_reset; } ;
struct TYPE_7__ {int (* stop ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct amdgpu_device*,int ,int ,int ,int ) ;
 int FUNC_11 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_12(void *VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_3;

 FUNC_1(VAR_4, &VAR_4->gfx.cp_ecc_error_irq, 0);
 FUNC_1(VAR_4, &VAR_4->gfx.priv_reg_irq, 0);
 FUNC_1(VAR_4, &VAR_4->gfx.priv_inst_irq, 0);


 FUNC_6(VAR_4);

 if (FUNC_2(VAR_4)) {
  FUNC_4(VAR_4, 0);





  FUNC_0(VAR_2, 0, VAR_0, VAR_1, 0);
  return 0;
 }




 if (!VAR_4->in_gpu_reset && !VAR_4->in_suspend) {
  FUNC_8(&VAR_4->srbm_mutex);
  FUNC_10(VAR_4, VAR_4->gfx.kiq.ring.me,
    VAR_4->gfx.kiq.ring.pipe,
    VAR_4->gfx.kiq.ring.queue, 0);
  FUNC_7(&VAR_4->gfx.kiq.ring);
  FUNC_10(VAR_4, 0, 0, 0, 0);
  FUNC_9(&VAR_4->srbm_mutex);
 }

 FUNC_3(VAR_4, 0);
 VAR_4->gfx.rlc.funcs->stop(VAR_4);

 FUNC_5(VAR_4);

 return 0;
}
