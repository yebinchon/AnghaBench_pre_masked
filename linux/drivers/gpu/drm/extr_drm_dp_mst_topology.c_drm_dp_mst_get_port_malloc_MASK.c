
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_dp_mst_port {int malloc_kref; } ;


 int FUNC_0 (char*,struct drm_dp_mst_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct drm_dp_mst_port *VAR_0)
{
 FUNC_1(&VAR_0->malloc_kref);
 FUNC_0("port %p (%d)\n", VAR_0, FUNC_2(&VAR_0->malloc_kref));
}
