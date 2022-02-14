
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct TYPE_3__ {int id; int rev; int num_i2c_devs; int * gpiod_table; int num_spi_devs; int spi_devs; int * i2c_devs; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
          const struct i2c_device_id *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = FUNC_6(VAR_4, 0);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "Failed to read ID: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_9 = (VAR_6 & 0xfe) >> 2;
 VAR_10 = VAR_6 & 0x3;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++)
  if (VAR_9 == VAR_0[VAR_7].id && (VAR_0[VAR_7].rev == 0xff ||
         VAR_10 == VAR_0[VAR_7].rev))
   break;

 FUNC_4(&VAR_2);
 FUNC_4(&VAR_1);
 FUNC_4(&VAR_3);

 if (VAR_7 < FUNC_0(VAR_0)) {
  FUNC_2(&VAR_4->dev, "%s revision %d\n",
    VAR_0[VAR_7].name, VAR_10 + 1);

  for (VAR_8 = 0; VAR_8 < VAR_0[VAR_7].num_i2c_devs; VAR_8++) {
   if (!FUNC_5(VAR_4->adapter,
         &(VAR_0[VAR_7].i2c_devs[VAR_8])))
    FUNC_1(&VAR_4->dev,
     "Failed to register dev: %d\n", VAR_6);
  }

  FUNC_7(VAR_0[VAR_7].spi_devs,
     VAR_0[VAR_7].num_spi_devs);

  if (VAR_0[VAR_7].gpiod_table)
   FUNC_4(VAR_0[VAR_7].gpiod_table);
 } else {
  FUNC_3(&VAR_4->dev, "Unknown module ID 0x%x revision %d\n",
    VAR_9, VAR_10 + 1);
 }

 return 0;
}
