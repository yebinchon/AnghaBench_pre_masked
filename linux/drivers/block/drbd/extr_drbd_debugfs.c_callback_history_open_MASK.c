
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct drbd_connection* i_private; } ;
struct file {int dummy; } ;
struct drbd_connection {int kref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int ,struct drbd_connection*,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct drbd_connection *VAR_4 = VAR_2->i_private;
 return FUNC_0(VAR_3, VAR_0, VAR_4,
    &VAR_4->kref, VAR_1);
}
