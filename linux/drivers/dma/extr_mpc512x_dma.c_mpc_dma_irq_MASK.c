
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {int chancnt; } ;
struct mpc_dma {int error_status; int tasklet; TYPE_2__* regs; TYPE_1__ dma; int error_status_lock; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dmaerrl; int dmaintl; int dmaerrh; int dmainth; int dmaes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mpc_dma*,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct mpc_dma *VAR_4 = VAR_3;
 uint VAR_5;


 VAR_5 = FUNC_0(&VAR_4->regs->dmaes);
 FUNC_2(&VAR_4->error_status_lock);
 if ((VAR_5 & VAR_1) && VAR_4->error_status == 0)
  VAR_4->error_status = VAR_5;
 FUNC_3(&VAR_4->error_status_lock);


 if (VAR_4->dma.chancnt > 32) {
  FUNC_1(VAR_4, FUNC_0(&VAR_4->regs->dmainth),
     FUNC_0(&VAR_4->regs->dmaerrh), 32);
 }
 FUNC_1(VAR_4, FUNC_0(&VAR_4->regs->dmaintl),
     FUNC_0(&VAR_4->regs->dmaerrl), 0);


 FUNC_4(&VAR_4->tasklet);

 return VAR_0;
}
