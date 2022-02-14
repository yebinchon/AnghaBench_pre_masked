
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (unsigned long) ;

void FUNC_2(u64 VAR_8)
{
 unsigned long VAR_9;

 VAR_9 = FUNC_0();

 VAR_9 |= VAR_7;
 VAR_9 |= VAR_4;
 if (VAR_8 & VAR_0)
  VAR_9 |= VAR_3;

 if (!(VAR_8 & VAR_1))
  VAR_9 |= VAR_5;

 if (!(VAR_8 & VAR_2))
  VAR_9 |= VAR_6;

 FUNC_1(VAR_9);
}
