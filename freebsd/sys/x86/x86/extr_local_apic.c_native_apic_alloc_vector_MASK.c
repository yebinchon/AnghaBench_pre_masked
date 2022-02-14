
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__* la_ioint_irqs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static u_int
FUNC_3(u_int VAR_6, u_int VAR_7)
{
 u_int VAR_8;

 FUNC_0(VAR_7 < VAR_5, ("Invalid IRQ %u", VAR_7));





 FUNC_1(&VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_4[VAR_6].la_ioint_irqs[VAR_8] != VAR_2)
   continue;
  VAR_4[VAR_6].la_ioint_irqs[VAR_8] = VAR_7;
  FUNC_2(&VAR_3);
  return (VAR_8 + VAR_0);
 }
 FUNC_2(&VAR_3);
 return (0);
}
