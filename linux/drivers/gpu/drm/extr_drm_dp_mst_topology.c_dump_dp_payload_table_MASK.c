
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_topology_mgr {int aux; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct drm_dp_mst_topology_mgr *VAR_2,
      char *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 16) {
  if (FUNC_0(VAR_2->aux,
         VAR_1 + VAR_4,
         &VAR_3[VAR_4], 16) != 16)
   return 0;
 }
 return 1;
}
