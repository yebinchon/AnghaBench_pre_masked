
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
 struct counters *VAR_4, *VAR_5;
 struct counters *VAR_6;
 double VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;





 VAR_6 = FUNC_0(VAR_0, "CPU_CLK_UNHALTED.THREAD_P");
 VAR_3 = FUNC_0(VAR_0, "MEM_LOAD_UOPS_RETIRED.L1_MISS");
 VAR_4 = FUNC_0(VAR_0, "L1D_PEND_MISS.PENDING");
 VAR_5 = FUNC_0(VAR_0, "LD_BLOCKS.NO_SR");
 if (VAR_1 != -1) {
  VAR_8 = VAR_3->vals[VAR_1] * 1.0;
  VAR_10 = VAR_4->vals[VAR_1] * 1.0;
  VAR_11 = VAR_5->vals[VAR_1] * 1.0;
  VAR_7 = VAR_6->vals[VAR_1] * 1.0;
 } else {
  VAR_8 = VAR_3->sum * 1.0;
  VAR_10 = VAR_4->sum * 1.0;
  VAR_11 = VAR_5->sum * 1.0;
  VAR_7 = VAR_6->sum * 1.0;
 }
 VAR_9 = ((VAR_10 / VAR_8) * VAR_11)/VAR_7;
 VAR_2 = FUNC_1("%1.3f", VAR_9);
 return(VAR_2);
}
