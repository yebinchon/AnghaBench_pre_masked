
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* devt; } ;
struct TYPE_10__ {void* owner; } ;
struct ib_umad_port {int dev_num; int port_num; TYPE_1__ dev; TYPE_4__ cdev; TYPE_1__ sm_dev; TYPE_4__ sm_cdev; int file_list; int file_mutex; int sm_sem; struct ib_umad_device* umad_dev; struct ib_device* ib_dev; } ;
struct ib_umad_device {int dummy; } ;
struct ib_device {int dummy; } ;
typedef void* dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 (TYPE_1__*,struct ib_umad_port*,struct ib_device*) ;
 int FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_11(struct ib_device *VAR_11, int VAR_12,
        struct ib_umad_device *VAR_13,
        struct ib_umad_port *VAR_14)
{
 int VAR_15;
 dev_t VAR_16;
 dev_t VAR_17;
 int VAR_18;

 VAR_15 = FUNC_6(&VAR_9, VAR_1 - 1, VAR_0);
 if (VAR_15 < 0)
  return -1;
 VAR_14->dev_num = VAR_15;
 if (VAR_15 >= VAR_2) {
  VAR_16 = VAR_7 + VAR_15 - VAR_2;
  VAR_17 = VAR_6 + VAR_15 - VAR_2;
 } else {
  VAR_16 = VAR_15 + VAR_5;
  VAR_17 = VAR_15 + VAR_4;
 }

 VAR_14->ib_dev = VAR_11;
 VAR_14->umad_dev = VAR_13;
 VAR_14->port_num = VAR_12;
 FUNC_10(&VAR_14->sm_sem, 1);
 FUNC_8(&VAR_14->file_mutex);
 FUNC_0(&VAR_14->file_list);

 FUNC_5(&VAR_14->dev, VAR_14, VAR_11);
 VAR_14->dev.devt = VAR_16;
 FUNC_4(&VAR_14->dev, "umad%d", VAR_14->dev_num);
 FUNC_3(&VAR_14->cdev, &VAR_8);
 VAR_14->cdev.owner = VAR_3;

 VAR_18 = FUNC_1(&VAR_14->cdev, &VAR_14->dev);
 if (VAR_18)
  goto err_cdev;

 FUNC_5(&VAR_14->sm_dev, VAR_14, VAR_11);
 VAR_14->sm_dev.devt = VAR_17;
 FUNC_4(&VAR_14->sm_dev, "issm%d", VAR_14->dev_num);
 FUNC_3(&VAR_14->sm_cdev, &VAR_10);
 VAR_14->sm_cdev.owner = VAR_3;

 VAR_18 = FUNC_1(&VAR_14->sm_cdev, &VAR_14->sm_dev);
 if (VAR_18)
  goto err_dev;

 return 0;

err_dev:
 FUNC_9(&VAR_14->sm_dev);
 FUNC_2(&VAR_14->cdev, &VAR_14->dev);
err_cdev:
 FUNC_9(&VAR_14->dev);
 FUNC_7(&VAR_9, VAR_15);
 return VAR_18;
}
