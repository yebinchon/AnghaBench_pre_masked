
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_irqpin_priv {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct intc_irqpin_priv*,int) ;
 int FUNC_1 (struct intc_irqpin_priv*,int,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct intc_irqpin_priv *VAR_1,
       int VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;

 FUNC_2(&VAR_0, VAR_6);

 VAR_7 = FUNC_0(VAR_1, VAR_2);
 VAR_7 &= ~(((1 << VAR_4) - 1) << VAR_3);
 VAR_7 |= VAR_5 << VAR_3;
 FUNC_1(VAR_1, VAR_2, VAR_7);

 FUNC_3(&VAR_0, VAR_6);
}
