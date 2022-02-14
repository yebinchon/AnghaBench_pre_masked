
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int hash; int to; int rev; } ;
typedef TYPE_1__ lookup_table ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;

inline void FUNC_5 (lookup_table *VAR_1) {
  int VAR_2 = FUNC_4 (VAR_1->rev, VAR_1->size);
  if (VAR_2 != VAR_1->hash) {
    FUNC_2 (VAR_0, "Wrong hashtable: size = %d, h = %d.", VAR_1->size, VAR_1->rev);
    FUNC_1 (VAR_0);
  }
  FUNC_0 (VAR_2 == VAR_1->hash);

  FUNC_3 (&VAR_1->to);
}
