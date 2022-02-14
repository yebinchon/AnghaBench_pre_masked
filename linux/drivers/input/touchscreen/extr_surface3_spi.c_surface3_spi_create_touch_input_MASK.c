
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct surface3_ts_data {TYPE_2__* spi; struct input_dev* input_dev; } ;
struct TYPE_3__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_1__ id; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 struct input_dev* FUNC_1 (int *) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*,int,int ) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct surface3_ts_data *VAR_7)
{
 struct input_dev *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(&VAR_7->spi->dev);
 if (!VAR_8)
  return -VAR_5;

 VAR_7->input_dev = VAR_8;

 FUNC_5(VAR_8, VAR_0, 0, 9600, 0, 0);
 FUNC_2(VAR_8, VAR_0, 40);
 FUNC_5(VAR_8, VAR_1, 0, 7200, 0, 0);
 FUNC_2(VAR_8, VAR_1, 48);
 FUNC_5(VAR_8, VAR_2, 0, 1024, 0, 0);
 FUNC_5(VAR_8, VAR_3, 0, 1024, 0, 0);
 FUNC_3(VAR_8, 10, VAR_6);

 VAR_8->name = "Surface3 SPI Capacitive TouchScreen";
 VAR_8->phys = "input/ts";
 VAR_8->id.bustype = VAR_4;
 VAR_8->id.vendor = 0x045e;
 VAR_8->id.product = 0x0001;
 VAR_8->id.version = 0x0000;

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_7->spi->dev,
   "Failed to register input device: %d", VAR_9);
  return VAR_9;
 }

 return 0;
}
