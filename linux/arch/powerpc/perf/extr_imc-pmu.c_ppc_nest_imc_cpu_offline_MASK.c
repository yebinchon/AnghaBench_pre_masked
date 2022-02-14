
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imc_pmu_ref {scalar_t__ refc; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpumask const*,unsigned int) ;
 int FUNC_2 (struct cpumask const*) ;
 struct cpumask* FUNC_3 (int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (unsigned int,int *) ;
 int FUNC_6 (unsigned int) ;
 struct imc_pmu_ref* FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(unsigned int VAR_5)
{
 int VAR_6, VAR_7 = -1;
 const struct cpumask *VAR_8;
 struct imc_pmu_ref *VAR_9;





 if (!FUNC_5(VAR_5, &VAR_2))
  return 0;
 if (!VAR_3)
  return 0;





 VAR_6 = FUNC_0(VAR_5);
 VAR_8 = FUNC_3(VAR_6);
 VAR_7 = FUNC_2(VAR_8);





 if (FUNC_10(VAR_7 == VAR_5))
  VAR_7 = FUNC_1(VAR_8, VAR_5);





 if (VAR_7 >= 0 && VAR_7 < VAR_4) {
  FUNC_4(VAR_7, &VAR_2);
  FUNC_8(VAR_5, VAR_7);
 } else {
  FUNC_9(VAR_1,
           FUNC_6(VAR_5));




  VAR_9 = FUNC_7(VAR_5);
  if (!VAR_9)
   return -VAR_0;

  VAR_9->refc = 0;
 }
 return 0;
}
