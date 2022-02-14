
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct bmc150_accel_data {int watermark; int regmap; int fifo_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bmc150_accel_data *VAR_2)
{
 struct device *VAR_3 = FUNC_1(VAR_2->regmap);
 u8 VAR_4 = VAR_1;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2->regmap, VAR_4, VAR_2->fifo_mode);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3, "Error writing reg_fifo_config1\n");
  return VAR_5;
 }

 if (!VAR_2->fifo_mode)
  return 0;

 VAR_5 = FUNC_2(VAR_2->regmap, VAR_0,
      VAR_2->watermark);
 if (VAR_5 < 0)
  FUNC_0(VAR_3, "Error writing reg_fifo_config0\n");

 return VAR_5;
}
