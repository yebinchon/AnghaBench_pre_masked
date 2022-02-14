
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_irq_wait {int wq; int count; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct omap_irq_wait *VAR_0)
{
 VAR_0->count--;
 FUNC_0(&VAR_0->wq);
}
