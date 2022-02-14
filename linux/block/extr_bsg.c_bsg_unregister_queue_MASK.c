
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sd; } ;
struct bsg_class_device {int * class_dev; int minor; } ;
struct request_queue {TYPE_1__ kobj; struct bsg_class_device bsg_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;

void FUNC_5(struct request_queue *VAR_2)
{
 struct bsg_class_device *VAR_3 = &VAR_2->bsg_dev;

 if (!VAR_3->class_dev)
  return;

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_0, VAR_3->minor);
 if (VAR_2->kobj.sd)
  FUNC_4(&VAR_2->kobj, "bsg");
 FUNC_0(VAR_3->class_dev);
 VAR_3->class_dev = ((void*)0);
 FUNC_3(&VAR_1);
}
