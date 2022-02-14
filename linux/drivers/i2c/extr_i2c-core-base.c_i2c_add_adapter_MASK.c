
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ of_node; } ;
struct i2c_adapter {int nr; struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int *,struct i2c_adapter*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,char*) ;

int FUNC_7(struct i2c_adapter *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 int VAR_6;

 if (VAR_5->of_node) {
  VAR_6 = FUNC_6(VAR_5->of_node, "i2c");
  if (VAR_6 >= 0) {
   VAR_4->nr = VAR_6;
   return FUNC_1(VAR_4);
  }
 }

 FUNC_4(&VAR_2);
 VAR_6 = FUNC_3(&VAR_3, VAR_4,
         VAR_1, 0, VAR_0);
 FUNC_5(&VAR_2);
 if (FUNC_0(VAR_6 < 0, "couldn't get idr"))
  return VAR_6;

 VAR_4->nr = VAR_6;

 return FUNC_2(VAR_4);
}
