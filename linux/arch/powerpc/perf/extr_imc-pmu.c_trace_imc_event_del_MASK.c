
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct imc_pmu_ref {scalar_t__ refc; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct imc_pmu_ref* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 (struct perf_event*,int) ;
 struct imc_pmu_ref* VAR_4 ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_5, int VAR_6)
{
 int VAR_7 = FUNC_6() / VAR_3;
 struct imc_pmu_ref *VAR_8 = ((void*)0);

 if (VAR_2)
  VAR_8 = &VAR_2[VAR_7];
 if (!VAR_8) {

  if (VAR_4)
   VAR_8 = &VAR_4[VAR_7];
  if (!VAR_8)
   return;
 }
 FUNC_1(VAR_1, 0);
 FUNC_2(&VAR_8->lock);
 VAR_8->refc--;
 if (VAR_8->refc == 0) {
  if (FUNC_4(VAR_0,
    FUNC_0(FUNC_6()))) {
   FUNC_3(&VAR_8->lock);
   FUNC_5("trace-imc: Unable to stop the counters for core %d\n", VAR_7);
   return;
  }
 } else if (VAR_8->refc < 0) {
  VAR_8->refc = 0;
 }
 FUNC_3(&VAR_8->lock);
 FUNC_7(VAR_5, VAR_6);
}
