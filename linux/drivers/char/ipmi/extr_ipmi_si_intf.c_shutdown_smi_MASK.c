
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* io_cleanup ) (TYPE_2__*) ;int (* addr_source_cleanup ) (TYPE_2__*) ;int (* irq_cleanup ) (TYPE_2__*) ;scalar_t__ dev; } ;
struct smi_info {int dev_group_added; int interrupt_disabled; scalar_t__ si_state; int * intf; int * si_sm; TYPE_2__ io; TYPE_1__* handlers; scalar_t__ curr_msg; } ;
struct TYPE_5__ {int (* cleanup ) (int *) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct smi_info*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct smi_info*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct smi_info*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(void *VAR_2)
{
 struct smi_info *VAR_3 = VAR_2;

 if (VAR_3->dev_group_added) {
  FUNC_1(VAR_3->io.dev, &VAR_1);
  VAR_3->dev_group_added = 0;
 }
 if (VAR_3->io.dev)
  FUNC_0(VAR_3->io.dev, ((void*)0));





 VAR_3->interrupt_disabled = 1;
 if (VAR_3->io.irq_cleanup) {
  VAR_3->io.irq_cleanup(&VAR_3->io);
  VAR_3->io.irq_cleanup = ((void*)0);
 }
 FUNC_6(VAR_3);






 FUNC_11();






 while (VAR_3->curr_msg || (VAR_3->si_state != VAR_0)) {
  FUNC_4(VAR_3);
  FUNC_5(1);
 }
 if (VAR_3->handlers)
  FUNC_2(VAR_3);
 while (VAR_3->curr_msg || (VAR_3->si_state != VAR_0)) {
  FUNC_4(VAR_3);
  FUNC_5(1);
 }
 if (VAR_3->handlers)
  VAR_3->handlers->cleanup(VAR_3->si_sm);

 if (VAR_3->io.addr_source_cleanup) {
  VAR_3->io.addr_source_cleanup(&VAR_3->io);
  VAR_3->io.addr_source_cleanup = ((void*)0);
 }
 if (VAR_3->io.io_cleanup) {
  VAR_3->io.io_cleanup(&VAR_3->io);
  VAR_3->io.io_cleanup = ((void*)0);
 }

 FUNC_3(VAR_3->si_sm);
 VAR_3->si_sm = ((void*)0);

 VAR_3->intf = ((void*)0);
}
