
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {int active_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct cpu_hw_events* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct cpu_hw_events *VAR_3 = FUNC_3(&VAR_2);

 FUNC_4(VAR_1, 0);

 if (FUNC_2(VAR_0, VAR_3->active_mask))
  FUNC_0();

 FUNC_1();
}
