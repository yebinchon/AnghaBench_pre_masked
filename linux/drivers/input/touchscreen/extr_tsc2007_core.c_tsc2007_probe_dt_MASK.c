
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007 {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, struct tsc2007 *VAR_2)
{
 FUNC_0(&VAR_1->dev, "platform data is required!\n");
 return -VAR_0;
}
