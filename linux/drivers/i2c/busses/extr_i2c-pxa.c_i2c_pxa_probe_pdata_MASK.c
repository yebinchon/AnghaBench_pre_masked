
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_i2c {int master_code; int rate; int high_mode; int fast_mode; int use_pio; } ;
struct platform_device_id {int driver_data; } ;
struct platform_device {int dev; } ;
struct i2c_pxa_platform_data {int master_code; int rate; int high_mode; int fast_mode; int use_pio; } ;
typedef enum pxa_i2c_types { ____Placeholder_pxa_i2c_types } pxa_i2c_types ;


 struct i2c_pxa_platform_data* FUNC_0 (int *) ;
 struct platform_device_id* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0,
          struct pxa_i2c *VAR_1,
          enum pxa_i2c_types *VAR_2)
{
 struct i2c_pxa_platform_data *VAR_3 = FUNC_0(&VAR_0->dev);
 const struct platform_device_id *VAR_4 = FUNC_1(VAR_0);

 *VAR_2 = VAR_4->driver_data;
 if (VAR_3) {
  VAR_1->use_pio = VAR_3->use_pio;
  VAR_1->fast_mode = VAR_3->fast_mode;
  VAR_1->high_mode = VAR_3->high_mode;
  VAR_1->master_code = VAR_3->master_code;
  if (!VAR_1->master_code)
   VAR_1->master_code = 0xe;
  VAR_1->rate = VAR_3->rate;
 }
 return 0;
}
