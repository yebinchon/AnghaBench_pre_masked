
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int product; int vendor; int bustype; } ;
struct input_dev {char* name; int keybit; int propbit; int evbit; TYPE_2__ id; } ;
struct elan_tp_data {unsigned int max_x; unsigned int max_y; struct input_dev* input; int y_res; int x_res; scalar_t__ middle_button; scalar_t__ clickpad; int product_id; int width_y; int width_x; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct input_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*,int ,int ,unsigned int,int ,int ) ;
 int FUNC_6 (struct input_dev*,struct elan_tp_data*) ;
 unsigned int FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct elan_tp_data *VAR_24)
{
 struct device *VAR_25 = &VAR_24->client->dev;
 struct input_dev *VAR_26;
 unsigned int VAR_27 = FUNC_7(VAR_24->width_x, VAR_24->width_y);
 unsigned int VAR_28 = FUNC_8(VAR_24->width_x, VAR_24->width_y);
 int VAR_29;

 VAR_26 = FUNC_2(VAR_25);
 if (!VAR_26)
  return -VAR_15;

 VAR_26->name = "Elan Touchpad";
 VAR_26->id.bustype = VAR_13;
 VAR_26->id.vendor = VAR_14;
 VAR_26->id.product = VAR_24->product_id;
 FUNC_6(VAR_26, VAR_24);

 VAR_29 = FUNC_4(VAR_26, VAR_17,
        VAR_21 | VAR_20);
 if (VAR_29) {
  FUNC_1(VAR_25, "failed to initialize MT slots: %d\n", VAR_29);
  return VAR_29;
 }

 FUNC_0(VAR_19, VAR_26->evbit);
 FUNC_0(VAR_23, VAR_26->propbit);
 if (VAR_24->clickpad) {
  FUNC_0(VAR_22, VAR_26->propbit);
 } else {
  FUNC_0(VAR_12, VAR_26->keybit);
  if (VAR_24->middle_button)
   FUNC_0(VAR_11, VAR_26->keybit);
 }
 FUNC_0(VAR_10, VAR_26->keybit);


 FUNC_5(VAR_26, VAR_8, 0, VAR_24->max_x, 0, 0);
 FUNC_5(VAR_26, VAR_9, 0, VAR_24->max_y, 0, 0);
 FUNC_3(VAR_26, VAR_8, VAR_24->x_res);
 FUNC_3(VAR_26, VAR_9, VAR_24->y_res);
 FUNC_5(VAR_26, VAR_6, 0, VAR_18, 0, 0);
 FUNC_5(VAR_26, VAR_7, 0, VAR_16, 0, 0);
 FUNC_5(VAR_26, VAR_0, 0, 1, 0, 0);


 FUNC_5(VAR_26, VAR_1, 0, VAR_24->max_x, 0, 0);
 FUNC_5(VAR_26, VAR_2, 0, VAR_24->max_y, 0, 0);
 FUNC_3(VAR_26, VAR_1, VAR_24->x_res);
 FUNC_3(VAR_26, VAR_2, VAR_24->y_res);
 FUNC_5(VAR_26, VAR_3, 0,
        VAR_18, 0, 0);
 FUNC_5(VAR_26, VAR_4, 0,
        VAR_16 * VAR_27, 0, 0);
 FUNC_5(VAR_26, VAR_5, 0,
        VAR_16 * VAR_28, 0, 0);

 VAR_24->input = VAR_26;

 return 0;
}
