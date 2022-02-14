
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl4030_madc_data {int imr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct twl4030_madc_data *VAR_1, u8 VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_3, VAR_1->imr);
 if (VAR_4) {
  FUNC_0(VAR_1->dev, "unable to read imr register 0x%X\n",
   VAR_1->imr);
  return VAR_4;
 }
 VAR_3 |= (1 << VAR_2);
 VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_1->imr);
 if (VAR_4) {
  FUNC_0(VAR_1->dev,
   "unable to write imr register 0x%X\n", VAR_1->imr);
  return VAR_4;
 }

 return 0;
}
