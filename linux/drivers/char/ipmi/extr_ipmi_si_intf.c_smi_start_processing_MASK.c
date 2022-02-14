
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ si_type; int dev; int irq; int (* irq_setup ) (TYPE_1__*) ;struct smi_info* irq_handler_data; } ;
struct smi_info {int timer_can_start; size_t si_num; int * thread; TYPE_1__ io; int si_timer; struct ipmi_smi* intf; } ;
struct ipmi_smi {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int ,struct smi_info*,char*,size_t) ;
 size_t VAR_5 ;
 int FUNC_4 (struct smi_info*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_7,
    struct ipmi_smi *VAR_8)
{
 struct smi_info *VAR_9 = VAR_7;
 int VAR_10 = 0;

 VAR_9->intf = VAR_8;


 FUNC_6(&VAR_9->si_timer, VAR_6, 0);
 VAR_9->timer_can_start = 1;
 FUNC_4(VAR_9, VAR_4 + VAR_1);


 if (VAR_9->io.irq_setup) {
  VAR_9->io.irq_handler_data = VAR_9;
  VAR_9->io.irq_setup(&VAR_9->io);
 }




 if (VAR_9->si_num < VAR_5)
  VAR_10 = VAR_2[VAR_9->si_num];




 else if ((VAR_9->io.si_type != VAR_0) && (!VAR_9->io.irq))
  VAR_10 = 1;

 if (VAR_10) {
  VAR_9->thread = FUNC_3(VAR_3, VAR_9,
           "kipmi%d", VAR_9->si_num);
  if (FUNC_0(VAR_9->thread)) {
   FUNC_2(VAR_9->io.dev, "Could not start"
       " kernel thread due to error %ld, only using"
       " timers to drive the interface\n",
       FUNC_1(VAR_9->thread));
   VAR_9->thread = ((void*)0);
  }
 }

 return 0;
}
