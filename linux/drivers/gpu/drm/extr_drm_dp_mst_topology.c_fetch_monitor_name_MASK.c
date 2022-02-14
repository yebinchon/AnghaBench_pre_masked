
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_dp_mst_port {int connector; } ;


 struct edid* FUNC_0 (int ,struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_1 (struct edid*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_dp_mst_topology_mgr *VAR_0,
          struct drm_dp_mst_port *VAR_1, char *VAR_2,
          int VAR_3)
{
 struct edid *VAR_4;

 VAR_4 = FUNC_0(VAR_1->connector, VAR_0, VAR_1);
 FUNC_1(VAR_4, VAR_2, VAR_3);
}
