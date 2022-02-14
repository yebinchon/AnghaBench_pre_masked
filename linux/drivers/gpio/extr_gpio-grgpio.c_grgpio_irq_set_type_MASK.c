
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int hwirq; } ;
struct TYPE_2__ {int (* read_reg ) (scalar_t__) ;int bgpio_lock; int (* write_reg ) (scalar_t__,int) ;} ;
struct grgpio_priv {TYPE_1__ gc; scalar_t__ regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 struct grgpio_priv* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_3, unsigned int VAR_4)
{
 struct grgpio_priv *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7 = FUNC_0(VAR_3->hwirq);
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 switch (VAR_4) {
 case 128:
  VAR_10 = 0;
  VAR_11 = 0;
  break;
 case 129:
  VAR_10 = VAR_7;
  VAR_11 = 0;
  break;
 case 131:
  VAR_10 = 0;
  VAR_11 = VAR_7;
  break;
 case 130:
  VAR_10 = VAR_7;
  VAR_11 = VAR_7;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_5->gc.bgpio_lock, VAR_6);

 VAR_8 = VAR_5->gc.read_reg(VAR_5->regs + VAR_2) & ~VAR_7;
 VAR_9 = VAR_5->gc.read_reg(VAR_5->regs + VAR_1) & ~VAR_7;

 VAR_5->gc.write_reg(VAR_5->regs + VAR_2, VAR_8 | VAR_10);
 VAR_5->gc.write_reg(VAR_5->regs + VAR_1, VAR_9 | VAR_11);

 FUNC_3(&VAR_5->gc.bgpio_lock, VAR_6);

 return 0;
}
