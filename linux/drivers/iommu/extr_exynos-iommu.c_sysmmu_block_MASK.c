
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysmmu_drvdata {scalar_t__ sfrbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sysmmu_drvdata*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct sysmmu_drvdata *VAR_3)
{
 int VAR_4 = 120;

 FUNC_2(VAR_0, VAR_3->sfrbase + VAR_1);
 while ((VAR_4 > 0) && !(FUNC_0(VAR_3->sfrbase + VAR_2) & 1))
  --VAR_4;

 if (!(FUNC_0(VAR_3->sfrbase + VAR_2) & 1)) {
  FUNC_1(VAR_3);
  return 0;
 }

 return 1;
}
