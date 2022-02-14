
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int flags; int adapter; } ;
struct bcm_iproc_i2c_dev {struct i2c_client* slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_iproc_i2c_dev*,int) ;
 struct bcm_iproc_i2c_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3)
{
 struct bcm_iproc_i2c_dev *VAR_4 = FUNC_1(VAR_3->adapter);

 if (VAR_4->slave)
  return -VAR_1;

 if (VAR_3->flags & VAR_2)
  return -VAR_0;

 VAR_4->slave = VAR_3;
 FUNC_0(VAR_4, 0);
 return 0;
}
