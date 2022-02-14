
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dev; int kobj; int owner; } ;
struct TYPE_8__ {int release; int devt; int parent; int * class; } ;
struct ib_ucm_device {int devnum; TYPE_5__ cdev; TYPE_1__ dev; struct ib_device* ib_dev; } ;
struct ib_device {int dma_device; int alloc_ucontext; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct ib_device*,int *,struct ib_ucm_device*) ;
 int VAR_7 ;
 int FUNC_11 (struct ib_ucm_device*) ;
 int FUNC_12 (int *,char*,int) ;
 struct ib_ucm_device* FUNC_13 (int,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (struct ib_device*,int) ;
 int FUNC_15 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_16(struct ib_device *VAR_12)
{
 int VAR_13;
 dev_t VAR_14;
 struct ib_ucm_device *VAR_15;

 if (!VAR_12->alloc_ucontext || !FUNC_14(VAR_12, 1))
  return;

 VAR_15 = FUNC_13(sizeof *VAR_15, VAR_0);
 if (!VAR_15)
  return;

 VAR_15->ib_dev = VAR_12;

 VAR_13 = FUNC_8(VAR_6, VAR_2);
 if (VAR_13 >= VAR_2) {
  VAR_13 = FUNC_9();
  if (VAR_13 < 0)
   goto err;

  VAR_15->devnum = VAR_13 + VAR_2;
  VAR_14 = VAR_13 + VAR_8;
  FUNC_15(VAR_13, VAR_9);
 } else {
  VAR_15->devnum = VAR_13;
  VAR_14 = VAR_13 + VAR_1;
  FUNC_15(VAR_13, VAR_6);
 }

 FUNC_2(&VAR_15->cdev, &VAR_11);
 VAR_15->cdev.owner = VAR_3;
 FUNC_12(&VAR_15->cdev.kobj, "ucm%d", VAR_15->devnum);
 if (FUNC_0(&VAR_15->cdev, VAR_14, 1))
  goto err;

 VAR_15->dev.class = &VAR_4;
 VAR_15->dev.parent = VAR_12->dma_device;
 VAR_15->dev.devt = VAR_15->cdev.dev;
 VAR_15->dev.release = VAR_7;
 FUNC_4(&VAR_15->dev, "ucm%d", VAR_15->devnum);
 if (FUNC_6(&VAR_15->dev))
  goto err_cdev;

 if (FUNC_5(&VAR_15->dev, &VAR_5))
  goto err_dev;

 FUNC_10(VAR_12, &VAR_10, VAR_15);
 return;

err_dev:
 FUNC_7(&VAR_15->dev);
err_cdev:
 FUNC_1(&VAR_15->cdev);
 if (VAR_15->devnum < VAR_2)
  FUNC_3(VAR_13, VAR_6);
 else
  FUNC_3(VAR_13, VAR_9);
err:
 FUNC_11(VAR_15);
 return;
}
