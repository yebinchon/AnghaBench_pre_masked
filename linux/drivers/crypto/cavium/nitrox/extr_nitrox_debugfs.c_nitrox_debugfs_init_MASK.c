
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {struct dentry* debugfs_dir; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,struct dentry*,struct nitrox_device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct nitrox_device *VAR_4)
{
 struct dentry *VAR_5;

 VAR_5 = FUNC_0(VAR_0, ((void*)0));

 VAR_4->debugfs_dir = VAR_5;
 FUNC_1("firmware", 0400, VAR_5, VAR_4, &VAR_2);
 FUNC_1("device", 0400, VAR_5, VAR_4, &VAR_1);
 FUNC_1("stats", 0400, VAR_5, VAR_4, &VAR_3);
}
