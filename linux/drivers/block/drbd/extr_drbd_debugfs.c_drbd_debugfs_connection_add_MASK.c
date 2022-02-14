
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_connection {struct dentry* debugfs_conn_oldest_requests; struct dentry* debugfs_conn; struct dentry* debugfs_conn_callback_history; TYPE_1__* resource; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct dentry* debugfs_res_connections; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (char*,struct dentry*) ;
 struct dentry* FUNC_1 (char*,int,struct dentry*,struct drbd_connection*,int *) ;

void FUNC_2(struct drbd_connection *VAR_2)
{
 struct dentry *VAR_3 = VAR_2->resource->debugfs_res_connections;
 struct dentry *VAR_4;




 VAR_4 = FUNC_0("peer", VAR_3);
 VAR_2->debugfs_conn = VAR_4;

 VAR_4 = FUNC_1("callback_history", 0440,
         VAR_2->debugfs_conn, VAR_2,
         &VAR_0);
 VAR_2->debugfs_conn_callback_history = VAR_4;

 VAR_4 = FUNC_1("oldest_requests", 0440,
         VAR_2->debugfs_conn, VAR_2,
         &VAR_1);
 VAR_2->debugfs_conn_oldest_requests = VAR_4;
}
