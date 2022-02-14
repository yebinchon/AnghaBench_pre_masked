
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sysmmu_drvdata {int version; int sysmmu; scalar_t__ sfrbase; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct sysmmu_drvdata*) ;
 int FUNC_5 (struct sysmmu_drvdata*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct sysmmu_drvdata *VAR_1)
{
 u32 VAR_2;

 FUNC_5(VAR_1);

 VAR_2 = FUNC_7(VAR_1->sfrbase + VAR_0);


 if (VAR_2 == 0x80000001u)
  VAR_1->version = FUNC_0(1, 0);
 else
  VAR_1->version = FUNC_3(VAR_2);

 FUNC_6(VAR_1->sysmmu, "hardware version: %d.%d\n",
  FUNC_1(VAR_1->version), FUNC_2(VAR_1->version));

 FUNC_4(VAR_1);
}
