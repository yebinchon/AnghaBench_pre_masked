
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ irq; } ;
struct smi_info {int irq_enable_broken; int interrupt_disabled; TYPE_1__ io; scalar_t__ supports_event_msg_buff; scalar_t__ cannot_disable_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct smi_info *VAR_3, u8 VAR_4,
     bool *VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_3->supports_event_msg_buff)
  VAR_6 |= VAR_0;

 if (((VAR_3->io.irq && !VAR_3->interrupt_disabled) ||
      VAR_3->cannot_disable_irq) &&
     !VAR_3->irq_enable_broken)
  VAR_6 |= VAR_2;

 if (VAR_3->supports_event_msg_buff &&
     VAR_3->io.irq && !VAR_3->interrupt_disabled &&
     !VAR_3->irq_enable_broken)
  VAR_6 |= VAR_1;

 *VAR_5 = VAR_6 & (VAR_1 | VAR_2);

 return VAR_6;
}
