
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
 int VAR_5 ;
 struct imc_pmu_ref* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int* FUNC_7 (int ,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(struct perf_event *VAR_9, int VAR_10)
{
 int VAR_11;
 struct imc_pmu_ref *VAR_12;
 u64 VAR_13, *VAR_14 = FUNC_7(VAR_7, FUNC_9());

 if (VAR_10 & VAR_2)
  FUNC_1(VAR_9, VAR_10);

 if (!FUNC_2(FUNC_9()))
  return -VAR_0;

 VAR_11 = FUNC_9() / VAR_8;
 VAR_13 = ((u64)VAR_14 & VAR_5) | VAR_4;
 FUNC_3(VAR_3, VAR_13);







 VAR_12 = &VAR_6[VAR_11];
 if (!VAR_12)
  return -VAR_0;

 FUNC_4(&VAR_12->lock);
 if (VAR_12->refc == 0) {
  if (FUNC_6(VAR_1,
      FUNC_0(FUNC_9()))) {
   FUNC_5(&VAR_12->lock);
   FUNC_8("thread-imc: Unable to start the counter				for core %d\n", VAR_11);

   return -VAR_0;
  }
 }
 ++VAR_12->refc;
 FUNC_5(&VAR_12->lock);
 return 0;
}
