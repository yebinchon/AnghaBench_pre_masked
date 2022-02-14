
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
 struct counters *VAR_3;
 struct counters *VAR_4;
 double VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_0, "CPU_CLK_UNHALTED.THREAD_P");
 VAR_3 = FUNC_0(VAR_0, "ITLB_MISSES.WALK_DURATION");
 if (VAR_1 != -1) {
  VAR_6 = VAR_3->vals[VAR_1] * 1.0;
  VAR_5 = VAR_4->vals[VAR_1] * 1.0;
 } else {
  VAR_6 = VAR_3->sum * 1.0;
  VAR_5 = VAR_4->sum * 1.0;
 }
 VAR_7 = VAR_6/VAR_5;
 VAR_2 = FUNC_1("%1.3f", VAR_7);
 return(VAR_2);
}
