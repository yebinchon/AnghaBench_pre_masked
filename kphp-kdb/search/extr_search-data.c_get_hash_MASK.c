
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
 long long FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (long long) ;
 TYPE_1__* FUNC_3 (long long,int ) ;
 int FUNC_4 (int,char*,long long,TYPE_1__*,TYPE_1__*) ;

int FUNC_5 (long long *VAR_2, long long VAR_3) {
  item_t *VAR_4 = FUNC_3 (VAR_3, VAR_1);
  item_t *VAR_5 = (item_t *) FUNC_2 (VAR_3);

  FUNC_4 (2, "get_hash(%016llx): %p %p\n", VAR_3, VAR_4, VAR_5);

  if (VAR_5) {
    FUNC_0 (!VAR_4);
    *VAR_2 = FUNC_1 (VAR_5);
    return 1;
  }

  if (!VAR_4 || (VAR_4->extra & VAR_0)) {
    return 0;
  }
  *VAR_2 = FUNC_1 (VAR_4);
  return 1;
}
