
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device* parent; } ;
struct TYPE_4__ {int version; scalar_t__ product; int bustype; } ;
struct input_dev {int propbit; int keybit; int evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int phys; int name; } ;
struct device {int dummy; } ;
struct cyapa {int physical_size_x; int physical_size_y; int max_abs_x; int max_abs_y; int max_z; scalar_t__ gen; int btn_capability; struct input_dev* input; TYPE_3__* client; int phys; } ;
struct TYPE_6__ {struct device dev; } ;


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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct input_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct input_dev*,int ,int) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_7 (struct input_dev*,struct cyapa*) ;

__attribute__((used)) static int FUNC_8(struct cyapa *VAR_28)
{
 struct device *VAR_29 = &VAR_28->client->dev;
 struct input_dev *VAR_30;
 int VAR_31;

 if (!VAR_28->physical_size_x || !VAR_28->physical_size_y)
  return -VAR_20;

 VAR_30 = FUNC_2(VAR_29);
 if (!VAR_30) {
  FUNC_1(VAR_29, "failed to allocate memory for input device.\n");
  return -VAR_21;
 }

 VAR_30->name = VAR_19;
 VAR_30->phys = VAR_28->phys;
 VAR_30->id.bustype = VAR_12;
 VAR_30->id.version = 1;
 VAR_30->id.product = 0;
 VAR_30->dev.parent = &VAR_28->client->dev;

 VAR_30->open = VAR_27;
 VAR_30->close = VAR_26;

 FUNC_7(VAR_30, VAR_28);

 FUNC_0(VAR_22, VAR_30->evbit);


 FUNC_6(VAR_30, VAR_2, 0, VAR_28->max_abs_x, 0,
        0);
 FUNC_6(VAR_30, VAR_3, 0, VAR_28->max_abs_y, 0,
        0);
 FUNC_6(VAR_30, VAR_4, 0, VAR_28->max_z, 0, 0);
 if (VAR_28->gen > VAR_16) {
  FUNC_6(VAR_30, VAR_5, 0, 255, 0, 0);
  FUNC_6(VAR_30, VAR_6, 0, 255, 0, 0);
  FUNC_6(VAR_30, VAR_1,
    -127, 127, 0, 0);
 }
 if (VAR_28->gen >= VAR_17) {
  FUNC_6(VAR_30, VAR_7, 0, 255, 0, 0);
  FUNC_6(VAR_30, VAR_8, 0, 255, 0, 0);
  FUNC_6(VAR_30, VAR_0, 0, 1, 0, 0);
 }

 FUNC_3(VAR_30, VAR_2,
     VAR_28->max_abs_x / VAR_28->physical_size_x);
 FUNC_3(VAR_30, VAR_3,
     VAR_28->max_abs_y / VAR_28->physical_size_y);

 if (VAR_28->btn_capability & VAR_13)
  FUNC_0(VAR_9, VAR_30->keybit);
 if (VAR_28->btn_capability & VAR_14)
  FUNC_0(VAR_10, VAR_30->keybit);
 if (VAR_28->btn_capability & VAR_15)
  FUNC_0(VAR_11, VAR_30->keybit);

 if (VAR_28->btn_capability == VAR_13)
  FUNC_0(VAR_25, VAR_30->propbit);


 VAR_31 = FUNC_4(VAR_30, VAR_18,
        VAR_24 | VAR_23);
 if (VAR_31) {
  FUNC_1(VAR_29, "failed to initialize MT slots: %d\n", VAR_31);
  return VAR_31;
 }


 VAR_31 = FUNC_5(VAR_30);
 if (VAR_31) {
  FUNC_1(VAR_29, "failed to register input device: %d\n", VAR_31);
  return VAR_31;
 }

 VAR_28->input = VAR_30;
 return 0;
}
