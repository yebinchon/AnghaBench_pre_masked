
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct i2c_client *VAR_2,
          int VAR_3,
          char *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1);

 return FUNC_1(VAR_4, "%d\n",
         (VAR_5 & VAR_0) == VAR_0 ? 1 : 0);
}
