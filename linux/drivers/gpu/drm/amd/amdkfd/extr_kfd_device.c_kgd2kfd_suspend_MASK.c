
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_dev {TYPE_2__* dqm; int init_complete; } ;
struct TYPE_3__ {int (* stop ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kfd_dev*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct kfd_dev *VAR_1)
{
 if (!VAR_1->init_complete)
  return;


 if (FUNC_0(&VAR_0) == 1)
  FUNC_2();

 VAR_1->dqm->ops.stop(VAR_1->dqm);

 FUNC_1(VAR_1);
}
