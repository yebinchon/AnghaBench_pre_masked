
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_mst_branch {int lct; int malloc_kref; int topology_kref; int ports; int rad; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drm_dp_mst_branch* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static struct drm_dp_mst_branch *FUNC_4(u8 VAR_1, u8 *VAR_2)
{
 struct drm_dp_mst_branch *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->lct = VAR_1;
 if (VAR_1 > 1)
  FUNC_3(VAR_3->rad, VAR_2, VAR_1 / 2);
 FUNC_0(&VAR_3->ports);
 FUNC_1(&VAR_3->topology_kref);
 FUNC_1(&VAR_3->malloc_kref);
 return VAR_3;
}
