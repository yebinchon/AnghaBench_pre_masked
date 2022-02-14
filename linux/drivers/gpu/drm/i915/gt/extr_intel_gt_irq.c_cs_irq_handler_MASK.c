
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tasklet; } ;
struct intel_engine_cs {TYPE_1__ execlists; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_engine_cs*) ;
 int FUNC_1 (struct intel_engine_cs*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct intel_engine_cs *VAR_2, u32 VAR_3)
{
 bool VAR_4 = 0;

 if (VAR_3 & VAR_0)
  VAR_4 = 1;

 if (VAR_3 & VAR_1) {
  FUNC_0(VAR_2);
  VAR_4 |= FUNC_1(VAR_2);
 }

 if (VAR_4)
  FUNC_2(&VAR_2->execlists.tasklet);
}
