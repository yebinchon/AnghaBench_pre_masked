
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sq_irq; int cp_ecc_error_irq; int priv_inst_irq; int priv_reg_irq; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, &VAR_1->gfx.priv_reg_irq, 0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1, &VAR_1->gfx.priv_inst_irq, 0);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1, &VAR_1->gfx.cp_ecc_error_irq, 0);
 if (VAR_2) {
  FUNC_0("amdgpu_irq_get() failed to get IRQ for EDC, r: %d.\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1, &VAR_1->gfx.sq_irq, 0);
 if (VAR_2) {
  FUNC_0(
   "amdgpu_irq_get() failed to get IRQ for SQ, r: %d.\n",
   VAR_2);
  return VAR_2;
 }

 return 0;
}
