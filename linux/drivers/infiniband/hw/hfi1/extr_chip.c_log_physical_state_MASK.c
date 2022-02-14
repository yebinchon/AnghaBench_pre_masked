
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_pportdata {int dd; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct hfi1_pportdata*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hfi1_pportdata *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_2(VAR_0->dd);

 if (VAR_2 == VAR_1) {
  FUNC_1(VAR_0, VAR_1);
 } else {
  FUNC_0(VAR_0->dd,
      "anticipated phy link state 0x%x, read 0x%x\n",
      VAR_1, VAR_2);
 }
}
