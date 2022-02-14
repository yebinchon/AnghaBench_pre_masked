
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int extra; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (long long) ;
 TYPE_1__* FUNC_2 (long long,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,char*,long long,TYPE_1__*,TYPE_1__*) ;

int FUNC_5 (int *VAR_2, long long VAR_3) {
  item_t *VAR_4 = FUNC_2 (VAR_3, VAR_1);
  item_t *VAR_5 = (item_t *) FUNC_1 (VAR_3);

  FUNC_4 (2, "get_rates(%016llx): %p %p\n", VAR_3, VAR_4, VAR_5);

  if (VAR_5) {
    FUNC_0 (!VAR_4);
    VAR_2[0] = FUNC_3 (VAR_5, 0);
    VAR_2[1] = FUNC_3 (VAR_5, 1);
    return 1;
  }
  if (!VAR_4 || (VAR_4->extra & VAR_0)) {
    return 0;
  }
  VAR_2[0] = FUNC_3 (VAR_4, 0);
  VAR_2[1] = FUNC_3 (VAR_4, 1);
  return 1;
}
