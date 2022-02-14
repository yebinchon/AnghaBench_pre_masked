
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ node; int irqs; int ipis; scalar_t__ base; int * dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

u_int
FUNC_3(uint32_t VAR_5, u_int VAR_6)
{
 int VAR_7;

 if (VAR_5 == 0)
  return (VAR_6);

 FUNC_1(&VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_4[VAR_7].node == VAR_5) {
   FUNC_2(&VAR_1);
   return (VAR_4[VAR_7].base + VAR_6);
  }
 }







 VAR_4[VAR_7].dev = ((void*)0);
 VAR_4[VAR_7].node = VAR_5;
 VAR_4[VAR_7].irqs = 124;
 VAR_4[VAR_7].ipis = 4;
 VAR_4[VAR_7].base = VAR_2;
 VAR_2 += (1 << 25);
 VAR_3++;

 FUNC_0(VAR_3 < VAR_0,
     ("Number of PICs exceeds maximum (%d)", VAR_0));

 FUNC_2(&VAR_1);

 return (VAR_4[VAR_7].base + VAR_6);
}
