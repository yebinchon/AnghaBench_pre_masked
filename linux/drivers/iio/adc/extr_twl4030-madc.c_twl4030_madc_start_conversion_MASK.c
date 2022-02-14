
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_madc_data {int dev; } ;
struct twl4030_madc_conversion_method {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 struct twl4030_madc_conversion_method* VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct twl4030_madc_data *VAR_6,
      int VAR_7)
{
 const struct twl4030_madc_conversion_method *VAR_8;
 int VAR_9 = 0;

 if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
  return -VAR_0;

 VAR_8 = &VAR_5[VAR_7];
 VAR_9 = FUNC_1(VAR_4, VAR_3,
          VAR_8->ctrl);
 if (VAR_9) {
  FUNC_0(VAR_6->dev, "unable to write ctrl register 0x%X\n",
   VAR_8->ctrl);
  return VAR_9;
 }

 return 0;
}
