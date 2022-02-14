
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imc_pmu {int pmu; } ;


 struct imc_pmu** VAR_0 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_1, int VAR_2)
{
 struct imc_pmu **VAR_3 = VAR_0;

 if (VAR_1 < 0 || VAR_2 < 0)
  return;

 while (*VAR_3) {
  FUNC_0(&(*VAR_3)->pmu, VAR_1, VAR_2);
  VAR_3++;
 }
}
