
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts5500_priv {int hwirq; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ts5500_priv *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 if (VAR_1->hwirq == 7)
  FUNC_3(FUNC_0(7), 0x7a);
 else if (VAR_1->hwirq == 6)
  FUNC_3(FUNC_0(7), 0x7d);
 else if (VAR_1->hwirq == 1)
  FUNC_3(FUNC_0(6), 0x7d);
 else
  VAR_2 = -VAR_0;
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_2;
}
