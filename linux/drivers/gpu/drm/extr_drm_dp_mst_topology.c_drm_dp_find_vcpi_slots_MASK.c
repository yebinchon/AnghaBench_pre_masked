
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_topology_mgr {int pbn_div; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

int FUNC_1(struct drm_dp_mst_topology_mgr *VAR_1,
      int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1->pbn_div);


 if (VAR_3 > 63)
  return -VAR_0;
 return VAR_3;
}
