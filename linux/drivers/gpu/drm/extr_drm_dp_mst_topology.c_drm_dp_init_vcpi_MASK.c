
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_vcpi {int pbn; int aligned_pbn; int num_slots; } ;
struct drm_dp_mst_topology_mgr {int pbn_div; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_mst_topology_mgr*,struct drm_dp_vcpi*) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_mst_topology_mgr *VAR_1,
       struct drm_dp_vcpi *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;


 if (VAR_4 > 63)
  return -VAR_0;

 VAR_2->pbn = VAR_3;
 VAR_2->aligned_pbn = VAR_4 * VAR_1->pbn_div;
 VAR_2->num_slots = VAR_4;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
