
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 long FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void
FUNC_3(unsigned long VAR_1)
{
 unsigned long VAR_2;
 volatile unsigned int *VAR_3;
 long VAR_4;



 VAR_3 = (void *)(VAR_0 + 0x84);
 VAR_2 = *VAR_3;





 while (VAR_2) {
  VAR_4 = FUNC_0(~VAR_2);
  VAR_2 &= VAR_2 - 1;
  if (VAR_4 == 20) {
   FUNC_2(VAR_1);
  } else {
   FUNC_1(16+VAR_4);
  }
 }
}
