
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_re_chan {int irqtask; TYPE_1__* jrregs; int dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int jr_interrupt_status; int jr_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 struct fsl_re_chan* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct fsl_re_chan *VAR_6;
 u32 VAR_7, VAR_8;

 VAR_6 = FUNC_1((struct device *)VAR_5);

 VAR_7 = FUNC_2(&VAR_6->jrregs->jr_interrupt_status);
 if (!VAR_7)
  return VAR_3;






 if (VAR_7 & VAR_1) {
  VAR_8 = FUNC_2(&VAR_6->jrregs->jr_status);
  FUNC_0(VAR_6->dev, "chan error irqstate: %x, status: %x\n",
   VAR_7, VAR_8);
 }


 FUNC_3(&VAR_6->jrregs->jr_interrupt_status, VAR_0);

 FUNC_4(&VAR_6->irqtask);

 return VAR_2;
}
