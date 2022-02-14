
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_physical_nodes; int physical_node_id; int node_segment_size; } ;
struct TYPE_4__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_2(struct amdgpu_device *VAR_9)
{
 u32 VAR_10 = FUNC_1(VAR_1, 0, VAR_7);
 u32 VAR_11 =
  FUNC_0(VAR_10, VAR_2, VAR_6);


 if (VAR_11) {
  VAR_9->gmc.xgmi.num_physical_nodes = VAR_11 + 1;
  if (VAR_9->gmc.xgmi.num_physical_nodes > 4)
   return -VAR_0;

  VAR_9->gmc.xgmi.physical_node_id =
   FUNC_0(VAR_10, VAR_2, VAR_4);
  if (VAR_9->gmc.xgmi.physical_node_id > 3)
   return -VAR_0;
  VAR_9->gmc.xgmi.node_segment_size = FUNC_0(
   FUNC_1(VAR_1, 0, VAR_8),
   VAR_3, VAR_5) << 24;
 }

 return 0;
}
