
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct i2c_client*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_3)
{
 unsigned char VAR_4[3];

 VAR_4[0] = VAR_2;
 VAR_4[1] = VAR_1;
 VAR_4[2] = VAR_0;

 return FUNC_0(VAR_3, VAR_4, 3);
}
