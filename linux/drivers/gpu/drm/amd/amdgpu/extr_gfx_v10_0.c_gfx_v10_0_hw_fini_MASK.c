
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priv_inst_irq; int priv_reg_irq; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int *,int ) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 int VAR_3;

 FUNC_2(VAR_2, &VAR_2->gfx.priv_reg_irq, 0);
 FUNC_2(VAR_2, &VAR_2->gfx.priv_inst_irq, 0);

 if (VAR_0) {
  VAR_3 = FUNC_7(VAR_2);
  if (VAR_3)
   FUNC_0("KGQ disable failed\n");
 }

 if (FUNC_1(VAR_2))
  FUNC_0("KCQ disable failed\n");
 if (FUNC_3(VAR_2)) {
  FUNC_8("For SRIOV client, shouldn't do anything.\n");
  return 0;
 }
 FUNC_4(VAR_2, 0);
 FUNC_6(VAR_2, 0);
 FUNC_5(VAR_2);

 return 0;
}
