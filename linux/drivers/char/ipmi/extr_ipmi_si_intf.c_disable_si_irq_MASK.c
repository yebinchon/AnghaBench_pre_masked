
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ irq; } ;
struct smi_info {int interrupt_disabled; TYPE_1__ io; } ;


 int FUNC_0 (struct smi_info*) ;

__attribute__((used)) static inline bool FUNC_1(struct smi_info *VAR_0)
{
 if ((VAR_0->io.irq) && (!VAR_0->interrupt_disabled)) {
  VAR_0->interrupt_disabled = 1;
  FUNC_0(VAR_0);
  return 1;
 }
 return 0;
}
