
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct vfsmount {int dummy; } ;
struct path {struct dentry* dentry; struct vfsmount* mnt; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,struct dentry*) ;
 int FUNC_2 (struct path*) ;
 int FUNC_3 (struct inode*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0,
   struct dentry *VAR_1,
   struct vfsmount *VAR_2, umode_t VAR_3)
{
 struct path VAR_4 = {.mnt = VAR_2, .dentry = VAR_1};
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_3 & 0777);
 if (!VAR_5) {
  VAR_5 = FUNC_2(&VAR_4);
  if (VAR_5 < 0) {
   int VAR_6 = FUNC_1(VAR_0, VAR_1);
   FUNC_0(VAR_6);
  }
 }
 return VAR_5;
}
