
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psp_device {TYPE_1__* vdata; scalar_t__ io_regs; int sev_int_rcvd; int sev_int_queue; } ;
struct TYPE_2__ {scalar_t__ cmdresp_reg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct psp_device *VAR_2,
       unsigned int *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->sev_int_queue,
   VAR_2->sev_int_rcvd, VAR_4 * VAR_1);
 if (!VAR_5)
  return -VAR_0;

 *VAR_3 = FUNC_0(VAR_2->io_regs + VAR_2->vdata->cmdresp_reg);

 return 0;
}
