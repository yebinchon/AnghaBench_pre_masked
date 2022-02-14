
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_idx; } ;
struct udp_target {int unack_size; int confirm_tree; TYPE_1__ confirm_timer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct udp_target*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct udp_target*) ;

void FUNC_5 (struct udp_target *VAR_1, int VAR_2) {
  if (!VAR_1->confirm_timer.h_idx) {
    FUNC_1 (VAR_1);
  }
  if (!FUNC_3 (VAR_1->confirm_tree, VAR_2)) {
    VAR_1->confirm_tree = FUNC_2 (VAR_1->confirm_tree, VAR_2, FUNC_0 ());
    VAR_1->unack_size ++;
    if (VAR_1->unack_size >= VAR_0 / 2000) {
      FUNC_4 (VAR_1);
    }
  }
}
