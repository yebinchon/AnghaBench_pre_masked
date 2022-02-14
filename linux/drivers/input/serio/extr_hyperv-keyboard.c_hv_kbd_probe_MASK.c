
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int * parent; } ;
struct serio {struct serio* hv_serio; int stop; int start; int phys; int name; struct serio* port_data; TYPE_2__ id; TYPE_1__ dev; int wait_event; int lock; struct hv_device* hv_dev; } ;
struct hv_vmbus_device_id {int dummy; } ;
struct hv_kbd_dev {struct hv_kbd_dev* hv_serio; int stop; int start; int phys; int name; struct hv_kbd_dev* port_data; TYPE_2__ id; TYPE_1__ dev; int wait_event; int lock; struct hv_device* hv_dev; } ;
struct hv_device {int channel; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct hv_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct hv_device*,struct serio*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct serio*) ;
 struct serio* FUNC_6 (int,int ) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int *,int ,int ,struct hv_device*) ;

__attribute__((used)) static int FUNC_12(struct hv_device *VAR_8,
   const struct hv_vmbus_device_id *VAR_9)
{
 struct hv_kbd_dev *VAR_10;
 struct serio *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_6(sizeof(struct hv_kbd_dev), VAR_1);
 VAR_11 = FUNC_6(sizeof(struct serio), VAR_1);
 if (!VAR_10 || !VAR_11) {
  VAR_12 = -VAR_0;
  goto err_free_mem;
 }

 VAR_10->hv_dev = VAR_8;
 VAR_10->hv_serio = VAR_11;
 FUNC_8(&VAR_10->lock);
 FUNC_4(&VAR_10->wait_event);
 FUNC_3(VAR_8, VAR_10);

 VAR_11->dev.parent = &VAR_8->device;
 VAR_11->id.type = VAR_4;
 VAR_11->port_data = VAR_10;
 FUNC_9(VAR_11->name, FUNC_0(&VAR_8->device),
  sizeof(VAR_11->name));
 FUNC_9(VAR_11->phys, FUNC_0(&VAR_8->device),
  sizeof(VAR_11->phys));

 VAR_11->start = VAR_6;
 VAR_11->stop = VAR_7;

 VAR_12 = FUNC_11(VAR_8->channel,
      VAR_3,
      VAR_2,
      ((void*)0), 0,
      VAR_5,
      VAR_8);
 if (VAR_12)
  goto err_free_mem;

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12)
  goto err_close_vmbus;

 FUNC_7(VAR_10->hv_serio);

 FUNC_1(&VAR_8->device, 1);

 return 0;

err_close_vmbus:
 FUNC_10(VAR_8->channel);
err_free_mem:
 FUNC_5(VAR_11);
 FUNC_5(VAR_10);
 return VAR_12;
}
