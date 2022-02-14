
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
 int VAR_4;

 double VAR_5, VAR_6, VAR_7, VAR_8;
 VAR_7 = 20.0;

 VAR_3 = FUNC_0(VAR_0, "CPU_CLK_UNHALTED.THREAD_P");
        VAR_2 = FUNC_0(VAR_0, "BR_MISP_RETIRED.ALL_BRANCHES");
 if (VAR_1 != -1) {
  VAR_5 = VAR_2->vals[VAR_1] * 1.0;
  VAR_6 = VAR_3->vals[VAR_1] * 1.0;
 } else {
  VAR_5 = VAR_2->sum * 1.0;
  VAR_6 = VAR_3->sum * 1.0;
 }
 VAR_8 = (VAR_7 * VAR_5)/VAR_6;
  VAR_4 = FUNC_1("%1.3f", VAR_8);
 return(VAR_4);
}
