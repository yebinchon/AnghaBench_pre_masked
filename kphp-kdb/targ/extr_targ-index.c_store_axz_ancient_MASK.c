
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* intree_t ;
struct TYPE_7__ {int view_count; int uid; int ad_id; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int z; int x; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1 (intree_t VAR_3) {
  if (FUNC_0 (VAR_3->x)->flags & VAR_0) {
    VAR_1->ad_id = VAR_3->x;
    VAR_1->uid = VAR_2;
    VAR_1->view_count = VAR_3->z;
    ++VAR_1;
    return 1;
  } else {
    return 0;
  }
}
