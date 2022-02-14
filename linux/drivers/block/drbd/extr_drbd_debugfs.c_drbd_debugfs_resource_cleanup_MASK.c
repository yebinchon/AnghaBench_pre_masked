
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_resource {int debugfs_res; int debugfs_res_volumes; int debugfs_res_connections; int debugfs_res_in_flight_summary; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drbd_resource *VAR_0)
{

 FUNC_0(&VAR_0->debugfs_res_in_flight_summary);
 FUNC_0(&VAR_0->debugfs_res_connections);
 FUNC_0(&VAR_0->debugfs_res_volumes);
 FUNC_0(&VAR_0->debugfs_res);
}
