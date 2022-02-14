
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_12__ {int * parent; } ;
struct TYPE_10__ {TYPE_6__ dev; int name; struct i2c_tiny_usb* algo_data; int * algo; int class; int owner; } ;
struct i2c_tiny_usb {TYPE_3__ adapter; struct usb_interface* interface; TYPE_4__* usb_dev; } ;
struct TYPE_8__ {int bcdDevice; } ;
struct TYPE_11__ {int devnum; TYPE_2__* bus; TYPE_1__ descriptor; } ;
struct TYPE_9__ {int busnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_6__*,char*,...) ;
 int FUNC_2 (TYPE_6__*,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct i2c_tiny_usb*) ;
 int FUNC_5 (struct usb_interface*) ;
 struct i2c_tiny_usb* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,char*,int,int) ;
 int VAR_7 ;
 TYPE_4__* FUNC_9 (int ) ;
 int FUNC_10 (struct usb_interface*,struct i2c_tiny_usb*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_8,
         const struct usb_device_id *VAR_9)
{
 struct i2c_tiny_usb *VAR_10;
 int VAR_11 = -VAR_2;
 u16 VAR_12;

 FUNC_0(&VAR_8->dev, "probing usb device\n");


 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(&VAR_8->dev, "Out of memory\n");
  goto error;
 }

 VAR_10->usb_dev = FUNC_9(FUNC_5(VAR_8));
 VAR_10->interface = VAR_8;


 FUNC_10(VAR_8, VAR_10);

 VAR_12 = FUNC_7(VAR_10->usb_dev->descriptor.bcdDevice);
 FUNC_2(&VAR_8->dev,
   "version %x.%02x found at bus %03d address %03d\n",
   VAR_12 >> 8, VAR_12 & 0xff,
   VAR_10->usb_dev->bus->busnum, VAR_10->usb_dev->devnum);


 VAR_10->adapter.owner = VAR_5;
 VAR_10->adapter.class = VAR_4;
 VAR_10->adapter.algo = &VAR_7;
 VAR_10->adapter.algo_data = VAR_10;
 FUNC_8(VAR_10->adapter.name, sizeof(VAR_10->adapter.name),
   "i2c-tiny-usb at bus %03d device %03d",
   VAR_10->usb_dev->bus->busnum, VAR_10->usb_dev->devnum);

 if (FUNC_11(&VAR_10->adapter, VAR_0, VAR_6, 0, ((void*)0), 0) != 0) {
  FUNC_1(&VAR_10->adapter.dev,
   "failure setting delay to %dus\n", VAR_6);
  VAR_11 = -VAR_1;
  goto error;
 }

 VAR_10->adapter.dev.parent = &VAR_10->interface->dev;


 FUNC_3(&VAR_10->adapter);


 FUNC_2(&VAR_10->adapter.dev, "connected i2c-tiny-usb device\n");

 return 0;

 error:
 if (VAR_10)
  FUNC_4(VAR_10);

 return VAR_11;
}
