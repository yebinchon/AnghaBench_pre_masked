
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event {int dummy; } ;
struct imc_pmu_ref {scalar_t__ refc; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct imc_pmu_ref* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 () ;
 int VAR_6 ;
 struct imc_pmu_ref* VAR_7 ;

__attribute__((used)) static int FUNC_8(struct perf_event *VAR_8, int VAR_9)
{
 int VAR_10 = FUNC_7() / VAR_6;
 struct imc_pmu_ref *VAR_11 = ((void*)0);
 u64 VAR_12, VAR_13;


 VAR_12 = FUNC_1();
 VAR_13 = ((u64)VAR_12 & VAR_3) | VAR_4;

 if (VAR_5)
  VAR_11 = &VAR_5[VAR_10];
 if (!VAR_11) {

  if (VAR_7)
   VAR_11 = &VAR_7[VAR_10];
  if (!VAR_11)
   return -VAR_0;
 }
 FUNC_2(VAR_2, VAR_13);
 FUNC_3(&VAR_11->lock);
 if (VAR_11->refc == 0) {
  if (FUNC_5(VAR_1,
    FUNC_0(FUNC_7()))) {
   FUNC_4(&VAR_11->lock);
   FUNC_6("trace-imc: Unable to start the counters for core %d\n", VAR_10);
   FUNC_2(VAR_2, 0);
   return -VAR_0;
  }
 }
 ++VAR_11->refc;
 FUNC_4(&VAR_11->lock);

 return 0;
}
