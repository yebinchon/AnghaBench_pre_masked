
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int notifier_call; } ;
struct cros_ec_keyb {struct device* dev; TYPE_1__ notifier; struct cros_ec_device* ec; } ;
struct cros_ec_device {int event_notifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (struct cros_ec_keyb*) ;
 int FUNC_2 (struct cros_ec_keyb*) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,char*,int) ;
 struct cros_ec_device* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,struct cros_ec_keyb*) ;
 int FUNC_6 (struct device*,int) ;
 struct cros_ec_keyb* FUNC_7 (struct device*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct cros_ec_device *VAR_5 = FUNC_4(VAR_4->dev.parent);
 struct device *VAR_6 = &VAR_4->dev;
 struct cros_ec_keyb *VAR_7;
 int VAR_8;

 if (!VAR_6->of_node)
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->ec = VAR_5;
 VAR_7->dev = VAR_6;
 FUNC_5(VAR_6, VAR_7);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_6, "cannot register matrix inputs: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_6, "cannot register non-matrix inputs: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7->notifier.notifier_call = VAR_3;
 VAR_8 = FUNC_0(&VAR_7->ec->event_notifier,
            &VAR_7->notifier);
 if (VAR_8) {
  FUNC_3(VAR_6, "cannot register notifier: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_6(VAR_7->dev, 1);
 return 0;
}
