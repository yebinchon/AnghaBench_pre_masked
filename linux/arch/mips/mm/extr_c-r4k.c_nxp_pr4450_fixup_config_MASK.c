
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_1();


 VAR_2 &= ~(0x7 | (7 << 25) | (7 << 28));
 VAR_2 |= (((VAR_1 >> VAR_0) << 0) |
      ((VAR_1 >> VAR_0) << 25) |
      ((VAR_1 >> VAR_0) << 28));
 FUNC_2(VAR_2);
 FUNC_0();
}
