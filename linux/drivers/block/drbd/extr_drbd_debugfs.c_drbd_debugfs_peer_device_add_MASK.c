
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnr_buf ;
struct drbd_peer_device {struct dentry* debugfs_peer_dev; TYPE_2__* device; TYPE_1__* connection; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int vnr; } ;
struct TYPE_3__ {struct dentry* debugfs_conn; } ;


 struct dentry* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,char*,int) ;

void FUNC_2(struct drbd_peer_device *VAR_0)
{
 struct dentry *VAR_1 = VAR_0->connection->debugfs_conn;
 struct dentry *VAR_2;
 char VAR_3[8];

 FUNC_1(VAR_3, sizeof(VAR_3), "%u", VAR_0->device->vnr);
 VAR_2 = FUNC_0(VAR_3, VAR_1);
 VAR_0->debugfs_peer_dev = VAR_2;
}
