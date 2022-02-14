
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_usage_timer {int timeBegin; int ticksBegin; int kerneltimeBegin; int usertimeBegin; int thread; } ;
typedef int FILETIME ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct cpu_usage_timer *VAR_0)
{
 VAR_0->ticksBegin = FUNC_2();


 FUNC_3(&VAR_0->timeBegin, ((void*)0));
}
