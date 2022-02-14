
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,unsigned long) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_4(phys_addr_t VAR_6,
    phys_addr_t VAR_7)
{




 FUNC_0(VAR_6 != 0);
 if (!FUNC_1(VAR_1)) {
  VAR_4 = VAR_7;
  if (!FUNC_1(VAR_0))
   VAR_4 = FUNC_3(VAR_5, VAR_4, 0x40000000);
  else
   VAR_4 = FUNC_3(VAR_5, VAR_4,
            1UL << VAR_2);


  FUNC_2(VAR_4);
 } else {
  VAR_4 = VAR_3;
 }
}
