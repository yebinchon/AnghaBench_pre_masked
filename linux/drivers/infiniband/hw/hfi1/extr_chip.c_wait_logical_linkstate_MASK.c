
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_pportdata {int dd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hfi1_pportdata *VAR_2, u32 VAR_3,
      int VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_1 + FUNC_2(VAR_4);
 while (1) {
  VAR_6 = FUNC_0(VAR_2->dd,
            FUNC_4(VAR_2->dd));
  if (VAR_6 == VAR_3)
   break;
  if (FUNC_5(VAR_1, VAR_5)) {
   FUNC_1(VAR_2->dd,
       "timeout waiting for link state 0x%x\n",
       VAR_3);
   return -VAR_0;
  }
  FUNC_3(20);
 }

 return 0;
}
