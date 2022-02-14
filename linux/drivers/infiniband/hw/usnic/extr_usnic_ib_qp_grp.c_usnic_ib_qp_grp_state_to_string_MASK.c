
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;
const char *FUNC_0(enum ib_qp_state VAR_0)
{
 switch (VAR_0) {
 case 132:
  return "Rst";
 case 133:
  return "Init";
 case 131:
  return "RTR";
 case 130:
  return "RTS";
 case 129:
  return "SQD";
 case 128:
  return "SQE";
 case 134:
  return "ERR";
 default:
  return "UNKNOWN STATE";

 }
}
