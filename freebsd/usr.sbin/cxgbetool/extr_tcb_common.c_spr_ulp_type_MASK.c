
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

char *
FUNC_0(unsigned VAR_10)
{
  char *VAR_11="UNKNOWN";





  if ( VAR_6 == VAR_10) {VAR_11 = "TOE";}
  else if ( VAR_0 == VAR_10) {VAR_11 = "DDP";}
  else if ( VAR_4 == VAR_10) {VAR_11 = "ISCSI";}
  else if ( VAR_5 == VAR_10) {VAR_11 = "IWARP";}
  else if ( VAR_7 == VAR_10) {VAR_11 = "RDMA";}
  else if ( VAR_3 == VAR_10) {VAR_11 = "IANDP_DDP";}
  else if ( VAR_2 == VAR_10) {VAR_11 = "FCoE";}
  else if ( VAR_9 == VAR_10) {VAR_11 = "USER";}
  else if ( VAR_8 == VAR_10) {VAR_11 = "TLS";}
  else if ( VAR_1 == VAR_10) {VAR_11 = "DTLS";}

  return VAR_11;
}
