
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

int FUNC_5 (int *VAR_2, long long VAR_3, int VAR_4) {
  item_t *VAR_5 = FUNC_2 (VAR_3, VAR_1);
  item_t *VAR_6 = (item_t *) FUNC_1 (VAR_3);

  FUNC_4 (2, "get_single_rate(%016llx): %p %p\n", VAR_3, VAR_5, VAR_6);

  if (VAR_6) {
    FUNC_0 (!VAR_5);
    *VAR_2 = FUNC_3 (VAR_6, VAR_4);
    return 1;
  }

  if (!VAR_5 || (VAR_5->extra & VAR_0)) {
    return 0;
  }
  *VAR_2 = FUNC_3 (VAR_5, VAR_4);
  return 1;
}
