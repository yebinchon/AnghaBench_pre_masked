
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int cpu; } ;
struct imc_pmu_ref {scalar_t__ refc; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct imc_pmu_ref* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_3)
{
 int VAR_4, VAR_5;
 struct imc_pmu_ref *VAR_6;

 if (VAR_3->cpu < 0)
  return;






 VAR_5 = VAR_3->cpu / VAR_2;


 VAR_6 = &VAR_1[VAR_5];
 if (!VAR_6)
  return;

 FUNC_2(&VAR_6->lock);
 if (VAR_6->refc == 0) {
  FUNC_3(&VAR_6->lock);
  return;
 }
 VAR_6->refc--;
 if (VAR_6->refc == 0) {
  VAR_4 = FUNC_4(VAR_0,
         FUNC_1(VAR_3->cpu));
  if (VAR_4) {
   FUNC_3(&VAR_6->lock);
   FUNC_5("IMC: Unable to stop the counters for core %d\n", VAR_5);
   return;
  }
 } else if (VAR_6->refc < 0) {
  FUNC_0(1, "core-imc: Invalid event reference count\n");
  VAR_6->refc = 0;
 }
 FUNC_3(&VAR_6->lock);
}
