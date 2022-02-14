
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hypfs_dbfs_file {int lock; int name; int dentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,struct hypfs_dbfs_file*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct hypfs_dbfs_file *VAR_2)
{
 VAR_2->dentry = FUNC_0(VAR_2->name, 0400, VAR_0, VAR_2,
      &VAR_1);
 FUNC_1(&VAR_2->lock);
}
