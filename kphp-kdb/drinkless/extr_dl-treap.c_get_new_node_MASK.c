
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* dl_trp_node_ptr ;
struct TYPE_5__ {struct TYPE_5__* l; } ;
typedef TYPE_1__ dl_trp_node ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

dl_trp_node *FUNC_2 (void) {
  if (VAR_2 == 0) {
    if (VAR_0 < 10000) {
      if (VAR_0 < 10) {
        FUNC_1 (10);
      } else {
        FUNC_1 (VAR_0);
      }
    } else {
      FUNC_1 (10000);
    }
  }

  VAR_2--;
  FUNC_0 (VAR_2 >= 0);

  dl_trp_node_ptr VAR_3 = VAR_1;
  VAR_1 = VAR_1->l;
  VAR_3->l = ((void*)0);

  return VAR_3;
}
