
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counters {double* vals; double sum; } ;


 struct counters* FUNC_0 (struct counters*,char*) ;
 int FUNC_1 (char*,double) ;

__attribute__((used)) static int
FUNC_2(struct counters *VAR_0, int VAR_1)
{
 struct counters *VAR_2;
 struct counters *VAR_3;
 struct counters *VAR_4;
 struct counters *VAR_5;
 struct counters *VAR_6;
 struct counters *VAR_7;
 int VAR_8;
 double VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_14 = 4.0;

 VAR_3 = FUNC_0(VAR_0, "CPU_CLK_UNHALTED.THREAD_P");
        VAR_2 = FUNC_0(VAR_0, "BR_MISP_RETIRED.ALL_BRANCHES");
 VAR_4 = FUNC_0(VAR_0, "MACHINE_CLEARS.CYCLES");
 VAR_5 = FUNC_0(VAR_0, "UOPS_ISSUED.ANY");
 VAR_6 = FUNC_0(VAR_0, "UOPS_RETIRED.RETIRE_SLOTS");
 VAR_7 = FUNC_0(VAR_0, "INT_MISC.RECOVERY_CYCLES");

 if (VAR_1 != -1) {
  VAR_15 = VAR_3->vals[VAR_1] * 1.0;
  VAR_9 = VAR_2->vals[VAR_1] * 1.0;
  VAR_10 = VAR_4->vals[VAR_1] * 1.0;
  VAR_11 = VAR_5->vals[VAR_1] * 1.0;
  VAR_12 = VAR_6->vals[VAR_1] * 1.0;
  VAR_13 = VAR_7->vals[VAR_1] * 1.0;
 } else {
  VAR_15 = VAR_3->sum * 1.0;
  VAR_9 = VAR_2->sum * 1.0;
  VAR_10 = VAR_4->sum * 1.0;
  VAR_11 = VAR_5->sum * 1.0;
  VAR_12 = VAR_6->sum * 1.0;
  VAR_13 = VAR_7->sum * 1.0;
 }
 VAR_16 = VAR_9 / (VAR_9 + VAR_10) * (VAR_11 - VAR_12 + VAR_14 * VAR_13) / (VAR_15 * VAR_14);
  VAR_8 = FUNC_1("%1.3f", VAR_16);
 return(VAR_8);
}
