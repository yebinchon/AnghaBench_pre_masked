
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw {int napi; int rx_irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sw *VAR_0)
{
 if (FUNC_3(!FUNC_2(&VAR_0->napi)))
  return;

 FUNC_1(VAR_0->rx_irq);
 FUNC_0(&VAR_0->napi);
}
