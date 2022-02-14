
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int release; int devt; int * parent; int * class; } ;
struct TYPE_9__ {struct mousedev* private; struct input_handler* handler; int name; int dev; } ;
struct mousedev {int exist; TYPE_1__ dev; TYPE_2__ handle; int cdev; int close_device; int open_device; int wait; int mutex; int client_lock; int mixdev_node; int client_list; } ;
struct input_handler {int dummy; } ;
struct input_dev {int dev; } ;


 int VAR_0 ;
 struct mousedev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 struct mousedev* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (struct mousedev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static struct mousedev *FUNC_20(struct input_dev *VAR_13,
     struct input_handler *VAR_14,
     bool VAR_15)
{
 struct mousedev *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_16(VAR_15);
 if (VAR_17 < 0) {
  VAR_18 = VAR_17;
  goto err_out;
 }

 VAR_16 = FUNC_13(sizeof(struct mousedev), VAR_1);
 if (!VAR_16) {
  VAR_18 = -VAR_0;
  goto err_free_minor;
 }

 FUNC_1(&VAR_16->client_list);
 FUNC_1(&VAR_16->mixdev_node);
 FUNC_19(&VAR_16->client_lock);
 FUNC_17(&VAR_16->mutex);
 FUNC_14(&VAR_16->mutex,
        VAR_15 ? VAR_5 : 0);
 FUNC_8(&VAR_16->wait);

 if (VAR_15) {
  FUNC_6(&VAR_16->dev, "mice");

  VAR_16->open_device = VAR_8;
  VAR_16->close_device = VAR_7;
 } else {
  int VAR_19 = VAR_17;

  if (VAR_19 < VAR_4 + VAR_3)
   VAR_19 -= VAR_4;
  FUNC_6(&VAR_16->dev, "mouse%d", VAR_19);

  VAR_16->open_device = VAR_12;
  VAR_16->close_device = VAR_9;
 }

 VAR_16->exist = 1;
 VAR_16->handle.dev = FUNC_10(VAR_13);
 VAR_16->handle.name = FUNC_5(&VAR_16->dev);
 VAR_16->handle.handler = VAR_14;
 VAR_16->handle.private = VAR_16;

 VAR_16->dev.class = &VAR_6;
 if (VAR_13)
  VAR_16->dev.parent = &VAR_13->dev;
 VAR_16->dev.devt = FUNC_2(VAR_2, VAR_17);
 VAR_16->dev.release = VAR_11;
 FUNC_7(&VAR_16->dev);

 if (!VAR_15) {
  VAR_18 = FUNC_11(&VAR_16->handle);
  if (VAR_18)
   goto err_free_mousedev;
 }

 FUNC_4(&VAR_16->cdev, &VAR_10);

 VAR_18 = FUNC_3(&VAR_16->cdev, &VAR_16->dev);
 if (VAR_18)
  goto err_cleanup_mousedev;

 return VAR_16;

 err_cleanup_mousedev:
 FUNC_15(VAR_16);
 if (!VAR_15)
  FUNC_12(&VAR_16->handle);
 err_free_mousedev:
 FUNC_18(&VAR_16->dev);
 err_free_minor:
 FUNC_9(VAR_17);
 err_out:
 return FUNC_0(VAR_18);
}
