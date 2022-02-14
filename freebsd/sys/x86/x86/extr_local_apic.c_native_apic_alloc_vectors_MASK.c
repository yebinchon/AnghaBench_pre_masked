
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {scalar_t__* la_ioint_irqs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_5 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static u_int
FUNC_5(u_int VAR_6, u_int *VAR_7, u_int VAR_8, u_int VAR_9)
{
 u_int VAR_10, VAR_11, VAR_12;

 FUNC_0(FUNC_3(VAR_8), ("bad count"));
 FUNC_0(FUNC_3(VAR_9), ("bad align"));
 FUNC_0(VAR_9 >= VAR_8, ("align < count"));
 VAR_11 = 0;
 VAR_10 = 0;
 FUNC_1(&VAR_3);
 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {


  if (VAR_4[VAR_6].la_ioint_irqs[VAR_12] != VAR_2) {
   VAR_11 = 0;
   VAR_10 = 0;
   continue;
  }


  if (VAR_11 == 0) {
   if ((VAR_12 & (VAR_9 - 1)) != 0)
    continue;
   VAR_10 = VAR_12;
  }
  VAR_11++;


  if (VAR_11 < VAR_8)
   continue;


  for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
   VAR_4[VAR_6].la_ioint_irqs[VAR_10 + VAR_12] =
       VAR_7[VAR_12];
  FUNC_2(&VAR_3);
  return (VAR_10 + VAR_0);
 }
 FUNC_2(&VAR_3);
 FUNC_4("APIC: Couldn't find APIC vectors for %u IRQs\n", VAR_8);
 return (0);
}
