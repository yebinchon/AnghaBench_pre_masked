
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_device {int dev; TYPE_1__* vdata; scalar_t__ io_regs; } ;
struct TYPE_2__ {scalar_t__ feature_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct psp_device *VAR_1)
{

 if (!(FUNC_1(VAR_1->io_regs + VAR_1->vdata->feature_reg) & 1)) {
  FUNC_0(VAR_1->dev, "psp does not support SEV\n");
  return -VAR_0;
 }

 return 0;
}
