
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_8__ {scalar_t__ kind_flags; scalar_t__ offset; scalar_t__ size; TYPE_1__ u; } ;
typedef TYPE_2__ jv ;


 scalar_t__ FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,int) ;

int FUNC_3(jv VAR_0, jv VAR_1) {
  int VAR_2;
  if (VAR_0.kind_flags != VAR_1.kind_flags
      || VAR_0.offset != VAR_1.offset
      || VAR_0.size != VAR_1.size) {
    VAR_2 = 0;
  } else {
    if (FUNC_0(VAR_0) ) {
      VAR_2 = VAR_0.u.ptr == VAR_1.u.ptr;
    } else {
      VAR_2 = FUNC_2(&VAR_0.u.ptr, &VAR_1.u.ptr, sizeof(VAR_0.u)) == 0;
    }
  }
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
  return VAR_2;
}
