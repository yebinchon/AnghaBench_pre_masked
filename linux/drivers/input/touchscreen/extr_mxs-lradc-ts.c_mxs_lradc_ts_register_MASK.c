
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxs_lradc_ts {struct input_dev* ts_input; struct device* dev; } ;
struct TYPE_2__ {int bustype; } ;
struct input_dev {char* name; int propbit; int close; int open; TYPE_1__ id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 struct input_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct input_dev*,int ,int ) ;
 int FUNC_5 (struct input_dev*,struct mxs_lradc_ts*) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct mxs_lradc_ts *VAR_11)
{
 struct input_dev *VAR_12;
 struct device *VAR_13 = VAR_11->dev;

 VAR_12 = FUNC_1(VAR_13);
 if (!VAR_12)
  return -VAR_5;

 VAR_12->name = "mxs-lradc-ts";
 VAR_12->id.bustype = VAR_4;
 VAR_12->open = VAR_10;
 VAR_12->close = VAR_9;

 FUNC_0(VAR_7, VAR_12->propbit);
 FUNC_4(VAR_12, VAR_6, VAR_3);
 FUNC_3(VAR_12, VAR_1, 0, VAR_8, 0, 0);
 FUNC_3(VAR_12, VAR_2, 0, VAR_8, 0, 0);
 FUNC_3(VAR_12, VAR_0, 0, VAR_8,
        0, 0);

 VAR_11->ts_input = VAR_12;
 FUNC_5(VAR_12, VAR_11);

 return FUNC_2(VAR_12);
}
