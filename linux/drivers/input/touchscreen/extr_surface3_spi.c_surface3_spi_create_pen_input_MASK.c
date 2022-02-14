
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct surface3_ts_data {TYPE_2__* spi; int pen_tool; struct input_dev* pen_input_dev; } ;
struct TYPE_3__ {int vendor; int product; int version; int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_1__ id; int propbit; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct input_dev* FUNC_2 (int *) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct surface3_ts_data *VAR_12)
{
 struct input_dev *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(&VAR_12->spi->dev);
 if (!VAR_13)
  return -VAR_8;

 VAR_12->pen_input_dev = VAR_13;
 VAR_12->pen_tool = VAR_4;

 FUNC_0(VAR_10, VAR_13->propbit);
 FUNC_0(VAR_11, VAR_13->propbit);
 FUNC_5(VAR_13, VAR_1, 0, 9600, 0, 0);
 FUNC_3(VAR_13, VAR_1, 40);
 FUNC_5(VAR_13, VAR_2, 0, 7200, 0, 0);
 FUNC_3(VAR_13, VAR_2, 48);
 FUNC_5(VAR_13, VAR_0, 0, 1024, 0, 0);
 FUNC_6(VAR_13, VAR_9, VAR_6);
 FUNC_6(VAR_13, VAR_9, VAR_3);
 FUNC_6(VAR_13, VAR_9, VAR_4);
 FUNC_6(VAR_13, VAR_9, VAR_5);

 VAR_13->name = "Surface3 SPI Pen Input";
 VAR_13->phys = "input/ts";
 VAR_13->id.bustype = VAR_7;
 VAR_13->id.vendor = 0x045e;
 VAR_13->id.product = 0x0002;
 VAR_13->id.version = 0x0000;

 VAR_14 = FUNC_4(VAR_13);
 if (VAR_14) {
  FUNC_1(&VAR_12->spi->dev,
   "Failed to register input device: %d", VAR_14);
  return VAR_14;
 }

 return 0;
}
