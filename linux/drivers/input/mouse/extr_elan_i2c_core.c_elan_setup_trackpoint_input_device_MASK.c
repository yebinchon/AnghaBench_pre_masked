
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int product; int vendor; int bustype; } ;
struct input_dev {char* name; int propbit; TYPE_2__ id; } ;
struct elan_tp_data {struct input_dev* tp_input; int product_id; TYPE_1__* client; } ;
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
 int FUNC_0 (int ,int ) ;
 struct input_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct input_dev*,int ,int ) ;
 int FUNC_3 (struct input_dev*,struct elan_tp_data*) ;

__attribute__((used)) static int FUNC_4(struct elan_tp_data *VAR_12)
{
 struct device *VAR_13 = &VAR_12->client->dev;
 struct input_dev *VAR_14;

 VAR_14 = FUNC_1(VAR_13);
 if (!VAR_14)
  return -VAR_5;

 VAR_14->name = "Elan TrackPoint";
 VAR_14->id.bustype = VAR_3;
 VAR_14->id.vendor = VAR_4;
 VAR_14->id.product = VAR_12->product_id;
 FUNC_3(VAR_14, VAR_12);

 FUNC_2(VAR_14, VAR_7, VAR_10);
 FUNC_2(VAR_14, VAR_7, VAR_11);
 FUNC_2(VAR_14, VAR_6, VAR_0);
 FUNC_2(VAR_14, VAR_6, VAR_2);
 FUNC_2(VAR_14, VAR_6, VAR_1);

 FUNC_0(VAR_8, VAR_14->propbit);
 FUNC_0(VAR_9, VAR_14->propbit);

 VAR_12->tp_input = VAR_14;

 return 0;
}
