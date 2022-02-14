
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_hive_info {int pstate; } ;
struct TYPE_3__ {int hive_id; int node_id; } ;
struct TYPE_4__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; int dev; int smu; } ;


 struct amdgpu_hive_info* FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int ,int ,int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(struct amdgpu_device *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 struct amdgpu_hive_info *VAR_3 = FUNC_0(VAR_0, 0);

 if (!VAR_3)
  return 0;

 if (VAR_3->pstate == VAR_1)
  return 0;

 FUNC_1(VAR_0->dev, "Set xgmi pstate %d.\n", VAR_1);

 if (FUNC_3(VAR_0))
  VAR_2 = FUNC_4(&VAR_0->smu, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0->dev,
   "XGMI: Set pstate failure on device %llx, hive %llx, ret %d",
   VAR_0->gmc.xgmi.node_id,
   VAR_0->gmc.xgmi.hive_id, VAR_2);

 return VAR_2;
}
