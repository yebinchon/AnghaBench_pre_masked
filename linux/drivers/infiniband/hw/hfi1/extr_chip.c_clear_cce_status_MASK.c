
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,char*,int,int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct hfi1_devdata *VAR_4, u64 VAR_5,
        u64 VAR_6)
{
 unsigned long VAR_7;
 u64 VAR_8;


 VAR_8 = FUNC_2(VAR_4, VAR_1);
 if ((VAR_8 & VAR_5) == 0)
  return;


 FUNC_5(VAR_4, VAR_0, VAR_6);


 VAR_7 = VAR_3 + FUNC_1(VAR_2);
 while (1) {
  VAR_8 = FUNC_2(VAR_4, VAR_1);
  if ((VAR_8 & VAR_5) == 0)
   return;
  if (FUNC_3(VAR_3, VAR_7)) {
   FUNC_0(VAR_4,
       "Timeout waiting for CceStatus to clear bits 0x%llx, remaining 0x%llx\n",
       VAR_5, VAR_8 & VAR_5);
   return;
  }
  FUNC_4(1);
 }
}
