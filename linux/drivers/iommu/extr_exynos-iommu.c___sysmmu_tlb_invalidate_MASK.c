
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysmmu_drvdata {scalar_t__ sfrbase; int version; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sysmmu_drvdata *VAR_2)
{
 if (FUNC_0(VAR_2->version) < 5)
  FUNC_1(0x1, VAR_2->sfrbase + VAR_0);
 else
  FUNC_1(0x1, VAR_2->sfrbase + VAR_1);
}
