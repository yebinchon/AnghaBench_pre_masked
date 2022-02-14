
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {TYPE_2__ rlc; int sq_irq; int cp_ecc_error_irq; int priv_inst_irq; int priv_reg_irq; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* stop ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int *,int ) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_12(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;

 FUNC_2(VAR_1, &VAR_1->gfx.priv_reg_irq, 0);
 FUNC_2(VAR_1, &VAR_1->gfx.priv_inst_irq, 0);

 FUNC_2(VAR_1, &VAR_1->gfx.cp_ecc_error_irq, 0);

 FUNC_2(VAR_1, &VAR_1->gfx.sq_irq, 0);


 FUNC_6(VAR_1);

 if (FUNC_3(VAR_1)) {
  FUNC_9("For SRIOV client, shouldn't do anything.\n");
  return 0;
 }
 FUNC_0(VAR_1);
 if (!FUNC_7(VAR_1))
  FUNC_4(VAR_1, 0);
 else
  FUNC_10("cp is busy, skip halt cp\n");
 if (!FUNC_8(VAR_1))
  VAR_1->gfx.rlc.funcs->stop(VAR_1);
 else
  FUNC_10("rlc is busy, skip halt rlc\n");
 FUNC_1(VAR_1);

 FUNC_5(VAR_1);

 return 0;
}
