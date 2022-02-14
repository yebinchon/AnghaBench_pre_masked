
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_3__ {int version; scalar_t__ product; int bustype; } ;
struct input_dev {char const* phys; TYPE_2__ dev; TYPE_1__ id; int evbit; int name; } ;
struct device {int of_node; } ;
struct cros_ec_keyb {struct input_dev* idev; int cols; int row_shift; int rows; int ghost_filter; void* old_kb_state; void* valid_keys; struct device* dev; struct cros_ec_device* ec; } ;
struct cros_ec_device {int phys_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cros_ec_keyb*) ;
 int FUNC_2 (struct device*,char*) ;
 struct input_dev* FUNC_3 (struct device*) ;
 char* FUNC_4 (struct device*,int ,char*,int ) ;
 void* FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int FUNC_9 (struct input_dev*,struct cros_ec_keyb*) ;
 int FUNC_10 (int *,int *,int ,int ,int *,struct input_dev*) ;
 int FUNC_11 (struct device*,int *,int *) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct cros_ec_keyb *VAR_7)
{
 struct cros_ec_device *VAR_8 = VAR_7->ec;
 struct device *VAR_9 = VAR_7->dev;
 struct input_dev *VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_11(VAR_9, &VAR_7->rows, &VAR_7->cols);
 if (VAR_12)
  return VAR_12;

 VAR_7->valid_keys = FUNC_5(VAR_9, VAR_7->cols, VAR_5);
 if (!VAR_7->valid_keys)
  return -VAR_2;

 VAR_7->old_kb_state = FUNC_5(VAR_9, VAR_7->cols, VAR_5);
 if (!VAR_7->old_kb_state)
  return -VAR_2;





 VAR_11 = FUNC_4(VAR_9, VAR_5, "%s/input0", VAR_8->phys_name);
 if (!VAR_11)
  return -VAR_2;

 VAR_10 = FUNC_3(VAR_9);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->name = VAR_1;
 VAR_10->phys = VAR_11;
 FUNC_0(VAR_4, VAR_10->evbit);

 VAR_10->id.bustype = VAR_0;
 VAR_10->id.version = 1;
 VAR_10->id.product = 0;
 VAR_10->dev.parent = VAR_9;

 VAR_7->ghost_filter = FUNC_12(VAR_9->of_node,
     "google,needs-ghost-filter");

 VAR_12 = FUNC_10(((void*)0), ((void*)0), VAR_7->rows, VAR_7->cols,
      ((void*)0), VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_9, "cannot build key matrix\n");
  return VAR_12;
 }

 VAR_7->row_shift = FUNC_6(VAR_7->cols);

 FUNC_8(VAR_10, VAR_3, VAR_6);
 FUNC_9(VAR_10, VAR_7);
 VAR_7->idev = VAR_10;
 FUNC_1(VAR_7);

 VAR_12 = FUNC_7(VAR_7->idev);
 if (VAR_12) {
  FUNC_2(VAR_9, "cannot register input device\n");
  return VAR_12;
 }

 return 0;
}
