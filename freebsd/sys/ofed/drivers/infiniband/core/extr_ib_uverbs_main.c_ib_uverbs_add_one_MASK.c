
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * parent; } ;
struct TYPE_10__ {int dev; TYPE_1__ kobj; int * ops; int owner; } ;
struct ib_uverbs_device {int devnum; int kobj; int comp; int refcount; TYPE_4__ cdev; TYPE_2__* dev; int num_comp_vectors; int ib_dev; int uverbs_events_file_list; int uverbs_file_list; int lists_mutex; int xrcd_tree_mutex; int xrcd_tree; int disassociate_srcu; } ;
struct ib_device {int dma_device; scalar_t__ mmap; int num_comp_vectors; int alloc_ucontext; } ;
typedef scalar_t__ dev_t ;
struct TYPE_9__ {int kobj; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *) ;
 int FUNC_7 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_8 (int ,int ,int ,struct ib_uverbs_device*,char*,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (int ,int ) ;
 int VAR_8 ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 () ;
 int FUNC_13 (struct ib_device*,int *,struct ib_uverbs_device*) ;
 int FUNC_14 (struct ib_uverbs_device*) ;
 int VAR_9 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ib_uverbs_device*) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*,char*,int) ;
 struct ib_uverbs_device* FUNC_21 (int,int ) ;
 int VAR_10 ;
 int FUNC_22 (int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_23 (int ,struct ib_device*) ;
 int FUNC_24 (int,int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int *,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_28 (int *) ;

__attribute__((used)) static void FUNC_29(struct ib_device *VAR_17)
{
 int VAR_18;
 dev_t VAR_19;
 struct ib_uverbs_device *VAR_20;
 int VAR_21;

 if (!VAR_17->alloc_ucontext)
  return;

 VAR_20 = FUNC_21(sizeof *VAR_20, VAR_0);
 if (!VAR_20)
  return;

 VAR_21 = FUNC_16(&VAR_20->disassociate_srcu);
 if (VAR_21) {
  FUNC_17(VAR_20);
  return;
 }

 FUNC_3(&VAR_20->refcount, 1);
 FUNC_15(&VAR_20->comp);
 VAR_20->xrcd_tree = VAR_3;
 FUNC_22(&VAR_20->xrcd_tree_mutex);
 FUNC_18(&VAR_20->kobj, &VAR_9);
 FUNC_22(&VAR_20->lists_mutex);
 FUNC_0(&VAR_20->uverbs_file_list);
 FUNC_0(&VAR_20->uverbs_events_file_list);

 FUNC_25(&VAR_10);
 VAR_18 = FUNC_11(VAR_7, VAR_2);
 if (VAR_18 >= VAR_2) {
  FUNC_26(&VAR_10);
  VAR_18 = FUNC_12();
  if (VAR_18 < 0)
   goto err;

  FUNC_25(&VAR_10);
  VAR_20->devnum = VAR_18 + VAR_2;
  VAR_19 = VAR_18 + VAR_11;
  FUNC_24(VAR_18, VAR_12);
 } else {
  VAR_20->devnum = VAR_18;
  VAR_19 = VAR_18 + VAR_1;
  FUNC_24(VAR_18, VAR_7);
 }
 FUNC_26(&VAR_10);

 FUNC_23(VAR_20->ib_dev, VAR_17);
 VAR_20->num_comp_vectors = VAR_17->num_comp_vectors;

 FUNC_6(&VAR_20->cdev, ((void*)0));
 VAR_20->cdev.owner = VAR_4;
 VAR_20->cdev.ops = VAR_17->mmap ? &VAR_16 : &VAR_15;
 VAR_20->cdev.kobj.parent = &VAR_20->kobj;
 FUNC_20(&VAR_20->cdev.kobj, "uverbs%d", VAR_20->devnum);
 if (FUNC_4(&VAR_20->cdev, VAR_19, 1))
  goto err_cdev;

 VAR_20->dev = FUNC_8(VAR_13, VAR_17->dma_device,
     VAR_20->cdev.dev, VAR_20,
     "uverbs%d", VAR_20->devnum);
 if (FUNC_1(VAR_20->dev))
  goto err_cdev;

 if (FUNC_9(VAR_20->dev, &VAR_6))
  goto err_class;
 if (FUNC_9(VAR_20->dev, &VAR_5))
  goto err_class;
 if (FUNC_27(&VAR_20->dev->kobj, &VAR_8))
  goto err_class;

 FUNC_13(VAR_17, &VAR_14, VAR_20);

 return;

err_class:
 FUNC_10(VAR_13, VAR_20->cdev.dev);

err_cdev:
 FUNC_5(&VAR_20->cdev);
 if (VAR_20->devnum < VAR_2)
  FUNC_7(VAR_18, VAR_7);
 else
  FUNC_7(VAR_18, VAR_12);

err:
 if (FUNC_2(&VAR_20->refcount))
  FUNC_14(VAR_20);
 FUNC_28(&VAR_20->comp);
 FUNC_19(&VAR_20->kobj);
 return;
}
