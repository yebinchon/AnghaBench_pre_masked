
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_5__ {int bits; } ;
typedef TYPE_1__ decNumber ;
typedef int Int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;

decNumber * FUNC_1(decNumber *VAR_2, Int VAR_3) {
  uInt VAR_4;
  if (VAR_3>=0) VAR_4=VAR_3;
   else {
    if (VAR_3==VAR_0) VAR_4=(uInt)1073741824*2;
     else VAR_4=-VAR_3;
    }

  FUNC_0(VAR_2, VAR_4);
  if (VAR_3<0) VAR_2->bits=VAR_1;
  return VAR_2;
  }
