
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* Type ;
struct TYPE_6__ {scalar_t__* proto; } ;
struct TYPE_7__ {TYPE_1__ f; } ;
struct TYPE_8__ {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(Type VAR_1) {
 if (FUNC_0(VAR_1) && VAR_1->u.f.proto) {
  int VAR_2;
  for (VAR_2 = 0; VAR_1->u.f.proto[VAR_2]; VAR_2++)
   ;
  return VAR_2 > 1 && VAR_1->u.f.proto[VAR_2-1] == VAR_0;
 }
 return 0;
}
