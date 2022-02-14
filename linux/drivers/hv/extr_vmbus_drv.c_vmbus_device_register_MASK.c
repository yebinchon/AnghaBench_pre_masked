
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_14__ {int release; int * parent; int * bus; struct kobject kobj; } ;
struct hv_device {TYPE_6__ device; int channels_kset; TYPE_4__* channel; } ;
struct TYPE_13__ {int dev; } ;
struct TYPE_9__ {int b; } ;
struct TYPE_10__ {TYPE_1__ if_instance; } ;
struct TYPE_11__ {TYPE_2__ offer; } ;
struct TYPE_12__ {TYPE_3__ offermsg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,char*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int *,struct kobject*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct hv_device*,TYPE_4__*) ;
 int VAR_3 ;

int FUNC_7(struct hv_device *VAR_4)
{
 struct kobject *VAR_5 = &VAR_4->device.kobj;
 int VAR_6;

 FUNC_0(&VAR_4->device, "%pUl",
       VAR_4->channel->offermsg.offer.if_instance.b);

 VAR_4->device.bus = &VAR_2;
 VAR_4->device.parent = &VAR_1->dev;
 VAR_4->device.release = VAR_3;





 VAR_6 = FUNC_1(&VAR_4->device);
 if (VAR_6) {
  FUNC_5("Unable to register child device\n");
  return VAR_6;
 }

 VAR_4->channels_kset = FUNC_3("channels",
             ((void*)0), VAR_5);
 if (!VAR_4->channels_kset) {
  VAR_6 = -VAR_0;
  goto err_dev_unregister;
 }

 VAR_6 = FUNC_6(VAR_4,
         VAR_4->channel);
 if (VAR_6) {
  FUNC_5("Unable to register primary channeln");
  goto err_kset_unregister;
 }

 return 0;

err_kset_unregister:
 FUNC_4(VAR_4->channels_kset);

err_dev_unregister:
 FUNC_2(&VAR_4->device);
 return VAR_6;
}
