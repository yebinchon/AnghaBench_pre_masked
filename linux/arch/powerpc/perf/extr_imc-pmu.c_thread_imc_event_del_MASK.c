
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
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_4, int VAR_5)
{

 int VAR_6;
 struct imc_pmu_ref *VAR_7;

 FUNC_2(VAR_1, 0);

 VAR_6 = FUNC_7() / VAR_3;
 VAR_7 = &VAR_2[VAR_6];

 FUNC_3(&VAR_7->lock);
 VAR_7->refc--;
 if (VAR_7->refc == 0) {
  if (FUNC_5(VAR_0,
      FUNC_0(FUNC_7()))) {
   FUNC_4(&VAR_7->lock);
   FUNC_6("thread-imc: Unable to stop the counters				for core %d\n", VAR_6);

   return;
  }
 } else if (VAR_7->refc < 0) {
  VAR_7->refc = 0;
 }
 FUNC_4(&VAR_7->lock);




 FUNC_1(VAR_4);
}
