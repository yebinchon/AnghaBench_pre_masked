
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_decimal; } ;
typedef TYPE_2__ jvp_literal_number ;
struct TYPE_6__ {scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
typedef TYPE_3__ jv ;
typedef int decNumber ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static decNumber* FUNC_2(jv VAR_1) {
  FUNC_1(FUNC_0(VAR_1, VAR_0));
  return &(((jvp_literal_number*)VAR_1.u.ptr)->num_decimal);
}
