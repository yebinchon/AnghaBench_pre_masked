
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_7__ {TYPE_1__* parent; int devt; scalar_t__ of_node; } ;
struct TYPE_6__ {struct module* owner; } ;
struct iio_dev {int modes; TYPE_4__ dev; TYPE_2__ chrdev; int * setup_ops; int id; int info; struct module* driver_module; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (struct iio_dev*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_15(struct iio_dev *VAR_6, struct module *VAR_7)
{
 int VAR_8;

 VAR_6->driver_module = VAR_7;

 if (!VAR_6->dev.of_node && VAR_6->dev.parent)
  VAR_6->dev.of_node = VAR_6->dev.parent->of_node;

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_6->info)
  return -VAR_0;


 VAR_6->dev.devt = FUNC_1(FUNC_0(VAR_4), VAR_6->id);

 FUNC_8(VAR_6);

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_6->dev.parent,
   "Failed to create buffer sysfs interfaces\n");
  goto error_unreg_debugfs;
 }

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_6->dev.parent,
   "Failed to register sysfs interfaces\n");
  goto error_buffer_free_sysfs;
 }
 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_6->dev.parent,
   "Failed to register event set\n");
  goto error_free_sysfs;
 }
 if (VAR_6->modes & VAR_2)
  FUNC_11(VAR_6);

 if ((VAR_6->modes & VAR_1) &&
  VAR_6->setup_ops == ((void*)0))
  VAR_6->setup_ops = &VAR_5;

 FUNC_3(&VAR_6->chrdev, &VAR_3);

 VAR_6->chrdev.owner = VAR_7;

 VAR_8 = FUNC_2(&VAR_6->chrdev, &VAR_6->dev);
 if (VAR_8 < 0)
  goto error_unreg_eventset;

 return 0;

error_unreg_eventset:
 FUNC_13(VAR_6);
error_free_sysfs:
 FUNC_14(VAR_6);
error_buffer_free_sysfs:
 FUNC_6(VAR_6);
error_unreg_debugfs:
 FUNC_12(VAR_6);
 return VAR_8;
}
