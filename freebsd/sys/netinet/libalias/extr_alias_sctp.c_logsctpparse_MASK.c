
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_msg {int msg; } ;
 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, struct sctp_nat_msg *VAR_1)
{
 char *VAR_2, *VAR_3;
 switch (VAR_0) {
 case 128:
  VAR_2 = "TO_LOCAL -";
  break;
 case 129:
  VAR_2 = "TO_GLOBAL -";
  break;
 default:
  VAR_2 = "";
 }
 switch (VAR_1->msg) {
 case 134:
  VAR_3 = "Init";
  break;
 case 133:
  VAR_3 = "InitAck";
  break;
 case 137:
  VAR_3 = "Abort";
  break;
 case 131:
  VAR_3 = "ShutAck";
  break;
 case 130:
  VAR_3 = "ShutComp";
  break;
 case 136:
  VAR_3 = "Asconf";
  break;
 case 135:
  VAR_3 = "AsconfAck";
  break;
 case 132:
  VAR_3 = "Other";
  break;
 default:
  VAR_3 = "***ERROR***";
  break;
 }
 FUNC_0("Parsed: %s %s\n", VAR_2, VAR_3);
}
