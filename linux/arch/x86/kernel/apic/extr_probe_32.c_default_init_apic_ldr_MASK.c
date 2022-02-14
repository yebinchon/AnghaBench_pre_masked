
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_4;

 FUNC_2(VAR_0, VAR_1);
 VAR_4 = FUNC_1(VAR_2) & ~VAR_3;
 VAR_4 |= FUNC_0(1UL << FUNC_3());
 FUNC_2(VAR_2, VAR_4);
}
