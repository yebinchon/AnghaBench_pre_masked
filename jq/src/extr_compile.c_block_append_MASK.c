
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ last; scalar_t__ first; } ;
typedef TYPE_1__ block ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

void FUNC_1(block* VAR_0, block VAR_1) {
  if (VAR_1) {
    if (VAR_0->last) {
      FUNC_0(VAR_0->last, VAR_1);
    } else {
      VAR_0->first = VAR_1;
    }
    VAR_0->last = VAR_1;
  }
}
