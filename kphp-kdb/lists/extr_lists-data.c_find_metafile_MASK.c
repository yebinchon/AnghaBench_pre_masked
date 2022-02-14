
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int list_id_t ;
struct TYPE_2__ {int tot_lists; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3 (list_id_t VAR_1) {
  int VAR_2 = -1, VAR_3 = VAR_0.tot_lists;
  int VAR_4 = -1;
  while (VAR_3 - VAR_2 > 1) {
    int VAR_5 = (VAR_2 + VAR_3) >> 1;

    VAR_4 = FUNC_1 (VAR_1, FUNC_0(VAR_5));
    if (VAR_4 < 0) {
      VAR_3 = VAR_5;
    } else {
      VAR_2 = VAR_5;
    }
  }
  if (VAR_2 >= 0 && FUNC_2 (VAR_1, FUNC_0 (VAR_2))) {
    return VAR_2;
  } else {
    return -1;
  }
}
