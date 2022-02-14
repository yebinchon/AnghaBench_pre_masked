
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int* dpcd; int aux; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*) ;

__attribute__((used)) static bool
FUNC_1(struct intel_dp *VAR_3)
{
 u8 VAR_4;

 if (VAR_3->dpcd[VAR_0] < 0x12)
  return 0;

 if (FUNC_0(&VAR_3->aux, VAR_1, &VAR_4) != 1)
  return 0;

 return VAR_4 & VAR_2;
}
