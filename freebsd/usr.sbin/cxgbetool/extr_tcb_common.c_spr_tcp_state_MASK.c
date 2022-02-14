
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0 (unsigned VAR_0)
{
  char *VAR_1="UNKNOWN";

  if ( 0 == VAR_0) {VAR_1 = "CLOSED";}
  else if ( 1 == VAR_0) {VAR_1 = "LISTEN";}
  else if ( 2 == VAR_0) {VAR_1 = "SYN_SENT";}
  else if ( 3 == VAR_0) {VAR_1 = "SYN_RCVD";}
  else if ( 4 == VAR_0) {VAR_1 = "ESTABLISHED";}
  else if ( 5 == VAR_0) {VAR_1 = "CLOSE_WAIT";}
  else if ( 6 == VAR_0) {VAR_1 = "FIN_WAIT_1";}
  else if ( 7 == VAR_0) {VAR_1 = "CLOSING";}
  else if ( 8 == VAR_0) {VAR_1 = "LAST_ACK";}
  else if ( 9 == VAR_0) {VAR_1 = "FIN_WAIT_2";}
  else if (10 == VAR_0) {VAR_1 = "TIME_WAIT";}
  else if (11 == VAR_0) {VAR_1 = "ESTABLISHED_RX";}
  else if (12 == VAR_0) {VAR_1 = "ESTABLISHED_TX";}
  else if (13 == VAR_0) {VAR_1 = "SYN_PEND";}
  else if (14 == VAR_0) {VAR_1 = "ESC_1_STATE";}
  else if (15 == VAR_0) {VAR_1 = "ESC_2_STATE";}

  return VAR_1;
}
