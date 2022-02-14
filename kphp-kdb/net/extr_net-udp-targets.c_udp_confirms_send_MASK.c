
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {scalar_t__ confirm_tree; int flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct udp_target*) ;

void FUNC_5 (struct udp_target *VAR_0) {
  FUNC_3 (VAR_0->flags);
  FUNC_4 (VAR_0);
  FUNC_0 (FUNC_1 ());
  while (VAR_0->confirm_tree) {
    FUNC_2 (1);
    FUNC_0 (FUNC_1 ());
  }
}
