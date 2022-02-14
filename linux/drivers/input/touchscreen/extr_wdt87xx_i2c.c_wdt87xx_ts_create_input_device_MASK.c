
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int max_x; int max_y; int product_id; int vendor_id; int phy_w; } ;
struct wdt87xx_data {TYPE_3__ param; int phys; struct input_dev* input; TYPE_1__* client; } ;
struct TYPE_5__ {int product; int vendor; int bustype; } ;
struct input_dev {char* name; int phys; TYPE_2__ id; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct input_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct input_dev*,int ,unsigned int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct wdt87xx_data *VAR_10)
{
 struct device *VAR_11 = &VAR_10->client->dev;
 struct input_dev *VAR_12;
 unsigned int VAR_13 = FUNC_0(VAR_8, VAR_10->param.phy_w);
 int VAR_14;

 VAR_12 = FUNC_2(VAR_11);
 if (!VAR_12) {
  FUNC_1(VAR_11, "failed to allocate input device\n");
  return -VAR_5;
 }
 VAR_10->input = VAR_12;

 VAR_12->name = "WDT87xx Touchscreen";
 VAR_12->id.bustype = VAR_4;
 VAR_12->id.vendor = VAR_10->param.vendor_id;
 VAR_12->id.product = VAR_10->param.product_id;
 VAR_12->phys = VAR_10->phys;

 FUNC_6(VAR_12, VAR_0, 0,
        VAR_10->param.max_x, 0, 0);
 FUNC_6(VAR_12, VAR_1, 0,
        VAR_10->param.max_y, 0, 0);
 FUNC_3(VAR_12, VAR_0, VAR_13);
 FUNC_3(VAR_12, VAR_1, VAR_13);

 FUNC_6(VAR_12, VAR_3,
        0, VAR_10->param.max_x, 0, 0);
 FUNC_6(VAR_12, VAR_2, 0, 0xFF, 0, 0);

 FUNC_4(VAR_12, VAR_9,
       VAR_6 | VAR_7);

 VAR_14 = FUNC_5(VAR_12);
 if (VAR_14) {
  FUNC_1(VAR_11, "failed to register input device: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
