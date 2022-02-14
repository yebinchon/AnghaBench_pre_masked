
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rapl_pmu {int cpu; int pmu; } ;


 struct rapl_pmu* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int VAR_0 ;
 int FUNC_4 (int ,unsigned int,int) ;
 int VAR_1 ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_2)
{
 struct rapl_pmu *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;


 if (!FUNC_3(VAR_2, &VAR_1))
  return 0;

 VAR_3->cpu = -1;

 VAR_4 = FUNC_1(FUNC_5(VAR_2), VAR_2);


 if (VAR_4 < VAR_0) {
  FUNC_2(VAR_4, &VAR_1);
  VAR_3->cpu = VAR_4;
  FUNC_4(VAR_3->pmu, VAR_2, VAR_4);
 }
 return 0;
}
