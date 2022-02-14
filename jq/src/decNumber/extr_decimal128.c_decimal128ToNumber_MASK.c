
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uInt ;
struct TYPE_8__ {scalar_t__ bytes; } ;
typedef TYPE_1__ decimal128 ;
struct TYPE_9__ {scalar_t__ exponent; int bits; } ;
typedef TYPE_2__ decNumber ;
typedef int Int ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,size_t*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;

decNumber * FUNC_3(const decimal128 *VAR_12, decNumber *VAR_13) {
  uInt VAR_14;
  uInt VAR_15;
  uInt VAR_16;
  Int VAR_17;
  uInt VAR_18;
  uInt VAR_19[4];






  if (VAR_4) {
    VAR_19[0]=FUNC_0(VAR_12->bytes );
    VAR_19[1]=FUNC_0(VAR_12->bytes+4 );
    VAR_19[2]=FUNC_0(VAR_12->bytes+8 );
    VAR_19[3]=FUNC_0(VAR_12->bytes+12);
    }
   else {
    VAR_19[3]=FUNC_0(VAR_12->bytes );
    VAR_19[2]=FUNC_0(VAR_12->bytes+4 );
    VAR_19[1]=FUNC_0(VAR_12->bytes+8 );
    VAR_19[0]=FUNC_0(VAR_12->bytes+12);
    }

  VAR_16=(VAR_19[3]>>26)&0x1f;

  FUNC_2(VAR_13);
  if (VAR_19[3]&0x80000000) VAR_13->bits=VAR_6;

  VAR_14=VAR_1[VAR_16];
  VAR_15=VAR_0[VAR_16];

  if (VAR_15==3) {
    if (VAR_14==0) {
      VAR_13->bits|=VAR_3;
      return VAR_13;
      }
    else if (VAR_19[3]&0x02000000) VAR_13->bits|=VAR_7;
    else VAR_13->bits|=VAR_5;
    VAR_14=0;
    }
   else {
    VAR_13->exponent=(VAR_15<<12)+((VAR_19[3]>>14)&0xfff)-VAR_2;
    }


  VAR_19[3]&=0x00003fff;
  if (VAR_14) {
    VAR_19[3]|=VAR_14<<14;
    VAR_17=12;
    }
   else {
    if (VAR_19[3]) VAR_17=11;
     else if (VAR_19[2]) VAR_17=10;
     else if (VAR_19[1]) VAR_17=7;
     else if (VAR_19[0]) VAR_17=4;
     else return VAR_13;
    }

  FUNC_1(VAR_13, VAR_19, VAR_17);

  return VAR_13;
  }
