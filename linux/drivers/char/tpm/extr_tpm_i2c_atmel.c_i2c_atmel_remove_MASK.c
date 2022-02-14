
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_chip {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 struct tpm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (struct tpm_chip*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct device *VAR_1 = &(VAR_0->dev);
 struct tpm_chip *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2);
 return 0;
}
