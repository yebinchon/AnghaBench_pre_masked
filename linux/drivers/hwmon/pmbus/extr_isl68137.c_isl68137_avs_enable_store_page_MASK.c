
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (struct i2c_client*,int,int ) ;
 int FUNC_2 (struct i2c_client*,int,int ,int,int) ;
 int FUNC_3 (struct i2c_client*,int,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct i2c_client *VAR_3,
           int VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 bool VAR_9;

 VAR_7 = FUNC_0(VAR_5, &VAR_9);
 if (VAR_7)
  return VAR_7;

 VAR_8 = VAR_9 ? VAR_0 : 0;
 if (VAR_8 == VAR_0) {
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_2);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_2,
        VAR_7);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_1,
        VAR_0, VAR_8);

 return (VAR_7 < 0) ? VAR_7 : VAR_6;
}
