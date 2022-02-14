
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_1)
  FUNC_0();
 VAR_4 = FUNC_2(VAR_1 + VAR_0);
 if (VAR_3)
  VAR_4 |= 1 << VAR_2;
 else
  VAR_4 &= ~(1 << VAR_2);
 FUNC_3(VAR_4, VAR_1 + VAR_0);
 do {
  FUNC_1();
 } while (VAR_4 != FUNC_2(VAR_1 + VAR_0));
}
