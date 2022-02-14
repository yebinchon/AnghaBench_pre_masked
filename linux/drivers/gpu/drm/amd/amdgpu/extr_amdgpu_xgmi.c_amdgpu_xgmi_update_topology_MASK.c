
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_hive_info {int number_devices; } ;
struct TYPE_7__ {int hive_id; int node_id; } ;
struct TYPE_6__ {TYPE_3__ xgmi; } ;
struct TYPE_5__ {int top_info; } ;
struct TYPE_8__ {TYPE_1__ xgmi_context; } ;
struct amdgpu_device {TYPE_2__ gmc; int dev; TYPE_4__ psp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (TYPE_4__*,int ,int *) ;

int FUNC_2(struct amdgpu_hive_info *VAR_1, struct amdgpu_device *VAR_2)
{
 int VAR_3 = -VAR_0;


 VAR_3 = FUNC_1(&VAR_2->psp,
      VAR_1->number_devices,
      &VAR_2->psp.xgmi_context.top_info);
 if (VAR_3)
  FUNC_0(VAR_2->dev,
   "XGMI: Set topology failure on device %llx, hive %llx, ret %d",
   VAR_2->gmc.xgmi.node_id,
   VAR_2->gmc.xgmi.hive_id, VAR_3);

 return VAR_3;
}
