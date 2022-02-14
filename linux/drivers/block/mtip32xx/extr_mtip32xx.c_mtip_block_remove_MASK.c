
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_data {int index; TYPE_2__* disk; int * queue; int tags; int dd_flag; int * bdev; TYPE_1__* pdev; TYPE_3__* port; int sr; scalar_t__ mtip_svc_handler; } ;
struct TYPE_10__ {int kobj; } ;
struct TYPE_9__ {int svc_wait; int flags; } ;
struct TYPE_8__ {scalar_t__ queue; int disk_name; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,struct driver_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,char*,int ) ;
 TYPE_4__* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,int ) ;
 struct kobject* FUNC_11 (int *) ;
 int FUNC_12 (struct kobject*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct driver_data*) ;
 int FUNC_15 (struct driver_data*) ;
 int FUNC_16 (struct driver_data*,struct kobject*) ;
 int VAR_3 ;
 int FUNC_17 (TYPE_3__*,int ) ;
 int FUNC_18 (struct driver_data*) ;
 int FUNC_19 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct driver_data *VAR_5)
{
 struct kobject *VAR_6;

 FUNC_14(VAR_5);

 if (VAR_5->mtip_svc_handler) {
  FUNC_20(VAR_1, &VAR_5->port->flags);
  FUNC_22(&VAR_5->port->svc_wait);
  FUNC_13(VAR_5->mtip_svc_handler);
 }


 if (FUNC_21(VAR_0, &VAR_5->dd_flag)) {
  VAR_6 = FUNC_11(&FUNC_9(VAR_5->disk)->kobj);
  if (VAR_6) {
   FUNC_16(VAR_5, VAR_6);
   FUNC_12(VAR_6);
  }
 }

 if (!VAR_5->sr) {




  if (!FUNC_17(VAR_5->port, VAR_2))
   FUNC_18(VAR_5);
 }
 else
  FUNC_8(&VAR_5->pdev->dev, "device %s surprise removal\n",
      VAR_5->disk->disk_name);

 FUNC_2(VAR_5->queue);
 FUNC_4(VAR_5->queue);
 FUNC_5(&VAR_5->tags, VAR_3, VAR_5);
 FUNC_6(VAR_5->queue);





 if (VAR_5->bdev) {
  FUNC_0(VAR_5->bdev);
  VAR_5->bdev = ((void*)0);
 }
 if (VAR_5->disk) {
  if (FUNC_21(VAR_0, &VAR_5->dd_flag))
   FUNC_7(VAR_5->disk);
  if (VAR_5->disk->queue) {
   FUNC_1(VAR_5->queue);
   FUNC_3(&VAR_5->tags);
   VAR_5->queue = ((void*)0);
  }
  FUNC_19(VAR_5->disk);
 }
 VAR_5->disk = ((void*)0);

 FUNC_10(&VAR_4, VAR_5->index);


 FUNC_15(VAR_5);

 return 0;
}
