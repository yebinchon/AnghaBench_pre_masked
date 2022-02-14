
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct powerpc_intr {scalar_t__ irq; scalar_t__ intline; int * pic; } ;
struct pic {scalar_t__ irqs; scalar_t__ ipis; scalar_t__ base; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pic* VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct powerpc_intr *VAR_4)
{
 struct pic *VAR_5;
 u_int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_2[VAR_7];
  VAR_6 = VAR_5->irqs + VAR_5->ipis;
  if (VAR_4->irq >= VAR_5->base && VAR_4->irq < VAR_5->base + VAR_6)
   break;
 }
 if (VAR_7 == VAR_1)
  return (VAR_0);

 VAR_4->intline = VAR_4->irq - VAR_5->base;
 VAR_4->pic = VAR_5->dev;


 if (VAR_4->pic == ((void*)0))
  VAR_4->pic = VAR_3;

 return (0);
}
