
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_dp {int* psr_dpcd; int aux; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int*,int) ;

__attribute__((used)) static u16 FUNC_2(struct intel_dp *VAR_2)
{
 u16 VAR_3;
 ssize_t VAR_4;





 if (!(VAR_2->psr_dpcd[1] & VAR_0))
  return 4;

 VAR_4 = FUNC_1(&VAR_2->aux, VAR_1, &VAR_3, 2);
 if (VAR_4 != 2)
  FUNC_0("Unable to read DP_PSR2_SU_X_GRANULARITY\n");





 if (VAR_4 != 2 || VAR_3 == 0)
  VAR_3 = 4;

 return VAR_3;
}
