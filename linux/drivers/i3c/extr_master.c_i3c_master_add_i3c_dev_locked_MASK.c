
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int id; } ;
struct i3c_master_controller {TYPE_3__ bus; int dev; } ;
struct i3c_ibi_setup {scalar_t__ handler; int num_slots; int max_payload_len; } ;
struct i3c_device_info {scalar_t__ dyn_addr; } ;
struct TYPE_9__ {scalar_t__ dyn_addr; int pid; int static_addr; } ;
struct i3c_dev_desc {TYPE_5__* dev; int ibi_lock; TYPE_4__ info; TYPE_2__* boardinfo; TYPE_1__* ibi; } ;
struct TYPE_10__ {struct i3c_dev_desc* desc; } ;
struct TYPE_7__ {scalar_t__ init_dyn_addr; } ;
struct TYPE_6__ {scalar_t__ enabled; int num_slots; int max_payload_len; scalar_t__ handler; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i3c_dev_desc*) ;
 int FUNC_1 (struct i3c_dev_desc*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (struct i3c_dev_desc*) ;
 int FUNC_4 (struct i3c_dev_desc*) ;
 int FUNC_5 (struct i3c_dev_desc*) ;
 int FUNC_6 (struct i3c_dev_desc*,struct i3c_ibi_setup*) ;
 struct i3c_dev_desc* FUNC_7 (struct i3c_master_controller*,struct i3c_device_info*) ;
 int FUNC_8 (struct i3c_master_controller*,struct i3c_dev_desc*) ;
 int FUNC_9 (struct i3c_dev_desc*) ;
 int FUNC_10 (struct i3c_dev_desc*) ;
 int FUNC_11 (struct i3c_dev_desc*,scalar_t__) ;
 int FUNC_12 (struct i3c_dev_desc*) ;
 struct i3c_dev_desc* FUNC_13 (struct i3c_dev_desc*) ;
 int FUNC_14 (struct i3c_master_controller*,scalar_t__,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct i3c_master_controller *VAR_1,
      u8 VAR_2)
{
 struct i3c_device_info VAR_3 = { .dyn_addr = VAR_2 };
 struct i3c_dev_desc *VAR_4, *VAR_5;
 u8 VAR_6 = VAR_2, VAR_7;
 struct i3c_ibi_setup VAR_8 = { };
 bool VAR_9 = 0;
 int VAR_10;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_7(VAR_1, &VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_10 = FUNC_8(VAR_1, VAR_4);
 if (VAR_10)
  goto err_free_dev;

 VAR_10 = FUNC_12(VAR_4);
 if (VAR_10)
  goto err_detach_dev;

 VAR_5 = FUNC_13(VAR_4);
 if (VAR_5) {
  VAR_4->boardinfo = VAR_5->boardinfo;
  VAR_4->info.static_addr = VAR_5->info.static_addr;
  VAR_4->dev = VAR_5->dev;
  if (VAR_4->dev)
   VAR_4->dev->desc = VAR_4;







  FUNC_15(&VAR_5->ibi_lock);
  if (VAR_5->ibi) {
   VAR_8.handler = VAR_5->ibi->handler;
   VAR_8.max_payload_len = VAR_5->ibi->max_payload_len;
   VAR_8.num_slots = VAR_5->ibi->num_slots;

   if (VAR_5->ibi->enabled) {
    VAR_9 = 1;
    FUNC_3(VAR_5);
   }

   FUNC_5(VAR_5);
  }
  FUNC_16(&VAR_5->ibi_lock);

  VAR_6 = VAR_5->info.dyn_addr;

  FUNC_9(VAR_5);
  FUNC_10(VAR_5);
 }

 VAR_10 = FUNC_11(VAR_4, VAR_6);
 if (VAR_10)
  goto err_detach_dev;
 if (VAR_6 && VAR_6 != VAR_4->info.dyn_addr)
  VAR_7 = VAR_6;
 else if (VAR_4->boardinfo && VAR_4->boardinfo->init_dyn_addr)
  VAR_7 = VAR_4->boardinfo->init_dyn_addr;
 else
  VAR_7 = VAR_4->info.dyn_addr;

 if (VAR_4->info.dyn_addr != VAR_7) {




  VAR_10 = FUNC_14(VAR_1,
       VAR_4->info.dyn_addr,
       VAR_7);
  if (!VAR_10) {
   VAR_6 = VAR_4->info.dyn_addr;
   VAR_4->info.dyn_addr = VAR_7;
   FUNC_11(VAR_4, VAR_6);
  } else {
   FUNC_2(&VAR_1->dev,
    "Failed to assign reserved/old address to device %d%llx",
    VAR_1->bus.id, VAR_4->info.pid);
  }
 }
 if (VAR_8.handler) {
  FUNC_15(&VAR_4->ibi_lock);
  VAR_10 = FUNC_6(VAR_4, &VAR_8);
  if (VAR_10) {
   FUNC_2(&VAR_1->dev,
    "Failed to request IBI on device %d-%llx",
    VAR_1->bus.id, VAR_4->info.pid);
  } else if (VAR_9) {
   VAR_10 = FUNC_4(VAR_4);
   if (VAR_10)
    FUNC_2(&VAR_1->dev,
     "Failed to re-enable IBI on device %d-%llx",
     VAR_1->bus.id, VAR_4->info.pid);
  }
  FUNC_16(&VAR_4->ibi_lock);
 }

 return 0;

err_detach_dev:
 if (VAR_4->dev && VAR_4->dev->desc)
  VAR_4->dev->desc = ((void*)0);

 FUNC_9(VAR_4);

err_free_dev:
 FUNC_10(VAR_4);

 return VAR_10;
}
