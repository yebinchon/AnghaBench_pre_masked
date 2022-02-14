
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; int start; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct irq_data* FUNC_0 (int) ;
 int FUNC_1 (struct irq_data*,int) ;
 scalar_t__ FUNC_2 (struct resource const*) ;

int FUNC_3(const struct resource *VAR_2,
          unsigned int VAR_3)
{
 struct irq_data *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  const struct resource *VAR_6 = &VAR_2[VAR_5];

  if (FUNC_2(VAR_6) != VAR_1)
   continue;

  if (VAR_6->flags & VAR_0) {
   VAR_4 = FUNC_0(VAR_6->start);
   if (!VAR_4)
    break;

   FUNC_1(VAR_4, VAR_6->flags & VAR_0);
  }

  return VAR_6->start;
 }

 return 0;
}
