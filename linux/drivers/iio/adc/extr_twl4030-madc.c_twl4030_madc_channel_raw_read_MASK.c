
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct twl4030_madc_data {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct twl4030_madc_data *VAR_1, u8 VAR_2)
{
 u16 VAR_3;
 int VAR_4;




 VAR_4 = FUNC_1(VAR_0, &VAR_3, VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_1->dev, "unable to read register 0x%X\n", VAR_2);
  return VAR_4;
 }

 return (int)(VAR_3 >> 6);
}
