
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int flags; int addr; int adapter; } ;
struct em_i2c_device {scalar_t__ base; struct i2c_client* slave; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct em_i2c_device* FUNC_0 (int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_4)
{
 struct em_i2c_device *VAR_5 = FUNC_0(VAR_4->adapter);

 if (VAR_5->slave)
  return -VAR_1;

 if (VAR_4->flags & VAR_2)
  return -VAR_0;

 VAR_5->slave = VAR_4;


 FUNC_1(VAR_4->addr << 1, VAR_5->base + VAR_3);

 return 0;
}
