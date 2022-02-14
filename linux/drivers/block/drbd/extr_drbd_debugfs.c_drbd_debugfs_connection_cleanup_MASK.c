
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {int debugfs_conn; int debugfs_conn_oldest_requests; int debugfs_conn_callback_history; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drbd_connection *VAR_0)
{
 FUNC_0(&VAR_0->debugfs_conn_callback_history);
 FUNC_0(&VAR_0->debugfs_conn_oldest_requests);
 FUNC_0(&VAR_0->debugfs_conn);
}
