
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmc150_accel_data {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct bmc150_accel_data *VAR_1,
          char *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_1(VAR_1->regmap);
 int VAR_5 = 3 * 2;
 int VAR_6;
 int VAR_7 = VAR_3 * VAR_5;

 VAR_6 = FUNC_2(VAR_1->regmap, VAR_0,
         VAR_2, VAR_7);
 if (VAR_6)
  FUNC_0(VAR_4,
   "Error transferring data from fifo: %d\n", VAR_6);

 return VAR_6;
}
