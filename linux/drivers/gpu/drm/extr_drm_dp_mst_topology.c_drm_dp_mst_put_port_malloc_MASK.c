
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_port {int malloc_kref; } ;


 int FUNC_0 (char*,struct drm_dp_mst_port*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(struct drm_dp_mst_port *VAR_1)
{
 FUNC_0("port %p (%d)\n", VAR_1, FUNC_2(&VAR_1->malloc_kref) - 1);
 FUNC_1(&VAR_1->malloc_kref, VAR_0);
}
