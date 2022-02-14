
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_manager {int master_dsi_link_id; void* is_sync_needed; void* is_dual_dsi; } ;
struct device_node {int dummy; } ;


 struct msm_dsi_manager VAR_0 ;
 void* FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_1, int VAR_2)
{
 struct msm_dsi_manager *VAR_3 = &VAR_0;




 if (!VAR_3->is_dual_dsi)
  VAR_3->is_dual_dsi = FUNC_0(
      VAR_1, "qcom,dual-dsi-mode");

 if (VAR_3->is_dual_dsi) {
  if (FUNC_0(VAR_1, "qcom,master-dsi"))
   VAR_3->master_dsi_link_id = VAR_2;
  if (!VAR_3->is_sync_needed)
   VAR_3->is_sync_needed = FUNC_0(
     VAR_1, "qcom,sync-dual-dsi");
 }

 return 0;
}
