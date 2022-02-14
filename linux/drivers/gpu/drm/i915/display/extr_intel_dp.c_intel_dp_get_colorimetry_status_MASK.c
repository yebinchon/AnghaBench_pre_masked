
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int*) ;

bool FUNC_1(struct intel_dp *VAR_2)
{
 u8 VAR_3 = 0;

 if (FUNC_0(&VAR_2->aux, VAR_0,
         &VAR_3) != 1)
  return 0;
 return VAR_3 & VAR_1;
}
