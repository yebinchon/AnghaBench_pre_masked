
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_state {int dummy; } ;
struct drm_dp_mst_topology_mgr {int base; struct drm_device* dev; } ;
struct TYPE_2__ {int connection_mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_atomic_state*,int *) ;
 int FUNC_2 (int *) ;
 struct drm_dp_mst_topology_state* FUNC_3 (int ) ;

struct drm_dp_mst_topology_state *FUNC_4(struct drm_atomic_state *VAR_0,
            struct drm_dp_mst_topology_mgr *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;

 FUNC_0(!FUNC_2(&VAR_2->mode_config.connection_mutex));
 return FUNC_3(FUNC_1(VAR_0, &VAR_1->base));
}
