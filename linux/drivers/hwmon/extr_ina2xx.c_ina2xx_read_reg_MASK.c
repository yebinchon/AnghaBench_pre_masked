
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_data {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,char*) ;
 struct ina2xx_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct ina2xx_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, int VAR_4, unsigned int *VAR_5)
{
 struct ina2xx_data *VAR_6 = FUNC_2(VAR_3);
 int VAR_7, VAR_8;

 FUNC_0(VAR_3, "Starting register %d read\n", VAR_4);

 for (VAR_8 = 5; VAR_8; VAR_8--) {

  VAR_7 = FUNC_6(VAR_6->regmap, VAR_4, VAR_5);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_0(VAR_3, "read %d, val = 0x%04x\n", VAR_4, *VAR_5);
  if (*VAR_5 == 0) {
   unsigned int VAR_9;

   VAR_7 = FUNC_6(VAR_6->regmap, VAR_1,
       &VAR_9);
   if (VAR_7 < 0)
    return VAR_7;

   if (VAR_9 == 0) {
    FUNC_3(VAR_3, "chip not calibrated, reinitializing\n");

    VAR_7 = FUNC_4(VAR_6);
    if (VAR_7 < 0)
     return VAR_7;





    FUNC_5(VAR_2);
    continue;
   }
  }
  return 0;
 }






 FUNC_1(VAR_3, "unable to reinitialize the chip\n");
 return -VAR_0;
}
