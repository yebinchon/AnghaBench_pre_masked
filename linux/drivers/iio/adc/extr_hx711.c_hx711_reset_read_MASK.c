
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx711_data {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hx711_data*) ;
 scalar_t__ FUNC_2 (struct hx711_data*) ;
 int FUNC_3 (struct hx711_data*,int) ;

__attribute__((used)) static int FUNC_4(struct hx711_data *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;





 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1->dev, "reset failed!");
  return -VAR_0;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_1);

 return VAR_4;
}
