
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udp_target {int received_prefix; scalar_t__ received_tree; } ;
struct TYPE_2__ {int x; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct udp_target*) ;
 int FUNC_3 (struct udp_target*) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int ) ;

void FUNC_7 (struct udp_target *VAR_0, int VAR_1) {
  if (VAR_1 == VAR_0->received_prefix + 1) {
    VAR_0->received_prefix ++;
    if (VAR_0->received_tree) {
      while (VAR_0->received_tree) {
        int VAR_2 = FUNC_5 (VAR_0->received_tree)->x;
        FUNC_0 (VAR_2 >= VAR_0->received_prefix + 1);
        if (VAR_2 == VAR_0->received_prefix + 1) {
          VAR_0->received_tree = FUNC_4 (VAR_0->received_tree, VAR_2);
          VAR_0->received_prefix ++;
        } else {
          break;
        }
      }
      if (!VAR_0->received_tree) {
        FUNC_3 (VAR_0);
      }
    }
  } else {
    if (!VAR_0->received_tree) {
      FUNC_2 (VAR_0);
    }
    VAR_0->received_tree = FUNC_6 (VAR_0->received_tree, VAR_1, FUNC_1 ());
  }
}
