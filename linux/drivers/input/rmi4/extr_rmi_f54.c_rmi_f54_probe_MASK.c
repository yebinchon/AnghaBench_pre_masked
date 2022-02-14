
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rmi_function {int dev; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_8__ {TYPE_3__* queue; int vfl_dir; int * lock; TYPE_4__* v4l2_dev; } ;
struct TYPE_9__ {int * dev; int * lock; struct f54_data* drv_priv; } ;
struct f54_data {int workqueue; int work; TYPE_4__ v4l2; TYPE_1__ vdev; TYPE_3__ queue; int lock; int * report_data; int num_tx_electrodes; int num_rx_electrodes; int status_mutex; int data_mutex; struct rmi_function* fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,struct f54_data*) ;
 void* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct f54_data*) ;
 int FUNC_11 (struct rmi_function*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_12 (struct f54_data*,int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int *,TYPE_4__*) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_1__*,int ,int) ;
 int FUNC_18 (TYPE_1__*,struct f54_data*) ;

__attribute__((used)) static int FUNC_19(struct rmi_function *VAR_8)
{
 struct f54_data *VAR_9;
 int VAR_10;
 u8 VAR_11, VAR_12;

 VAR_9 = FUNC_7(&VAR_8->dev, sizeof(struct f54_data), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->fn = VAR_8;
 FUNC_6(&VAR_8->dev, VAR_9);

 VAR_10 = FUNC_11(VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_9(&VAR_9->data_mutex);
 FUNC_9(&VAR_9->status_mutex);

 VAR_11 = VAR_9->num_rx_electrodes;
 VAR_12 = VAR_9->num_tx_electrodes;
 VAR_9->report_data = FUNC_7(&VAR_8->dev,
     FUNC_1(VAR_12, VAR_11, sizeof(u16)),
     VAR_2);
 if (VAR_9->report_data == ((void*)0))
  return -VAR_0;

 FUNC_0(&VAR_9->work, VAR_7);

 VAR_9->workqueue = FUNC_3("rmi4-poller");
 if (!VAR_9->workqueue)
  return -VAR_0;

 FUNC_10(VAR_9);
 FUNC_12(VAR_9, 0);


 FUNC_13(VAR_9->v4l2.name, VAR_1, sizeof(VAR_9->v4l2.name));
 VAR_10 = FUNC_14(&VAR_8->dev, &VAR_9->v4l2);
 if (VAR_10) {
  FUNC_5(&VAR_8->dev, "Unable to register video dev.\n");
  goto remove_wq;
 }


 FUNC_9(&VAR_9->lock);
 VAR_9->queue = VAR_5;
 VAR_9->queue.drv_priv = VAR_9;
 VAR_9->queue.lock = &VAR_9->lock;
 VAR_9->queue.dev = &VAR_8->dev;

 VAR_10 = FUNC_16(&VAR_9->queue);
 if (VAR_10)
  goto remove_v4l2;

 VAR_9->vdev = VAR_6;
 VAR_9->vdev.v4l2_dev = &VAR_9->v4l2;
 VAR_9->vdev.lock = &VAR_9->lock;
 VAR_9->vdev.vfl_dir = VAR_3;
 VAR_9->vdev.queue = &VAR_9->queue;
 FUNC_18(&VAR_9->vdev, VAR_9);

 VAR_10 = FUNC_17(&VAR_9->vdev, VAR_4, -1);
 if (VAR_10) {
  FUNC_5(&VAR_8->dev, "Unable to register video subdevice.");
  goto remove_v4l2;
 }

 return 0;

remove_v4l2:
 FUNC_15(&VAR_9->v4l2);
remove_wq:
 FUNC_2(&VAR_9->work);
 FUNC_8(VAR_9->workqueue);
 FUNC_4(VAR_9->workqueue);
 return VAR_10;
}
