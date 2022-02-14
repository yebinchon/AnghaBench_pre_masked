
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_2__ {int thresh_irq_name; int wait_head; int lock; } ;
struct host1x_syncpt {TYPE_1__ intr; } ;
struct host1x {unsigned int intr_syncpt_irq; struct host1x_syncpt* syncpt; int intr_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct host1x*) ;
 unsigned int FUNC_2 (struct host1x*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,unsigned int) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct host1x *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 u32 VAR_3 = FUNC_2(VAR_0);

 FUNC_3(&VAR_0->intr_mutex);
 VAR_0->intr_syncpt_irq = VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  struct host1x_syncpt *VAR_4 = VAR_0->syncpt + VAR_2;

  FUNC_5(&VAR_4->intr.lock);
  FUNC_0(&VAR_4->intr.wait_head);
  FUNC_4(VAR_4->intr.thresh_irq_name,
    sizeof(VAR_4->intr.thresh_irq_name),
    "host1x_sp_%02u", VAR_2);
 }

 FUNC_1(VAR_0);

 return 0;
}
