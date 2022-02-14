
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ppc440spe_adma_device {scalar_t__ id; scalar_t__ irq; scalar_t__ err_irq; TYPE_2__* i2o_reg; TYPE_1__* xor_reg; } ;
struct ppc440spe_adma_chan {int dummy; } ;
struct TYPE_4__ {int iopim; } ;
struct TYPE_3__ {int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct ppc440spe_adma_chan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_8(struct ppc440spe_adma_device *VAR_11,
     struct ppc440spe_adma_chan *VAR_12)
{
 u32 VAR_13, VAR_14;

 if (VAR_11->id == VAR_5) {

  VAR_13 = FUNC_3(&VAR_11->xor_reg->ier);
  VAR_13 &= ~(VAR_6 | VAR_7 |
     VAR_8 | VAR_9);
  FUNC_6(VAR_13, &VAR_11->xor_reg->ier);
 } else {

  VAR_14 = (VAR_11->id == VAR_4) ?
     (VAR_1 | VAR_0) :
     (VAR_3 | VAR_2);
  VAR_13 = FUNC_2(&VAR_11->i2o_reg->iopim) | VAR_14;
  FUNC_5(VAR_13, &VAR_11->i2o_reg->iopim);
 }
 FUNC_1(VAR_11->irq, VAR_12);
 FUNC_7(VAR_11->irq);
 if (VAR_11->err_irq > 0) {
  FUNC_1(VAR_11->err_irq, VAR_12);
  if (FUNC_0(&VAR_10)) {
   FUNC_7(VAR_11->err_irq);
   FUNC_4(VAR_11->i2o_reg);
  }
 }
}
