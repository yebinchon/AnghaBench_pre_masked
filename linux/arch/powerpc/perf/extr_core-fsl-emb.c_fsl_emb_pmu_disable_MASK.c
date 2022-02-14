
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_hw_events {int disabled; int pmcs_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 struct cpu_hw_events* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pmu *VAR_4)
{
 struct cpu_hw_events *VAR_5;
 unsigned long VAR_6;

 FUNC_3(VAR_6);
 VAR_5 = FUNC_6(&VAR_2);

 if (!VAR_5->disabled) {
  VAR_5->disabled = 1;




  if (!VAR_5->pmcs_enabled) {
   FUNC_5();
   VAR_5->pmcs_enabled = 1;
  }

  if (FUNC_0(&VAR_3)) {







   FUNC_4(VAR_1, VAR_0);
   FUNC_1();
  }
 }
 FUNC_2(VAR_6);
}
