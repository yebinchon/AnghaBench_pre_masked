
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;

int FUNC_1(uint16_t* VAR_2) {
  int VAR_3 = FUNC_0(*VAR_2)->length;
  if (*VAR_2 == VAR_0 || *VAR_2 == VAR_1) {
    VAR_3 += VAR_2[1] * 2;
  }
  return VAR_3;
}
