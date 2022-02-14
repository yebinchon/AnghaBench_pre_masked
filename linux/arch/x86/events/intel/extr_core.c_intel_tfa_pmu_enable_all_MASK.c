
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_hw_events {int active_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cpu_hw_events*,int) ;
 int FUNC_2 (int,int ) ;
 struct cpu_hw_events* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(int VAR_1)
{
 struct cpu_hw_events *VAR_2 = FUNC_3(&VAR_0);





 if (!FUNC_2(3, VAR_2->active_mask))
  FUNC_1(VAR_2, 0);

 FUNC_0(VAR_1);
}
