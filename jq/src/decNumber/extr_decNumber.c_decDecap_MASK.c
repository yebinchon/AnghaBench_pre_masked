
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t digits; scalar_t__* lsu; } ;
typedef TYPE_1__ decNumber ;
typedef scalar_t__ Unit ;
typedef int LI ;
typedef size_t Int ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (scalar_t__*,int) ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static decNumber *FUNC_4(decNumber *VAR_2, Int VAR_3) {
  Unit *VAR_4;
  Int VAR_5;
  if (VAR_3>=VAR_2->digits) {





    VAR_2->lsu[0]=0;
    VAR_2->digits=1;
    return VAR_2;
    }
  VAR_4=VAR_2->lsu+FUNC_0(VAR_2->digits-VAR_3)-1;
  VAR_5=FUNC_1(VAR_2->digits-VAR_3);
  if (VAR_5!=VAR_0) *VAR_4%=VAR_1[VAR_5];

  VAR_2->digits=FUNC_2(VAR_2->lsu, VAR_4-VAR_2->lsu+1);
  return VAR_2;
  }
