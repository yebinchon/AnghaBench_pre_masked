
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_device {int sev_int_rcvd; TYPE_1__* vdata; scalar_t__ io_regs; int sev_int_queue; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ intsts_reg; scalar_t__ cmdresp_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct psp_device *VAR_5 = VAR_4;
 unsigned int VAR_6;
 int VAR_7;


 VAR_6 = FUNC_0(VAR_5->io_regs + VAR_5->vdata->intsts_reg);


 if (!(VAR_6 & VAR_2))
  goto done;


 VAR_7 = FUNC_0(VAR_5->io_regs + VAR_5->vdata->cmdresp_reg);
 if (VAR_7 & VAR_1) {
  VAR_5->sev_int_rcvd = 1;
  FUNC_2(&VAR_5->sev_int_queue);
 }

done:

 FUNC_1(VAR_6, VAR_5->io_regs + VAR_5->vdata->intsts_reg);

 return VAR_0;
}
