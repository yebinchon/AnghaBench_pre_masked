
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ errnum; scalar_t__ error; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1 (void) {
  if (VAR_0.error) {
    FUNC_0 (VAR_0.error);
    VAR_0.error = 0;
  }
  VAR_0.errnum = 0;
}
