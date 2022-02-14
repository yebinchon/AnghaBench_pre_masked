
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ devt; int ** groups; int release; int parent; int class; } ;
struct TYPE_12__ {int owner; } ;
struct ib_uverbs_device {int devnum; TYPE_3__ dev; int comp; int refcount; TYPE_6__ cdev; int num_comp_vectors; int ib_dev; int uverbs_events_file_list; int uverbs_file_list; int lists_mutex; int xrcd_tree_mutex; int xrcd_tree; int ** groups; int disassociate_srcu; } ;
struct TYPE_10__ {scalar_t__ mmap; int alloc_ucontext; } ;
struct TYPE_9__ {int parent; } ;
struct ib_device {TYPE_2__ ops; int num_comp_vectors; TYPE_1__ dev; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_3__*,char*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (struct ib_device*,int *,struct ib_uverbs_device*) ;
 int FUNC_8 (struct ib_uverbs_device*) ;
 scalar_t__ FUNC_9 (struct ib_device*,struct ib_uverbs_device*) ;
 int VAR_8 ;
 int FUNC_10 (int *,scalar_t__,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ib_uverbs_device*) ;
 struct ib_uverbs_device* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ,struct ib_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(struct ib_device *VAR_14)
{
 int VAR_15;
 dev_t VAR_16;
 struct ib_uverbs_device *VAR_17;
 int VAR_18;

 if (!VAR_14->ops.alloc_ucontext)
  return;

 VAR_17 = FUNC_15(sizeof(*VAR_17), VAR_0);
 if (!VAR_17)
  return;

 VAR_18 = FUNC_13(&VAR_17->disassociate_srcu);
 if (VAR_18) {
  FUNC_14(VAR_17);
  return;
 }

 FUNC_6(&VAR_17->dev);
 VAR_17->dev.class = VAR_9;
 VAR_17->dev.parent = VAR_14->dev.parent;
 VAR_17->dev.release = VAR_8;
 VAR_17->groups[0] = &VAR_6;
 VAR_17->dev.groups = VAR_17->groups;
 FUNC_2(&VAR_17->refcount, 1);
 FUNC_12(&VAR_17->comp);
 VAR_17->xrcd_tree = VAR_4;
 FUNC_16(&VAR_17->xrcd_tree_mutex);
 FUNC_16(&VAR_17->lists_mutex);
 FUNC_0(&VAR_17->uverbs_file_list);
 FUNC_0(&VAR_17->uverbs_events_file_list);
 FUNC_18(VAR_17->ib_dev, VAR_14);
 VAR_17->num_comp_vectors = VAR_14->num_comp_vectors;

 VAR_15 = FUNC_10(&VAR_12, VAR_2 - 1,
          VAR_0);
 if (VAR_15 < 0)
  goto err;
 VAR_17->devnum = VAR_15;
 if (VAR_15 >= VAR_3)
  VAR_16 = VAR_7 + VAR_15 - VAR_3;
 else
  VAR_16 = VAR_1 + VAR_15;

 if (FUNC_9(VAR_14, VAR_17))
  goto err_uapi;

 VAR_17->dev.devt = VAR_16;
 FUNC_5(&VAR_17->dev, "uverbs%d", VAR_17->devnum);

 FUNC_4(&VAR_17->cdev,
    VAR_14->ops.mmap ? &VAR_13 : &VAR_11);
 VAR_17->cdev.owner = VAR_5;

 VAR_18 = FUNC_3(&VAR_17->cdev, &VAR_17->dev);
 if (VAR_18)
  goto err_uapi;

 FUNC_7(VAR_14, &VAR_10, VAR_17);
 return;

err_uapi:
 FUNC_11(&VAR_12, VAR_15);
err:
 if (FUNC_1(&VAR_17->refcount))
  FUNC_8(VAR_17);
 FUNC_19(&VAR_17->comp);
 FUNC_17(&VAR_17->dev);
 return;
}
