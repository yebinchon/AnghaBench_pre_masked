
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int pbn_div; } ;
struct TYPE_2__ {scalar_t__ vcpi; int pbn; int num_slots; } ;
struct drm_dp_mst_port {TYPE_1__ vcpi; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (struct drm_dp_mst_topology_mgr*,TYPE_1__*,int,int) ;
 int FUNC_3 (struct drm_dp_mst_port*) ;
 struct drm_dp_mst_port* FUNC_4 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_5 (struct drm_dp_mst_port*) ;

bool FUNC_6(struct drm_dp_mst_topology_mgr *VAR_0,
         struct drm_dp_mst_port *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_1 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_1)
  return 0;

 if (VAR_3 < 0)
  return 0;

 if (VAR_1->vcpi.vcpi > 0) {
  FUNC_1("payload: vcpi %d already allocated for pbn %d - requested pbn %d\n",
         VAR_1->vcpi.vcpi, VAR_1->vcpi.pbn, VAR_2);
  if (VAR_2 == VAR_1->vcpi.pbn) {
   FUNC_5(VAR_1);
   return 1;
  }
 }

 VAR_4 = FUNC_2(VAR_0, &VAR_1->vcpi, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_1("failed to init vcpi slots=%d max=63 ret=%d\n",
         FUNC_0(VAR_2, VAR_0->pbn_div), VAR_4);
  goto out;
 }
 FUNC_1("initing vcpi for pbn=%d slots=%d\n",
        VAR_2, VAR_1->vcpi.num_slots);


 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 return 1;
out:
 return 0;
}
