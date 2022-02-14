
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ cpu; } ;
struct imc_pmu_ref {scalar_t__ refc; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct imc_pmu_ref* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_1)
{
 int VAR_2, VAR_3;
 struct imc_pmu_ref *VAR_4;

 if (VAR_1->cpu < 0)
  return;

 VAR_3 = FUNC_1(VAR_1->cpu);







 VAR_4 = FUNC_3(VAR_1->cpu);
 if (!VAR_4)
  return;


 FUNC_4(&VAR_4->lock);
 if (VAR_4->refc == 0) {
  FUNC_5(&VAR_4->lock);
  return;
 }
 VAR_4->refc--;
 if (VAR_4->refc == 0) {
  VAR_2 = FUNC_6(VAR_0,
         FUNC_2(VAR_1->cpu));
  if (VAR_2) {
   FUNC_5(&VAR_4->lock);
   FUNC_7("nest-imc: Unable to stop the counters for core %d\n", VAR_3);
   return;
  }
 } else if (VAR_4->refc < 0) {
  FUNC_0(1, "nest-imc: Invalid event reference count\n");
  VAR_4->refc = 0;
 }
 FUNC_5(&VAR_4->lock);
}
