
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sata_dwc_device {TYPE_1__* sata_dwc_regs; } ;
struct TYPE_2__ {int intpr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct sata_dwc_device *VAR_0, u32 VAR_1)
{
 FUNC_1(&VAR_0->sata_dwc_regs->intpr,
   FUNC_0(&VAR_0->sata_dwc_regs->intpr));
}
