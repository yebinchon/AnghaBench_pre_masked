
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_shutdown {int reason; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct sched_shutdown*) ;
 int VAR_0 ;

void FUNC_2(int VAR_1)
{
 struct sched_shutdown VAR_2 = { .reason = VAR_1 };
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 FUNC_0(VAR_3);
}
