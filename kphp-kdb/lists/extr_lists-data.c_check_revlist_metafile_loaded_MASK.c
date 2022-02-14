
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tot_lists; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

int FUNC_1 (int VAR_1, int VAR_2) {
  if (VAR_1 == -1) {
    return 1;
  }
  return FUNC_0 (VAR_1 + VAR_0.tot_lists + 1, VAR_2);
}
