
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int decNumber ;
struct TYPE_4__ {int status; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,TYPE_1__*) ;

decNumber * FUNC_1(decNumber *VAR_1, const decNumber *VAR_2,
                                     decContext *VAR_3) {
  decContext VAR_4=*VAR_3;
  VAR_4.traps=0;
  FUNC_0(VAR_1, VAR_2, &VAR_4);


  VAR_3->status|=VAR_4.status&VAR_0;
  return VAR_1;
  }
