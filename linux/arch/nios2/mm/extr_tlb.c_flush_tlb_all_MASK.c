
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
 unsigned long VAR_4 ;
 int FUNC_0 (int ,unsigned long) ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (unsigned long*,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long) ;

void FUNC_3(void)
{
 unsigned long VAR_6 = 0;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9, VAR_10;


 FUNC_1(&VAR_9, &VAR_10);


 FUNC_0(VAR_2, VAR_4);



 for (VAR_7 = 0; VAR_7 < VAR_5.tlb_num_lines; VAR_7++) {
  FUNC_0(VAR_0, FUNC_2(VAR_6));
  for (VAR_8 = 0; VAR_8 < VAR_5.tlb_num_ways; VAR_8++)
   FUNC_0(VAR_1, 0);

  VAR_6 += VAR_3;
 }


 FUNC_0(VAR_2, VAR_9);
}
