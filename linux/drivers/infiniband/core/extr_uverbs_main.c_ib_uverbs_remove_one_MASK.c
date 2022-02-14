
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_device {int dev; int comp; int refcount; int devnum; int cdev; } ;
struct TYPE_2__ {scalar_t__ disassociate_ucontext; } ;
struct ib_device {TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ib_uverbs_device*) ;
 int FUNC_3 (struct ib_uverbs_device*,struct ib_device*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_1, void *VAR_2)
{
 struct ib_uverbs_device *VAR_3 = VAR_2;
 int VAR_4 = 1;

 if (!VAR_3)
  return;

 FUNC_1(&VAR_3->cdev, &VAR_3->dev);
 FUNC_4(&VAR_0, VAR_3->devnum);

 if (VAR_1->ops.disassociate_ucontext) {
  FUNC_3(VAR_3, VAR_1);
  VAR_4 = 0;
 }

 if (FUNC_0(&VAR_3->refcount))
  FUNC_2(VAR_3);
 if (VAR_4)
  FUNC_6(&VAR_3->comp);

 FUNC_5(&VAR_3->dev);
}
