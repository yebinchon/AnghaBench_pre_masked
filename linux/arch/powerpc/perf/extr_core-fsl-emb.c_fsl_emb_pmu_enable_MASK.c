
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct cpu_hw_events {scalar_t__ n_events; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 struct cpu_hw_events* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pmu *VAR_4)
{
 struct cpu_hw_events *VAR_5;
 unsigned long VAR_6;

 FUNC_2(VAR_6);
 VAR_5 = FUNC_5(&VAR_3);
 if (!VAR_5->disabled)
  goto out;

 VAR_5->disabled = 0;
 FUNC_4(VAR_5->n_events != 0);

 if (VAR_5->n_events > 0) {
  FUNC_3(VAR_2, VAR_1 | VAR_0);
  FUNC_0();
 }

 out:
 FUNC_1(VAR_6);
}
