
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_resource {char* name; struct dentry* debugfs_res_in_flight_summary; struct dentry* debugfs_res; struct dentry* debugfs_res_connections; struct dentry* debugfs_res_volumes; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 struct dentry* FUNC_1 (char*,int,struct dentry*,struct drbd_resource*,int *) ;
 struct dentry* VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct drbd_resource *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_0(VAR_2->name, VAR_0);
 VAR_2->debugfs_res = VAR_3;

 VAR_3 = FUNC_0("volumes", VAR_2->debugfs_res);
 VAR_2->debugfs_res_volumes = VAR_3;

 VAR_3 = FUNC_0("connections", VAR_2->debugfs_res);
 VAR_2->debugfs_res_connections = VAR_3;

 VAR_3 = FUNC_1("in_flight_summary", 0440,
         VAR_2->debugfs_res, VAR_2,
         &VAR_1);
 VAR_2->debugfs_res_in_flight_summary = VAR_3;
}
