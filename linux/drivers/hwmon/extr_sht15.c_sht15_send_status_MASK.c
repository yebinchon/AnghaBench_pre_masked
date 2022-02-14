
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht15_data {int val_status; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sht15_data*,int ) ;
 int FUNC_3 (struct sht15_data*,int ) ;
 int FUNC_4 (struct sht15_data*) ;

__attribute__((used)) static int FUNC_5(struct sht15_data *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2->data, 1);
 if (VAR_4)
  return VAR_4;
 FUNC_1(VAR_0);
 FUNC_2(VAR_2, VAR_3);
 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_2->val_status = VAR_3;
 return 0;
}
