
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int tlb_num_lines; unsigned int tlb_num_ways; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (int ,unsigned long) ;
 TYPE_1__ VAR_9 ;
 int FUNC_2 (unsigned long*,unsigned long*) ;
 unsigned long FUNC_3 (unsigned long) ;

void FUNC_4(unsigned long VAR_10)
{
 unsigned long VAR_11 = 0;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned long VAR_14, VAR_15;


 FUNC_2(&VAR_14, &VAR_15);

 for (VAR_12 = 0; VAR_12 < VAR_9.tlb_num_lines; VAR_12++) {
  FUNC_1(VAR_0, FUNC_3(VAR_11));

  for (VAR_13 = 0; VAR_13 < VAR_9.tlb_num_ways; VAR_13++) {
   unsigned long VAR_16;
   unsigned long VAR_17;

   VAR_16 = VAR_6 | (VAR_13 << VAR_7);
   FUNC_1(VAR_2, VAR_16);
   VAR_16 = FUNC_0(VAR_2);
   VAR_17 = (VAR_16 >> VAR_5) & VAR_4;
   if (VAR_17 != VAR_10)
    continue;

   VAR_16 = VAR_8 | (VAR_13 << VAR_7);
   FUNC_1(VAR_2, VAR_16);
   FUNC_1(VAR_1, 0);
  }

  VAR_11 += VAR_3;
 }

 FUNC_1(VAR_2, VAR_14);
}
