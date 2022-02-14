
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_vcpi {int vcpi; } ;
struct drm_dp_mst_topology_mgr {int max_payloads; int payload_lock; struct drm_dp_vcpi** proposed_vcpis; int vcpi_mask; int payload_mask; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct drm_dp_mst_topology_mgr *VAR_1,
     struct drm_dp_vcpi *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_2(&VAR_1->payload_lock);
 VAR_3 = FUNC_1(&VAR_1->payload_mask, VAR_1->max_payloads + 1);
 if (VAR_3 > VAR_1->max_payloads) {
  VAR_3 = -VAR_0;
  FUNC_0("out of payload ids %d\n", VAR_3);
  goto out_unlock;
 }

 VAR_4 = FUNC_1(&VAR_1->vcpi_mask, VAR_1->max_payloads + 1);
 if (VAR_4 > VAR_1->max_payloads) {
  VAR_3 = -VAR_0;
  FUNC_0("out of vcpi ids %d\n", VAR_3);
  goto out_unlock;
 }

 FUNC_4(VAR_3, &VAR_1->payload_mask);
 FUNC_4(VAR_4, &VAR_1->vcpi_mask);
 VAR_2->vcpi = VAR_4 + 1;
 VAR_1->proposed_vcpis[VAR_3 - 1] = VAR_2;
out_unlock:
 FUNC_3(&VAR_1->payload_lock);
 return VAR_3;
}
