
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct twl6030_gpadc_data {TYPE_1__* pdata; int dev; } ;
typedef int __le16 ;
struct TYPE_2__ {int (* channel_to_reg ) (int) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct twl6030_gpadc_data*,int,int) ;
 int FUNC_5 (int,int*) ;

__attribute__((used)) static int FUNC_6(struct twl6030_gpadc_data *VAR_0,
  int VAR_1, int *VAR_2)
{
 u8 VAR_3 = VAR_0->pdata->channel_to_reg(VAR_1);
 __le16 VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_3, (u8 *)&VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_0->dev, "unable to read register 0x%X\n", VAR_3);
  return VAR_6;
 }

 VAR_5 = FUNC_1(VAR_4);
 FUNC_0(VAR_0->dev, "GPADC raw code: %d", VAR_5);

 if (FUNC_3(VAR_0->pdata, VAR_1))
  *VAR_2 = FUNC_4(VAR_0, VAR_1, VAR_5);
 else
  *VAR_2 = VAR_5;

 return VAR_6;
}
