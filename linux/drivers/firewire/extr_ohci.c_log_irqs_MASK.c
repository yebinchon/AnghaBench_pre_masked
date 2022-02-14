
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct fw_ohci*,char*,int,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*) ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_2(struct fw_ohci *VAR_17, u32 VAR_18)
{
 if (FUNC_0(!(VAR_16 &
   (VAR_15 | VAR_14))))
  return;

 if (!(VAR_16 & VAR_15) &&
     !(VAR_18 & VAR_2))
  return;

 FUNC_1(VAR_17, "IRQ %08x%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s\n", VAR_18,
     VAR_18 & VAR_12 ? " selfID" : "",
     VAR_18 & VAR_0 ? " AR_req" : "",
     VAR_18 & VAR_1 ? " AR_resp" : "",
     VAR_18 & VAR_10 ? " AT_req" : "",
     VAR_18 & VAR_11 ? " AT_resp" : "",
     VAR_18 & VAR_6 ? " IR" : "",
     VAR_18 & VAR_7 ? " IT" : "",
     VAR_18 & VAR_8 ? " postedWriteErr" : "",
     VAR_18 & VAR_5 ? " cycleTooLong" : "",
     VAR_18 & VAR_3 ? " cycle64Seconds" : "",
     VAR_18 & VAR_4 ? " cycleInconsistent" : "",
     VAR_18 & VAR_9 ? " regAccessFail" : "",
     VAR_18 & VAR_13 ? " unrecoverableError" : "",
     VAR_18 & VAR_2 ? " busReset" : "",
     VAR_18 & ~(VAR_12 | VAR_0 |
      VAR_1 | VAR_10 |
      VAR_11 | VAR_6 |
      VAR_7 | VAR_8 |
      VAR_5 | VAR_3 |
      VAR_4 |
      VAR_9 | VAR_2)
      ? " ?" : "");
}
