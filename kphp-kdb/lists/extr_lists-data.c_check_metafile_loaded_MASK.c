
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tot_lists; } ;
struct TYPE_3__ {scalar_t__ aio; scalar_t__ data; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

int FUNC_1 (int VAR_3, int VAR_4) {
  FUNC_0 (0 <= VAR_3 && VAR_3 < VAR_0.tot_lists + VAR_2 + 1);
  if (VAR_1[VAR_3] && VAR_1[VAR_3]->data) {
    if (VAR_4 == 0) {
      FUNC_0 (!VAR_1[VAR_3]->aio);
    }
    if (VAR_4 < 0 && VAR_1[VAR_3]->aio) {
      return 0;
    }
    return 1;
  } else {
    return 0;
  }
}
