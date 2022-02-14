
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct bsg_device* private_data; } ;
struct bsg_device {int dummy; } ;


 int FUNC_0 (struct bsg_device*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct bsg_device *VAR_2 = VAR_1->private_data;

 VAR_1->private_data = ((void*)0);
 return FUNC_0(VAR_2);
}
