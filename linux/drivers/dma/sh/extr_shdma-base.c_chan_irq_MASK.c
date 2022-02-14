
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct shdma_ops {scalar_t__ (* chan_irq ) (struct shdma_chan*,int) ;} ;
struct TYPE_3__ {int device; } ;
struct shdma_chan {int chan_lock; TYPE_1__ dma_chan; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {struct shdma_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct shdma_chan*,int) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct shdma_chan *VAR_4 = VAR_3;
 const struct shdma_ops *VAR_5 =
  FUNC_3(VAR_4->dma_chan.device)->ops;
 irqreturn_t VAR_6;

 FUNC_0(&VAR_4->chan_lock);

 VAR_6 = VAR_5->chan_irq(VAR_4, VAR_2) ? VAR_1 : VAR_0;

 FUNC_1(&VAR_4->chan_lock);

 return VAR_6;
}
