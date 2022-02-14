
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int version; int product; int vendor; int bustype; } ;
struct rc_dev {int rx_resolution; int timeout; int map_name; int driver_name; TYPE_2__ dev; TYPE_1__ input_id; int input_phys; int device_name; int close; int open; int allowed_protocols; struct picolcd_data* priv; } ;
struct picolcd_data {struct rc_dev* rc_dev; TYPE_3__* hdev; } ;
struct hid_report {int dummy; } ;
struct TYPE_6__ {int dev; int version; int product; int vendor; int bus; int phys; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct rc_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct rc_dev*) ;
 int FUNC_4 (struct rc_dev*) ;

int FUNC_5(struct picolcd_data *VAR_7, struct hid_report *VAR_8)
{
 struct rc_dev *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_2(VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->priv = VAR_7;
 VAR_9->allowed_protocols = VAR_4;
 VAR_9->open = VAR_6;
 VAR_9->close = VAR_5;
 VAR_9->device_name = VAR_7->hdev->name;
 VAR_9->input_phys = VAR_7->hdev->phys;
 VAR_9->input_id.bustype = VAR_7->hdev->bus;
 VAR_9->input_id.vendor = VAR_7->hdev->vendor;
 VAR_9->input_id.product = VAR_7->hdev->product;
 VAR_9->input_id.version = VAR_7->hdev->version;
 VAR_9->dev.parent = &VAR_7->hdev->dev;
 VAR_9->driver_name = VAR_1;
 VAR_9->map_name = VAR_3;
 VAR_9->timeout = FUNC_0(100);
 VAR_9->rx_resolution = FUNC_1(1);

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10)
  goto err;
 VAR_7->rc_dev = VAR_9;
 return 0;

err:
 FUNC_3(VAR_9);
 return VAR_10;
}
