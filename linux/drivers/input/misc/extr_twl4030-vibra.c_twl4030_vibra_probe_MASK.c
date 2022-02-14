
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct vibra_info {TYPE_3__* input_dev; int play_work; int coexist; TYPE_7__* dev; } ;
struct twl4030_vibra_data {int dummy; } ;
struct TYPE_16__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_7__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_14__ {int version; } ;
struct TYPE_15__ {char* name; int ffbit; int close; TYPE_2__ id; } ;
struct TYPE_13__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_7__*,char*) ;
 int FUNC_3 (TYPE_7__*,char*) ;
 struct twl4030_vibra_data* FUNC_4 (TYPE_7__*) ;
 TYPE_3__* FUNC_5 (TYPE_7__*) ;
 struct vibra_info* FUNC_6 (TYPE_7__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,struct vibra_info*) ;
 int FUNC_11 (struct platform_device*,struct vibra_info*) ;
 int FUNC_12 (struct twl4030_vibra_data*,struct device_node*) ;
 int VAR_4 ;
 int FUNC_13 () ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct twl4030_vibra_data *VAR_8 = FUNC_4(&VAR_7->dev);
 struct device_node *VAR_9 = VAR_7->dev.parent->of_node;
 struct vibra_info *VAR_10;
 int VAR_11;

 if (!VAR_8 && !VAR_9) {
  FUNC_2(&VAR_7->dev, "platform_data not available\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = &VAR_7->dev;
 VAR_10->coexist = FUNC_12(VAR_8, VAR_9);
 FUNC_0(&VAR_10->play_work, VAR_6);

 VAR_10->input_dev = FUNC_5(&VAR_7->dev);
 if (VAR_10->input_dev == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "couldn't allocate input device\n");
  return -VAR_1;
 }

 FUNC_10(VAR_10->input_dev, VAR_10);

 VAR_10->input_dev->name = "twl4030:vibrator";
 VAR_10->input_dev->id.version = 1;
 VAR_10->input_dev->close = VAR_4;
 FUNC_1(VAR_2, VAR_10->input_dev->ffbit);

 VAR_11 = FUNC_7(VAR_10->input_dev, ((void*)0), VAR_5);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "couldn't register vibrator to FF\n");
  return VAR_11;
 }

 VAR_11 = FUNC_9(VAR_10->input_dev);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_7->dev, "couldn't register input device\n");
  goto err_iff;
 }

 FUNC_13();

 FUNC_11(VAR_7, VAR_10);
 return 0;

err_iff:
 FUNC_8(VAR_10->input_dev);
 return VAR_11;
}
