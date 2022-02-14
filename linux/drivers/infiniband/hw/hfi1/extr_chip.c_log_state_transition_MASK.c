
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {int dd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hfi1_pportdata *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->dd, VAR_1);

 FUNC_1(VAR_0->dd,
      "physical state changed to %s (0x%x), phy 0x%x\n",
      FUNC_2(VAR_2), VAR_2, VAR_1);
}
