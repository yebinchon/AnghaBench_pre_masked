
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int val; int * name; } ;
typedef TYPE_1__ _TCBVAR ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,unsigned char*) ;
 scalar_t__ FUNC_3 (char*,int *) ;

unsigned
FUNC_4( _TCBVAR *VAR_6, unsigned char *VAR_7)
{
  _TCBVAR *VAR_8=VAR_6;
  unsigned VAR_9;
  int VAR_10=1;
  unsigned VAR_11=0, VAR_12=0, VAR_13=0;
  int VAR_14=0, VAR_15=0, VAR_16=0;



  while (VAR_8->name!=((void*)0)) {
    FUNC_2(VAR_8,VAR_7);
    if (!VAR_14 && FUNC_3("tx_max",VAR_8->name)) {
      VAR_11=VAR_8->val;
      VAR_14=1;
    }
    if (!VAR_15 && FUNC_3("rcv_nxt",VAR_8->name)) {
      VAR_12=VAR_8->val;
      VAR_15=1;
    }
    if (!VAR_16 &&
 FUNC_3("rx_frag0_start_idx_raw",VAR_8->name)) {
      VAR_13=VAR_8->val;
      VAR_16=1;
    }
    VAR_8+=1;
  }

  VAR_8=VAR_6;
  VAR_9=VAR_8->val;
  if (VAR_2==VAR_9 || VAR_1==VAR_9) VAR_10=3;
  else if (VAR_3==VAR_9) VAR_10=2;
  else if (6==VAR_5 && (VAR_4==VAR_9 || VAR_0==VAR_9)) VAR_10=4;
  else VAR_10=1;

  FUNC_0(VAR_14 && VAR_15 && VAR_16);


  VAR_8=VAR_6;
  while (VAR_8->name!=((void*)0)) {
    FUNC_1(VAR_8,VAR_9,VAR_11,VAR_12,VAR_13);
    VAR_8+=1;
  }

  return VAR_10;
}
