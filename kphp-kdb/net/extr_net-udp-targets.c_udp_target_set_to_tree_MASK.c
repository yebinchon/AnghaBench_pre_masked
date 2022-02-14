
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target_set {int state; int T_count; scalar_t__ T; struct udp_target* last; struct udp_target* S; } ;
struct udp_target {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,struct udp_target*,int ) ;

void FUNC_3 (struct udp_target_set *VAR_0) {
  FUNC_0 (VAR_0->state == 2);
  struct udp_target *VAR_1 = VAR_0->S;
  VAR_0->last = VAR_1;
  VAR_0->T = 0;
  VAR_0->T = FUNC_2 (VAR_0->T, VAR_1, FUNC_1 ());
  VAR_0->T_count = 1;
  VAR_0->state = 3;
}
