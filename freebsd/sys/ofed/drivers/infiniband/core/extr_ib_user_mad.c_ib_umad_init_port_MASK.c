
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * parent; } ;
struct TYPE_6__ {int dev; TYPE_1__ kobj; void* owner; } ;
struct ib_umad_port {int dev_num; int port_num; TYPE_2__ cdev; TYPE_2__ sm_cdev; void* sm_dev; void* dev; int file_list; int file_mutex; int sm_sem; struct ib_device* ib_dev; } ;
struct ib_umad_device {int kobj; } ;
struct ib_device {int dma_device; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_6 (int ,int ,int ,struct ib_umad_port*,char*,int) ;
 scalar_t__ FUNC_7 (void*,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct ib_device*) ;
 int FUNC_11 (TYPE_1__*,char*,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(struct ib_device *VAR_12, int VAR_13,
        struct ib_umad_device *VAR_14,
        struct ib_umad_port *VAR_15)
{
 int VAR_16;
 dev_t VAR_17;

 FUNC_15(&VAR_8);
 VAR_16 = FUNC_9(VAR_5, VAR_0);
 if (VAR_16 >= VAR_0) {
  FUNC_16(&VAR_8);
  VAR_16 = FUNC_10(VAR_12);
  if (VAR_16 < 0)
   return -1;

  FUNC_15(&VAR_8);
  VAR_15->dev_num = VAR_16 + VAR_0;
  VAR_17 = VAR_16 + VAR_6;
  FUNC_14(VAR_16, VAR_7);
 } else {
  VAR_15->dev_num = VAR_16;
  VAR_17 = VAR_16 + VAR_2;
  FUNC_14(VAR_16, VAR_5);
 }
 FUNC_16(&VAR_8);

 VAR_15->ib_dev = VAR_12;
 VAR_15->port_num = VAR_13;
 FUNC_13(&VAR_15->sm_sem, 1);
 FUNC_12(&VAR_15->file_mutex);
 FUNC_0(&VAR_15->file_list);

 FUNC_4(&VAR_15->cdev, &VAR_10);
 VAR_15->cdev.owner = VAR_1;
 VAR_15->cdev.kobj.parent = &VAR_14->kobj;
 FUNC_11(&VAR_15->cdev.kobj, "umad%d", VAR_15->dev_num);
 if (FUNC_2(&VAR_15->cdev, VAR_17, 1))
  goto err_cdev;

 VAR_15->dev = FUNC_6(VAR_9, VAR_12->dma_device,
      VAR_15->cdev.dev, VAR_15,
      "umad%d", VAR_15->dev_num);
 if (FUNC_1(VAR_15->dev))
  goto err_cdev;

 if (FUNC_7(VAR_15->dev, &VAR_3))
  goto err_dev;
 if (FUNC_7(VAR_15->dev, &VAR_4))
  goto err_dev;

 VAR_17 += VAR_0;
 FUNC_4(&VAR_15->sm_cdev, &VAR_11);
 VAR_15->sm_cdev.owner = VAR_1;
 VAR_15->sm_cdev.kobj.parent = &VAR_14->kobj;
 FUNC_11(&VAR_15->sm_cdev.kobj, "issm%d", VAR_15->dev_num);
 if (FUNC_2(&VAR_15->sm_cdev, VAR_17, 1))
  goto err_sm_cdev;

 VAR_15->sm_dev = FUNC_6(VAR_9, VAR_12->dma_device,
         VAR_15->sm_cdev.dev, VAR_15,
         "issm%d", VAR_15->dev_num);
 if (FUNC_1(VAR_15->sm_dev))
  goto err_sm_cdev;

 if (FUNC_7(VAR_15->sm_dev, &VAR_3))
  goto err_sm_dev;
 if (FUNC_7(VAR_15->sm_dev, &VAR_4))
  goto err_sm_dev;

 return 0;

err_sm_dev:
 FUNC_8(VAR_9, VAR_15->sm_cdev.dev);

err_sm_cdev:
 FUNC_3(&VAR_15->sm_cdev);

err_dev:
 FUNC_8(VAR_9, VAR_15->cdev.dev);

err_cdev:
 FUNC_3(&VAR_15->cdev);
 if (VAR_15->dev_num < VAR_0)
  FUNC_5(VAR_16, VAR_5);
 else
  FUNC_5(VAR_16, VAR_7);

 return -1;
}
