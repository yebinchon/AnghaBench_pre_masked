
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ magic; scalar_t__ rptr; scalar_t__ wptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_4 (char **VAR_3) {
  FUNC_0 (VAR_1);
  FUNC_2 (VAR_1);
  if (!VAR_2) {
    *VAR_3 = "Trying fetch from empty buffer\n";
    FUNC_1 (VAR_1);
    return 0;
  }
  FUNC_3 (VAR_2->magic == VAR_0);
  if (VAR_2->rptr < VAR_2->wptr) {
    *VAR_3 = 0;
    FUNC_1 (VAR_1);
    return 0;
  } else {
    *VAR_3 = 0;
    FUNC_1 (VAR_1);
    return 1;
  }
}
