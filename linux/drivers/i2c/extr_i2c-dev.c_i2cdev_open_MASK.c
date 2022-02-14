
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct i2c_client {struct i2c_adapter* adapter; int name; } ;
struct i2c_adapter {int nr; } ;
struct file {struct i2c_client* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_adapter* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct i2c_adapter*) ;
 unsigned int FUNC_2 (struct inode*) ;
 struct i2c_client* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 unsigned int VAR_6 = FUNC_2(VAR_4);
 struct i2c_client *VAR_7;
 struct i2c_adapter *VAR_8;

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_1(VAR_8);
  return -VAR_1;
 }
 FUNC_4(VAR_7->name, VAR_3, "i2c-dev %d", VAR_8->nr);

 VAR_7->adapter = VAR_8;
 VAR_5->private_data = VAR_7;

 return 0;
}
