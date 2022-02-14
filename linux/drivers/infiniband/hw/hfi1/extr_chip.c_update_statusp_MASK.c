
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_pportdata {int* statusp; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_pportdata *VAR_2, u32 VAR_3)
{
 if (VAR_2->statusp) {
  switch (VAR_3) {
  case 129:
  case 128:
   *VAR_2->statusp &= ~(VAR_0 |
        VAR_1);
   break;
  case 130:
   *VAR_2->statusp |= VAR_0;
   break;
  case 131:
   *VAR_2->statusp |= VAR_1;
   break;
  }
 }
 FUNC_0(VAR_2->dd, "logical state changed to %s (0x%x)\n",
      FUNC_1(VAR_3), VAR_3);
}
