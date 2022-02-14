
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int owner; } ;
struct device {int release; struct device* parent; int class; scalar_t__ devt; } ;
struct gnss_device {int id; TYPE_1__ cdev; void* write_buf; int read_fifo; int read_queue; int write_mutex; int read_mutex; int rwsem; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct device*,struct gnss_device*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (struct gnss_device*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;

struct gnss_device *FUNC_12(struct device *VAR_10)
{
 struct gnss_device *VAR_11;
 struct device *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = FUNC_9(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return ((void*)0);

 VAR_13 = FUNC_4(&VAR_9, 0, VAR_1, VAR_0);
 if (VAR_13 < 0) {
  FUNC_8(VAR_11);
  return ((void*)0);
 }

 VAR_11->id = VAR_13;

 VAR_12 = &VAR_11->dev;
 FUNC_3(VAR_12);
 VAR_12->devt = VAR_7 + VAR_13;
 VAR_12->class = VAR_5;
 VAR_12->parent = VAR_10;
 VAR_12->release = VAR_6;
 FUNC_1(VAR_12, VAR_11);
 FUNC_2(VAR_12, "gnss%d", VAR_13);

 FUNC_5(&VAR_11->rwsem);
 FUNC_10(&VAR_11->read_mutex);
 FUNC_10(&VAR_11->write_mutex);
 FUNC_6(&VAR_11->read_queue);

 VAR_14 = FUNC_7(&VAR_11->read_fifo, VAR_2, VAR_0);
 if (VAR_14)
  goto err_put_device;

 VAR_11->write_buf = FUNC_9(VAR_3, VAR_0);
 if (!VAR_11->write_buf)
  goto err_put_device;

 FUNC_0(&VAR_11->cdev, &VAR_8);
 VAR_11->cdev.owner = VAR_4;

 return VAR_11;

err_put_device:
 FUNC_11(VAR_12);

 return ((void*)0);
}
