
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct drm_syncobj* private_data; } ;
struct drm_syncobj {int dummy; } ;


 int FUNC_0 (struct drm_syncobj*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct drm_syncobj *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 return 0;
}
