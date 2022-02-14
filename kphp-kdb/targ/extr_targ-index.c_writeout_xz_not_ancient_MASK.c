
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* intree_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int z; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (intree_t VAR_2) {
  if (FUNC_1 (VAR_2->x)->flags & VAR_0) {
    FUNC_0 (VAR_2->z);
    VAR_1++;
    return 0;
  } else {
    FUNC_2 (VAR_2->x);
    FUNC_2 (VAR_2->z);
    return 1;
  }
}
