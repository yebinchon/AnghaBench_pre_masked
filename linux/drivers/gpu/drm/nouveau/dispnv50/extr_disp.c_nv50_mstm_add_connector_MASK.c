
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_mstm {int dummy; } ;
struct drm_connector {int dummy; } ;
struct nv50_mstc {struct drm_connector connector; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_dp_mst_port {int dummy; } ;


 int FUNC_0 (struct nv50_mstm*,struct drm_dp_mst_port*,char const*,struct nv50_mstc**) ;
 struct nv50_mstm* FUNC_1 (struct drm_dp_mst_topology_mgr*) ;

__attribute__((used)) static struct drm_connector *
FUNC_2(struct drm_dp_mst_topology_mgr *VAR_0,
   struct drm_dp_mst_port *VAR_1, const char *VAR_2)
{
 struct nv50_mstm *VAR_3 = FUNC_1(VAR_0);
 struct nv50_mstc *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return ((void*)0);

 return &VAR_4->connector;
}
