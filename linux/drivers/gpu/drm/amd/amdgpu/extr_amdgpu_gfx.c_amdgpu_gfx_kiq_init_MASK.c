
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_kiq {int eop_obj; int eop_gpu_addr; } ;
struct TYPE_2__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {int dev; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,unsigned int,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct amdgpu_device *VAR_2,
   unsigned VAR_3)
{
 int VAR_4;
 u32 *VAR_5;
 struct amdgpu_kiq *VAR_6 = &VAR_2->gfx.kiq;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1,
        VAR_0, &VAR_6->eop_obj,
        &VAR_6->eop_gpu_addr, (void **)&VAR_5);
 if (VAR_4) {
  FUNC_4(VAR_2->dev, "failed to create KIQ bo (%d).\n", VAR_4);
  return VAR_4;
 }

 FUNC_5(VAR_5, 0, VAR_3);

 VAR_4 = FUNC_2(VAR_6->eop_obj, 1);
 if (FUNC_6(VAR_4 != 0))
  FUNC_4(VAR_2->dev, "(%d) reserve kiq eop bo failed\n", VAR_4);
 FUNC_1(VAR_6->eop_obj);
 FUNC_3(VAR_6->eop_obj);

 return 0;
}
