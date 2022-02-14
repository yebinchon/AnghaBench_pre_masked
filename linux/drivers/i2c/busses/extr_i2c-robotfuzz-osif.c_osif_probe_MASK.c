
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_10__ {int name; struct osif_priv* algo_data; int * algo; int class; int owner; } ;
struct osif_priv {TYPE_3__* usb_dev; TYPE_5__ adapter; struct usb_interface* interface; } ;
struct TYPE_7__ {int bcdDevice; } ;
struct TYPE_9__ {int devnum; TYPE_2__* bus; TYPE_1__ descriptor; } ;
struct TYPE_8__ {int busnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,int,int,int) ;
 struct osif_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_5__*,int ,int,int ,int *,int ) ;
 int FUNC_7 (int ,int,char*,int,int) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct usb_interface*,struct osif_priv*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_6,
        const struct usb_device_id *VAR_7)
{
 int VAR_8;
 struct osif_priv *VAR_9;
 u16 VAR_10;

 VAR_9 = FUNC_2(&VAR_6->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->usb_dev = FUNC_8(FUNC_4(VAR_6));
 VAR_9->interface = VAR_6;

 FUNC_10(VAR_6, VAR_9);

 VAR_9->adapter.owner = VAR_4;
 VAR_9->adapter.class = VAR_2;
 VAR_9->adapter.algo = &VAR_5;
 VAR_9->adapter.algo_data = VAR_9;
 FUNC_7(VAR_9->adapter.name, sizeof(VAR_9->adapter.name),
   "OSIF at bus %03d device %03d",
   VAR_9->usb_dev->bus->busnum, VAR_9->usb_dev->devnum);





 VAR_8 = FUNC_6(&VAR_9->adapter, VAR_3, 52, 0,
       ((void*)0), 0);
 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "failure sending bit rate");
  FUNC_9(VAR_9->usb_dev);
  return VAR_8;
 }

 FUNC_3(&(VAR_9->adapter));

 VAR_10 = FUNC_5(VAR_9->usb_dev->descriptor.bcdDevice);
 FUNC_1(&VAR_6->dev,
   "version %x.%02x found at bus %03d address %03d",
   VAR_10 >> 8, VAR_10 & 0xff,
   VAR_9->usb_dev->bus->busnum, VAR_9->usb_dev->devnum);

 return 0;
}
