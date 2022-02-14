
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct ib_uverbs_device {scalar_t__ devnum; int kobj; int comp; int refcount; int ib_dev; TYPE_2__ cdev; TYPE_1__* dev; } ;
struct ib_device {scalar_t__ disassociate_ucontext; } ;
struct TYPE_3__ {int kobj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct ib_uverbs_device*) ;
 int FUNC_6 (struct ib_uverbs_device*,struct ib_device*) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ib_device *VAR_5, void *VAR_6)
{
 struct ib_uverbs_device *VAR_7 = VAR_6;
 int VAR_8 = 1;

 if (!VAR_7)
  return;

 FUNC_9(&VAR_7->dev->kobj, &VAR_2);
 FUNC_3(VAR_7->dev, ((void*)0));
 FUNC_4(VAR_4, VAR_7->cdev.dev);
 FUNC_1(&VAR_7->cdev);

 if (VAR_7->devnum < VAR_0)
  FUNC_2(VAR_7->devnum, VAR_1);
 else
  FUNC_2(VAR_7->devnum - VAR_0, VAR_3);

 if (VAR_5->disassociate_ucontext) {
  FUNC_8(VAR_7->ib_dev, ((void*)0));
  FUNC_6(VAR_7, VAR_5);
  VAR_8 = 0;
 }

 if (FUNC_0(&VAR_7->refcount))
  FUNC_5(VAR_7);
 if (VAR_8)
  FUNC_10(&VAR_7->comp);
 FUNC_7(&VAR_7->kobj);
}
