
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int,char*,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_6)
{
 if (FUNC_1(VAR_2, VAR_5,
   VAR_1 | VAR_0, "Scheduler",
   VAR_5)) {
  FUNC_0("Cannot request_irq for SchedulerIPI");
 }
 if (FUNC_1(VAR_3, VAR_4,
   VAR_1 | VAR_0, "SMP-Call",
   VAR_4)) {
  FUNC_0("Cannot request_irq for SMP-Call");
 }
}
