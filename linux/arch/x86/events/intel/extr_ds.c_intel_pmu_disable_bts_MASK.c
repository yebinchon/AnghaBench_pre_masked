
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {int ds; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 () ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;

void FUNC_3(void)
{
 struct cpu_hw_events *VAR_6 = FUNC_1(&VAR_5);
 unsigned long VAR_7;

 if (!VAR_6->ds)
  return;

 VAR_7 = FUNC_0();

 VAR_7 &=
  ~(VAR_4 | VAR_1 | VAR_0 |
    VAR_2 | VAR_3);

 FUNC_2(VAR_7);
}
