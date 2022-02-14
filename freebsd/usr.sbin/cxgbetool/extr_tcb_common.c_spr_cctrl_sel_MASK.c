
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(unsigned VAR_0,unsigned VAR_1)
{
  unsigned VAR_2=(VAR_1<<1) | VAR_0;
  char *VAR_3="UNKNOWN";

  if ( 0 == VAR_2) {VAR_3 = "Reno";}
  else if ( 1 == VAR_2) {VAR_3 = "Tahoe";}
  else if ( 2 == VAR_2) {VAR_3 = "NewReno";}
  else if ( 3 == VAR_2) {VAR_3 = "HighSpeed";}

  return VAR_3;
}
