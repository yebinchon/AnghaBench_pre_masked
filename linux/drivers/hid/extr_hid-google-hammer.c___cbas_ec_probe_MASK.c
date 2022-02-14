
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_7__ {int bustype; } ;
struct input_dev {char* name; TYPE_1__ id; } ;
struct cros_ec_device {int event_notifier; } ;
struct TYPE_10__ {int notifier_call; } ;
struct TYPE_9__ {int base_present; TYPE_6__ notifier; TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_6__*) ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cros_ec_device*,int,int*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 struct cros_ec_device* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 struct input_dev* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int) ;
 int FUNC_9 (struct input_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_7)
{
 struct cros_ec_device *VAR_8 = FUNC_4(VAR_7->dev.parent);
 struct input_dev *VAR_9;
 bool VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (!VAR_10)
  return -VAR_2;

 VAR_9 = FUNC_6(&VAR_7->dev);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->name = "Whiskers Tablet Mode Switch";
 VAR_9->id.bustype = VAR_0;

 FUNC_9(VAR_9, VAR_3, VAR_4);

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "cannot register input device: %d\n",
   VAR_11);
  return VAR_11;
 }


 VAR_11 = FUNC_1(VAR_8, 1, &VAR_5.base_present);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "cannot query base state: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_8(VAR_9, VAR_4, !VAR_5.base_present);

 FUNC_2(VAR_9);

 VAR_5.dev = &VAR_7->dev;
 VAR_5.notifier.notifier_call = VAR_6;
 VAR_11 = FUNC_0(&VAR_8->event_notifier,
       &VAR_5.notifier);
 if (VAR_11) {
  FUNC_3(&VAR_7->dev, "cannot register notifier: %d\n", VAR_11);
  FUNC_2(((void*)0));
  return VAR_11;
 }

 FUNC_5(&VAR_7->dev, 1);
 return 0;
}
