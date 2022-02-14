
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1 == 0 && VAR_2 == -1ul) {
  FUNC_4();
  return;
 }

 VAR_3 = -1;

 VAR_1 &= ~(VAR_0 - 1);
 while (VAR_1 < VAR_2) {
  VAR_3 = FUNC_1(VAR_1, VAR_3);
  FUNC_3(VAR_3);
  FUNC_5(VAR_3);
  VAR_1 += VAR_0;
 }

 FUNC_2(VAR_3);

 FUNC_0();
}
