
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,char*,char const*,int) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char const*,struct device*) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,struct firmware const*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0,
       const char *VAR_1, unsigned int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_0);
 const struct firmware *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4, VAR_1, VAR_0);
 if (VAR_5) {
  FUNC_0(&VAR_3->dev, "unable to retrieve firmware %s: %d\n",
   VAR_1, VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_2);

 FUNC_1(VAR_4);

 return VAR_5 ? VAR_5 : 0;
}
