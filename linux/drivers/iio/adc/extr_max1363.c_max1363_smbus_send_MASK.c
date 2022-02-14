
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client const*,char const) ;

__attribute__((used)) static int FUNC_1(const struct i2c_client *VAR_0, const char *VAR_1,
  int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = VAR_4 = 0; VAR_4 == 0 && VAR_3 < VAR_2; ++VAR_3)
  VAR_4 = FUNC_0(VAR_0, VAR_1[VAR_3]);

 return VAR_4 ? VAR_4 : VAR_2;
}
