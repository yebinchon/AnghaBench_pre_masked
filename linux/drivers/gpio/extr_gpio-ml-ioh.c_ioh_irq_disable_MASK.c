
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int irq; } ;
struct irq_chip_generic {struct ioh_gpio* private; } ;
struct ioh_gpio {size_t ch; int irq_base; int spinlock; TYPE_2__* reg; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int ien; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 struct irq_chip_generic* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_2(VAR_0);
 struct ioh_gpio *VAR_2 = VAR_1->private;
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_2->spinlock, VAR_3);
 VAR_4 = FUNC_0(&VAR_2->reg->regs[VAR_2->ch].ien);
 VAR_4 &= ~(1 << (VAR_0->irq - VAR_2->irq_base));
 FUNC_1(VAR_4, &VAR_2->reg->regs[VAR_2->ch].ien);
 FUNC_4(&VAR_2->spinlock, VAR_3);
}
