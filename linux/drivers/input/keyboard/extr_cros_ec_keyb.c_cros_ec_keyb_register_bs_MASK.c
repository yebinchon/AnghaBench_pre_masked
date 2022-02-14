
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ec_response_get_next_data {int switches; int buttons; } ;
typedef int u32 ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int version; scalar_t__ product; int bustype; } ;
struct input_dev {char* name; char const* phys; TYPE_2__ dev; TYPE_1__ id; int evbit; } ;
struct device {int dummy; } ;
struct cros_ec_keyb {struct input_dev* bs_idev; struct device* dev; struct cros_ec_device* ec; } ;
struct cros_ec_device {int phys_name; } ;
struct cros_ec_bs_map {scalar_t__ ev_type; int code; int bit; } ;


 int FUNC_0 (struct cros_ec_bs_map*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 struct cros_ec_bs_map* VAR_9 ;
 int FUNC_3 (struct cros_ec_device*,int ,int ,union ec_response_get_next_data*,int) ;
 int FUNC_4 (struct cros_ec_keyb*) ;
 int FUNC_5 (struct device*,char*) ;
 struct input_dev* FUNC_6 (struct device*) ;
 char* FUNC_7 (struct device*,int ,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*,scalar_t__,int ) ;
 int FUNC_11 (struct input_dev*,struct cros_ec_keyb*) ;

__attribute__((used)) static int FUNC_12(struct cros_ec_keyb *VAR_10)
{
 struct cros_ec_device *VAR_11 = VAR_10->ec;
 struct device *VAR_12 = VAR_10->dev;
 struct input_dev *VAR_13;
 union ec_response_get_next_data VAR_14 = {};
 const char *VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_3(VAR_11, VAR_3,
    VAR_1, &VAR_14,
    sizeof(VAR_14.buttons));
 if (VAR_18)
  return VAR_18;
 VAR_16 = FUNC_8(&VAR_14.buttons);

 VAR_18 = FUNC_3(VAR_11, VAR_3,
    VAR_2, &VAR_14,
    sizeof(VAR_14.switches));
 if (VAR_18)
  return VAR_18;
 VAR_17 = FUNC_8(&VAR_14.switches);

 if (!VAR_16 && !VAR_17)
  return 0;






 VAR_15 = FUNC_7(VAR_12, VAR_8, "%s/input1", VAR_11->phys_name);
 if (!VAR_15)
  return -VAR_4;

 VAR_13 = FUNC_6(VAR_12);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->name = "cros_ec_buttons";
 VAR_13->phys = VAR_15;
 FUNC_2(VAR_6, VAR_13->evbit);

 VAR_13->id.bustype = VAR_0;
 VAR_13->id.version = 1;
 VAR_13->id.product = 0;
 VAR_13->dev.parent = VAR_12;

 FUNC_11(VAR_13, VAR_10);
 VAR_10->bs_idev = VAR_13;

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_9); VAR_19++) {
  const struct cros_ec_bs_map *VAR_20 = &VAR_9[VAR_19];

  if ((VAR_20->ev_type == VAR_5 && (VAR_16 & FUNC_1(VAR_20->bit))) ||
      (VAR_20->ev_type == VAR_7 && (VAR_17 & FUNC_1(VAR_20->bit))))
   FUNC_10(VAR_13, VAR_20->ev_type, VAR_20->code);
 }

 VAR_18 = FUNC_4(VAR_10);
 if (VAR_18) {
  FUNC_5(VAR_12, "cannot query switches\n");
  return VAR_18;
 }

 VAR_18 = FUNC_9(VAR_10->bs_idev);
 if (VAR_18) {
  FUNC_5(VAR_12, "cannot register input device\n");
  return VAR_18;
 }

 return 0;
}
