
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;
struct smi_info {int cannot_disable_irq; TYPE_1__ io; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct smi_info*,int*) ;
 int FUNC_3 (struct smi_info*,int) ;

__attribute__((used)) static void FUNC_4(struct smi_info *VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, &VAR_2);
 if (!VAR_3) {
  if ((VAR_2 & VAR_0) == 0)

   return;

  VAR_2 &= ~VAR_0;
  VAR_3 = FUNC_3(VAR_1, VAR_2);
 }

 if (VAR_3 < 0) {
  FUNC_0(VAR_1->io.dev,
   "Cannot check clearing the rcv irq: %d\n", VAR_3);
  return;
 }

 if (VAR_3) {




  FUNC_1(VAR_1->io.dev,
    "The BMC does not support clearing the recv irq bit, compensating, but the BMC needs to be fixed.\n");
  VAR_1->cannot_disable_irq = 1;
 }
}
