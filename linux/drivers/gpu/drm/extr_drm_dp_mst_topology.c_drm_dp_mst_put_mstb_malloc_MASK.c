
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_branch {int malloc_kref; } ;


 int FUNC_0 (char*,struct drm_dp_mst_branch*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct drm_dp_mst_branch *VAR_1)
{
 FUNC_0("mstb %p (%d)\n", VAR_1, FUNC_2(&VAR_1->malloc_kref) - 1);
 FUNC_1(&VAR_1->malloc_kref, VAR_0);
}
