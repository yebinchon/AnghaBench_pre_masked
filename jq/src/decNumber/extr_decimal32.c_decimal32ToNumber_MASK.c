
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_8__ {int bytes; } ;
typedef TYPE_1__ decimal32 ;
struct TYPE_9__ {scalar_t__ exponent; int bits; } ;
typedef TYPE_2__ decNumber ;


 int* VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int*,int) ;
 int FUNC_2 (TYPE_2__*) ;

decNumber * FUNC_3(const decimal32 *VAR_7, decNumber *VAR_8) {
  uInt VAR_9;
  uInt VAR_10;
  uInt VAR_11;
  uInt VAR_12;
  uInt VAR_13;


  VAR_12=FUNC_0(VAR_7->bytes);

  VAR_11=(VAR_12>>26)&0x1f;

  FUNC_2(VAR_8);
  if (VAR_12&0x80000000) VAR_8->bits=VAR_5;

  VAR_9=VAR_1[VAR_11];
  VAR_10=VAR_0[VAR_11];

  if (VAR_10==3) {
    if (VAR_9==0) {
      VAR_8->bits|=VAR_3;
      return VAR_8;
      }
    else if (VAR_12&0x02000000) VAR_8->bits|=VAR_6;
    else VAR_8->bits|=VAR_4;
    VAR_9=0;
    }
   else {
    VAR_8->exponent=(VAR_10<<6)+((VAR_12>>20)&0x3f)-VAR_2;
    }


  VAR_12&=0x000fffff;
  if (VAR_9) {
    VAR_12|=VAR_9<<20;
    FUNC_1(VAR_8, &VAR_12, 3);
    return VAR_8;
    }

  if (!VAR_12) return VAR_8;
  if (VAR_12&0x000ffc00)
    FUNC_1(VAR_8, &VAR_12, 2);
   else
    FUNC_1(VAR_8, &VAR_12, 1);
  return VAR_8;
  }
