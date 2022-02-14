
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct hfi1_devdata {int dummy; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,char*,char*,unsigned long long,unsigned long long) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long long FUNC_2 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 u64 VAR_7;

 VAR_6 = VAR_3 + FUNC_1(VAR_2);
 while (1) {
  VAR_7 = FUNC_2(VAR_4, VAR_1);
  if (VAR_5) {

   if ((VAR_7 & VAR_0) == VAR_0)
    return;
  } else {

   if ((VAR_7 & VAR_0) == 0)
    return;
  }

  if (FUNC_3(VAR_3, VAR_6)) {
   FUNC_0(VAR_4,
       "Time out waiting for SPC %sfreeze, bits 0x%llx, expecting 0x%llx, continuing",
       VAR_5 ? "" : "un", VAR_7 & VAR_0,
       VAR_5 ? VAR_0 : 0ull);
   return;
  }
  FUNC_4(80, 120);
 }
}
