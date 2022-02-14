
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct drm_dp_mst_topology_mgr {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static bool FUNC_3(struct drm_dp_mst_topology_mgr *VAR_0,
     u8 *VAR_1)
{
 u64 VAR_2;

 if (FUNC_1(VAR_1, 0, 16))
  return 1;

 VAR_2 = FUNC_0();

 FUNC_2(&VAR_1[0], &VAR_2, sizeof(u64));
 FUNC_2(&VAR_1[8], &VAR_2, sizeof(u64));

 return 0;
}
