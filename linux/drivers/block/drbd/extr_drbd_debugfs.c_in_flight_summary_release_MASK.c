
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct drbd_resource* i_private; } ;
struct file {int dummy; } ;
struct drbd_resource {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct drbd_resource *VAR_3 = VAR_1->i_private;
 FUNC_0(&VAR_3->kref, VAR_0);
 return FUNC_1(VAR_1, VAR_2);
}
