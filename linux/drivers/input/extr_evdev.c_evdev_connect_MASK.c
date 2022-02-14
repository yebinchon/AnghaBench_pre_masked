
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct input_handler {int dummy; } ;
struct input_device_id {int dummy; } ;
struct input_dev {int dev; } ;
struct TYPE_8__ {int release; int * parent; int * class; int devt; } ;
struct TYPE_9__ {struct evdev* private; struct input_handler* handler; int name; int dev; } ;
struct evdev {int exist; TYPE_1__ dev; TYPE_2__ handle; int cdev; int wait; int mutex; int client_lock; int client_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct evdev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (int,int,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 struct evdev* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct input_handler *VAR_8, struct input_dev *VAR_9,
    const struct input_device_id *VAR_10)
{
 struct evdev *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_11(VAR_2, VAR_1, 1);
 if (VAR_12 < 0) {
  VAR_14 = VAR_12;
  FUNC_16("failed to reserve new minor: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_11 = FUNC_14(sizeof(struct evdev), VAR_3);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto err_free_minor;
 }

 FUNC_0(&VAR_11->client_list);
 FUNC_18(&VAR_11->client_lock);
 FUNC_15(&VAR_11->mutex);
 FUNC_8(&VAR_11->wait);
 VAR_11->exist = 1;

 VAR_13 = VAR_12;

 if (VAR_13 < VAR_2 + VAR_1)
  VAR_13 -= VAR_2;
 FUNC_5(&VAR_11->dev, "event%d", VAR_13);

 VAR_11->handle.dev = FUNC_10(VAR_9);
 VAR_11->handle.name = FUNC_4(&VAR_11->dev);
 VAR_11->handle.handler = VAR_8;
 VAR_11->handle.private = VAR_11;

 VAR_11->dev.devt = FUNC_1(VAR_4, VAR_12);
 VAR_11->dev.class = &VAR_7;
 VAR_11->dev.parent = &VAR_9->dev;
 VAR_11->dev.release = VAR_6;
 FUNC_6(&VAR_11->dev);

 VAR_14 = FUNC_12(&VAR_11->handle);
 if (VAR_14)
  goto err_free_evdev;

 FUNC_3(&VAR_11->cdev, &VAR_5);

 VAR_14 = FUNC_2(&VAR_11->cdev, &VAR_11->dev);
 if (VAR_14)
  goto err_cleanup_evdev;

 return 0;

 err_cleanup_evdev:
 FUNC_7(VAR_11);
 FUNC_13(&VAR_11->handle);
 err_free_evdev:
 FUNC_17(&VAR_11->dev);
 err_free_minor:
 FUNC_9(VAR_12);
 return VAR_14;
}
