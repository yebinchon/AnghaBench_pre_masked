
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct i2c_client {int adapter; } ;
struct file {struct i2c_client* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->adapter);
 FUNC_1(VAR_2);
 VAR_1->private_data = ((void*)0);

 return 0;
}
