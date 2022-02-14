
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_xpad {scalar_t__ xtype; int mapping; int input_created; struct input_dev* dev; TYPE_2__* intf; int udev; int phys; int name; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_6__ {int product; } ;
struct input_dev {int close; int open; TYPE_1__ dev; TYPE_3__ id; int phys; int name; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct input_dev* FUNC_0 () ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_5 (struct input_dev*,struct usb_xpad*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 scalar_t__* VAR_8 ;
 scalar_t__* VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__* VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__* VAR_14 ;
 int VAR_15 ;
 scalar_t__* VAR_16 ;
 int FUNC_7 (struct usb_xpad*) ;
 int FUNC_8 (struct usb_xpad*) ;
 int FUNC_9 (struct usb_xpad*) ;
 int VAR_17 ;
 int FUNC_10 (struct input_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct usb_xpad *VAR_18)
{
 struct input_dev *VAR_19;
 int VAR_20, VAR_21;

 VAR_19 = FUNC_0();
 if (!VAR_19)
  return -VAR_0;

 VAR_18->dev = VAR_19;
 VAR_19->name = VAR_18->name;
 VAR_19->phys = VAR_18->phys;
 FUNC_6(VAR_18->udev, &VAR_19->id);

 if (VAR_18->xtype == VAR_6) {

  VAR_19->id.product = 0x02a1;
 }

 VAR_19->dev.parent = &VAR_18->intf->dev;

 FUNC_5(VAR_19, VAR_18);

 if (VAR_18->xtype != VAR_6) {
  VAR_19->open = VAR_17;
  VAR_19->close = VAR_15;
 }

 if (!(VAR_18->mapping & VAR_3)) {

  for (VAR_20 = 0; VAR_9[VAR_20] >= 0; VAR_20++)
   FUNC_10(VAR_19, VAR_9[VAR_20]);
 }


 for (VAR_20 = 0; VAR_16[VAR_20] >= 0; VAR_20++)
  FUNC_4(VAR_19, VAR_1, VAR_16[VAR_20]);


 if (VAR_18->xtype == VAR_5 || VAR_18->xtype == VAR_6 ||
     VAR_18->xtype == VAR_7) {
  for (VAR_20 = 0; VAR_8[VAR_20] >= 0; VAR_20++)
   FUNC_4(VAR_19, VAR_1, VAR_8[VAR_20]);
 } else {
  for (VAR_20 = 0; VAR_12[VAR_20] >= 0; VAR_20++)
   FUNC_4(VAR_19, VAR_1, VAR_12[VAR_20]);
 }

 if (VAR_18->mapping & VAR_2) {
  for (VAR_20 = 0; VAR_13[VAR_20] >= 0; VAR_20++)
   FUNC_4(VAR_19, VAR_1,
          VAR_13[VAR_20]);
 }







 if (!(VAR_18->mapping & VAR_2) ||
     VAR_18->xtype == VAR_6) {
  for (VAR_20 = 0; VAR_10[VAR_20] >= 0; VAR_20++)
   FUNC_10(VAR_19, VAR_10[VAR_20]);
 }

 if (VAR_18->mapping & VAR_4) {
  for (VAR_20 = 0; VAR_14[VAR_20] >= 0; VAR_20++)
   FUNC_4(VAR_19, VAR_1,
          VAR_14[VAR_20]);
 } else {
  for (VAR_20 = 0; VAR_11[VAR_20] >= 0; VAR_20++)
   FUNC_10(VAR_19, VAR_11[VAR_20]);
 }

 VAR_21 = FUNC_7(VAR_18);
 if (VAR_21)
  goto err_free_input;

 VAR_21 = FUNC_9(VAR_18);
 if (VAR_21)
  goto err_destroy_ff;

 VAR_21 = FUNC_3(VAR_18->dev);
 if (VAR_21)
  goto err_disconnect_led;

 VAR_18->input_created = 1;
 return 0;

err_disconnect_led:
 FUNC_8(VAR_18);
err_destroy_ff:
 FUNC_1(VAR_19);
err_free_input:
 FUNC_2(VAR_19);
 return VAR_21;
}
