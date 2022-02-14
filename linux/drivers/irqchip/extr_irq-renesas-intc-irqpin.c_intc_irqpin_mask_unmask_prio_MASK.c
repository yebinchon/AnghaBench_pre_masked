
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_irqpin_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intc_irqpin_priv*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct intc_irqpin_priv *VAR_1,
      int VAR_2, int VAR_3)
{

 int VAR_4 = 4;
 int VAR_5 = 32 - (VAR_2 + 1) * VAR_4;

 FUNC_0(VAR_1, VAR_0,
          VAR_5, VAR_4,
          VAR_3 ? 0 : (1 << VAR_4) - 1);
}
