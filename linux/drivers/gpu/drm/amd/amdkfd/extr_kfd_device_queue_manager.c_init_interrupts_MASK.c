
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_queue_manager {TYPE_2__* dev; } ;
struct TYPE_4__ {int kgd; TYPE_1__* kfd2kgd; } ;
struct TYPE_3__ {int (* init_interrupts ) (int ,unsigned int) ;} ;


 unsigned int FUNC_0 (struct device_queue_manager*) ;
 scalar_t__ FUNC_1 (struct device_queue_manager*,int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct device_queue_manager *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0 ; VAR_1 < FUNC_0(VAR_0) ; VAR_1++)
  if (FUNC_1(VAR_0, 0, VAR_1))
   VAR_0->dev->kfd2kgd->init_interrupts(VAR_0->dev->kgd, VAR_1);
}
