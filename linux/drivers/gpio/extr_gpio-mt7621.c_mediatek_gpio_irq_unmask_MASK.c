
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_gc {int rising; int falling; int hlevel; int llevel; int lock; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct mtk_gc*,int ) ;
 int FUNC_3 (struct mtk_gc*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct mtk_gc* FUNC_6 (struct gpio_chip*) ;

__attribute__((used)) static void
FUNC_7(struct irq_data *VAR_4)
{
 struct gpio_chip *VAR_5 = FUNC_1(VAR_4);
 struct mtk_gc *VAR_6 = FUNC_6(VAR_5);
 int VAR_7 = VAR_4->hwirq;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;

 FUNC_4(&VAR_6->lock, VAR_8);
 VAR_9 = FUNC_2(VAR_6, VAR_3);
 VAR_10 = FUNC_2(VAR_6, VAR_0);
 VAR_11 = FUNC_2(VAR_6, VAR_1);
 VAR_12 = FUNC_2(VAR_6, VAR_2);
 FUNC_3(VAR_6, VAR_3, VAR_9 | (FUNC_0(VAR_7) & VAR_6->rising));
 FUNC_3(VAR_6, VAR_0, VAR_10 | (FUNC_0(VAR_7) & VAR_6->falling));
 FUNC_3(VAR_6, VAR_1, VAR_11 | (FUNC_0(VAR_7) & VAR_6->hlevel));
 FUNC_3(VAR_6, VAR_2, VAR_12 | (FUNC_0(VAR_7) & VAR_6->llevel));
 FUNC_5(&VAR_6->lock, VAR_8);
}
