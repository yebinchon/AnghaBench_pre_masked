
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



 int VAR_2;
 struct counters *VAR_3, *VAR_4, *VAR_5;
 struct counters *VAR_6;
 double VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = 100.0;
 VAR_6 = FUNC_0(VAR_0, "CPU_CLK_UNHALTED.THREAD_P");
 VAR_3 = FUNC_0(VAR_0, "MACHINE_CLEARS.MEMORY_ORDERING");
 VAR_4 = FUNC_0(VAR_0, "MACHINE_CLEARS.SMC");
 VAR_5 = FUNC_0(VAR_0, "MACHINE_CLEARS.MASKMOV");

 if (VAR_1 != -1) {
  VAR_9 = VAR_3->vals[VAR_1] * 1.0;
  VAR_10 = VAR_4->vals[VAR_1] * 1.0;
  VAR_11 = VAR_5->vals[VAR_1] * 1.0;
  VAR_8 = VAR_6->vals[VAR_1] * 1.0;
 } else {
  VAR_9 = VAR_3->sum * 1.0;
  VAR_10 = VAR_4->sum * 1.0;
  VAR_11 = VAR_5->sum * 1.0;
  VAR_8 = VAR_6->sum * 1.0;
 }
 VAR_12 = ((VAR_9 + VAR_10 + VAR_11) * VAR_7)/VAR_8;
 VAR_2 = FUNC_1("%1.3f", VAR_12);
 return(VAR_2);
}
