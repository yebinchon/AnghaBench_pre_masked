
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum skd_req_state { ____Placeholder_skd_req_state } skd_req_state ;
__attribute__((used)) static const char *FUNC_0(enum skd_req_state VAR_0)
{
 switch (VAR_0) {
 case 130:
  return "IDLE";
 case 129:
  return "SETUP";
 case 132:
  return "BUSY";
 case 131:
  return "COMPLETED";
 case 128:
  return "TIMEOUT";
 default:
  return "???";
 }
}
