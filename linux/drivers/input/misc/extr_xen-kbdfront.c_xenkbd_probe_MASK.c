
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenkbd_info {int irq; int gref; int mtouch_cur_contact_id; struct input_dev* mtouch; struct xenbus_device* xbdev; int phys; struct input_dev* ptr; struct input_dev* kbd; void* page; } ;
struct xenbus_device_id {int dummy; } ;
struct xenbus_device {char* nodename; int otherend; int dev; } ;
struct TYPE_2__ {int vendor; int product; void* bustype; } ;
struct input_dev {char* name; TYPE_1__ id; int phys; int keybit; int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct xenkbd_info*) ;
 struct input_dev* FUNC_3 () ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int,int ) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 struct xenkbd_info* FUNC_9 (int,int) ;
 int FUNC_10 (char*) ;
 int* VAR_39 ;
 int FUNC_11 (int ,int,char*,char*) ;
 int FUNC_12 (struct xenbus_device*,int,char*) ;
 void* FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,char*,int ,char*) ;
 int FUNC_15 (struct xenbus_device*,struct xenkbd_info*) ;
 int FUNC_16 (struct xenbus_device*) ;

__attribute__((used)) static int FUNC_17(struct xenbus_device *VAR_40,
      const struct xenbus_device_id *VAR_41)
{
 int VAR_42, VAR_43;
 bool VAR_44, VAR_45, VAR_46;
 struct xenkbd_info *VAR_47;
 struct input_dev *VAR_48, *VAR_49, *VAR_50;

 VAR_47 = FUNC_9(sizeof(*VAR_47), VAR_13);
 if (!VAR_47) {
  FUNC_12(VAR_40, -VAR_8, "allocating info structure");
  return -VAR_8;
 }
 FUNC_2(&VAR_40->dev, VAR_47);
 VAR_47->xbdev = VAR_40;
 VAR_47->irq = -1;
 VAR_47->gref = -1;
 FUNC_11(VAR_47->phys, sizeof(VAR_47->phys), "xenbus/%s", VAR_40->nodename);

 VAR_47->page = (void *)FUNC_0(VAR_13 | VAR_38);
 if (!VAR_47->page)
  goto error_nomem;





 VAR_45 = !FUNC_13(VAR_40->otherend,
      VAR_28, 0);

 VAR_46 = !FUNC_13(VAR_40->otherend,
      VAR_29, 0);


 VAR_44 = FUNC_13(VAR_40->otherend,
        VAR_30, 0);
 if (VAR_44) {
  VAR_42 = FUNC_14(VAR_24, VAR_40->nodename,
       VAR_36, "1");
  if (VAR_42) {
   FUNC_10("xenkbd: can't request multi-touch");
   VAR_44 = 0;
  }
 }


 if (VAR_45) {
  VAR_48 = FUNC_3();
  if (!VAR_48)
   goto error_nomem;
  VAR_48->name = "Xen Virtual Keyboard";
  VAR_48->phys = VAR_47->phys;
  VAR_48->id.bustype = VAR_7;
  VAR_48->id.vendor = 0x5853;
  VAR_48->id.product = 0xffff;

  FUNC_1(VAR_11, VAR_48->evbit);
  for (VAR_43 = VAR_15; VAR_43 < VAR_18; VAR_43++)
   FUNC_1(VAR_43, VAR_48->keybit);
  for (VAR_43 = VAR_17; VAR_43 < VAR_16; VAR_43++)
   FUNC_1(VAR_43, VAR_48->keybit);

  VAR_42 = FUNC_6(VAR_48);
  if (VAR_42) {
   FUNC_4(VAR_48);
   FUNC_12(VAR_40, VAR_42,
      "input_register_device(kbd)");
   goto error;
  }
  VAR_47->kbd = VAR_48;
 }


 if (VAR_46) {
  unsigned int VAR_51;


  VAR_51 = FUNC_13(VAR_40->otherend,
        VAR_27, 0);
  VAR_39[VAR_19] = FUNC_13(VAR_40->otherend,
         VAR_37,
         VAR_39[VAR_19]);
  VAR_39[VAR_20] = FUNC_13(VAR_40->otherend,
         VAR_31,
         VAR_39[VAR_20]);
  if (VAR_51) {
   VAR_42 = FUNC_14(VAR_24, VAR_40->nodename,
        VAR_35, "1");
   if (VAR_42) {
    FUNC_10("xenkbd: can't request abs-pointer\n");
    VAR_51 = 0;
   }
  }

  VAR_49 = FUNC_3();
  if (!VAR_49)
   goto error_nomem;
  VAR_49->name = "Xen Virtual Pointer";
  VAR_49->phys = VAR_47->phys;
  VAR_49->id.bustype = VAR_7;
  VAR_49->id.vendor = 0x5853;
  VAR_49->id.product = 0xfffe;

  if (VAR_51) {
   FUNC_1(VAR_10, VAR_49->evbit);
   FUNC_7(VAR_49, VAR_3, 0,
          VAR_39[VAR_19], 0, 0);
   FUNC_7(VAR_49, VAR_4, 0,
          VAR_39[VAR_20], 0, 0);
  } else {
   FUNC_8(VAR_49, VAR_12, VAR_22);
   FUNC_8(VAR_49, VAR_12, VAR_23);
  }
  FUNC_8(VAR_49, VAR_12, VAR_21);

  FUNC_1(VAR_11, VAR_49->evbit);
  for (VAR_43 = VAR_5; VAR_43 <= VAR_6; VAR_43++)
   FUNC_1(VAR_43, VAR_49->keybit);

  VAR_42 = FUNC_6(VAR_49);
  if (VAR_42) {
   FUNC_4(VAR_49);
   FUNC_12(VAR_40, VAR_42,
      "input_register_device(ptr)");
   goto error;
  }
  VAR_47->ptr = VAR_49;
 }


 if (VAR_44) {
  int VAR_52, VAR_53, VAR_54;

  VAR_50 = FUNC_3();
  if (!VAR_50)
   goto error_nomem;

  VAR_52 = FUNC_13(VAR_47->xbdev->otherend,
      VAR_33,
      1);
  VAR_53 = FUNC_13(VAR_47->xbdev->otherend,
          VAR_34,
          VAR_26);
  VAR_54 = FUNC_13(VAR_47->xbdev->otherend,
           VAR_32,
           VAR_25);

  VAR_50->name = "Xen Virtual Multi-touch";
  VAR_50->phys = VAR_47->phys;
  VAR_50->id.bustype = VAR_7;
  VAR_50->id.vendor = 0x5853;
  VAR_50->id.product = 0xfffd;

  FUNC_7(VAR_50, VAR_2,
         0, 255, 0, 0);
  FUNC_7(VAR_50, VAR_0,
         0, VAR_53, 0, 0);
  FUNC_7(VAR_50, VAR_1,
         0, VAR_54, 0, 0);

  VAR_42 = FUNC_5(VAR_50, VAR_52, VAR_14);
  if (VAR_42) {
   FUNC_4(VAR_50);
   FUNC_12(VAR_47->xbdev, VAR_42,
      "input_mt_init_slots");
   goto error;
  }

  VAR_42 = FUNC_6(VAR_50);
  if (VAR_42) {
   FUNC_4(VAR_50);
   FUNC_12(VAR_47->xbdev, VAR_42,
      "input_register_device(mtouch)");
   goto error;
  }
  VAR_47->mtouch_cur_contact_id = -1;
  VAR_47->mtouch = VAR_50;
 }

 if (!(VAR_45 || VAR_46 || VAR_44)) {
  VAR_42 = -VAR_9;
  goto error;
 }

 VAR_42 = FUNC_15(VAR_40, VAR_47);
 if (VAR_42 < 0)
  goto error;

 return 0;

 error_nomem:
 VAR_42 = -VAR_8;
 FUNC_12(VAR_40, VAR_42, "allocating device memory");
 error:
 FUNC_16(VAR_40);
 return VAR_42;
}
