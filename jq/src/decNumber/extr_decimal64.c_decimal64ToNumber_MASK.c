
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uInt ;
struct TYPE_8__ {scalar_t__ bytes; } ;
typedef TYPE_1__ decimal64 ;
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,size_t*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;

decNumber * FUNC_3(const decimal64 *VAR_10, decNumber *VAR_11) {
  uInt VAR_12;
  uInt VAR_13;
  uInt VAR_14;
  Int VAR_15;
  uInt VAR_16;
  uInt VAR_17[2];




  if (VAR_4) {
    VAR_17[0]=FUNC_0(VAR_10->bytes );
    VAR_17[1]=FUNC_0(VAR_10->bytes+4);
    }
   else {
    VAR_17[1]=FUNC_0(VAR_10->bytes );
    VAR_17[0]=FUNC_0(VAR_10->bytes+4);
    }

  VAR_14=(VAR_17[1]>>26)&0x1f;

  FUNC_2(VAR_11);
  if (VAR_17[1]&0x80000000) VAR_11->bits=VAR_6;

  VAR_12=VAR_1[VAR_14];
  VAR_13=VAR_0[VAR_14];

  if (VAR_13==3) {
    if (VAR_12==0) {
      VAR_11->bits|=VAR_3;
      return VAR_11;
      }
    else if (VAR_17[1]&0x02000000) VAR_11->bits|=VAR_7;
    else VAR_11->bits|=VAR_5;
    VAR_12=0;
    }
   else {
    VAR_11->exponent=(VAR_13<<8)+((VAR_17[1]>>18)&0xff)-VAR_2;
    }


  VAR_17[1]&=0x0003ffff;
  if (VAR_12) {
    VAR_17[1]|=VAR_12<<18;
    VAR_15=6;
    }
   else {
    if (!VAR_17[1]) {
      if (!VAR_17[0]) return VAR_11;
      VAR_15=3;
      if (VAR_17[0]&0xc0000000) VAR_15++;

      }
     else {
      VAR_15=4;
      if (VAR_17[1]&0x0003ff00) VAR_15++;
      }
    }

  FUNC_1(VAR_11, VAR_17, VAR_15);
  return VAR_11;
  }
