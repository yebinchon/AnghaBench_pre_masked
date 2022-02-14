
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {scalar_t__ state; } ;
struct tl_peer {int PID; } ;


 int FUNC_0 (struct udp_target*,long long) ;
 scalar_t__ VAR_0 ;
 struct udp_target* FUNC_1 (int *) ;

int FUNC_2 (struct tl_peer *VAR_1, long long VAR_2) {
  struct udp_target *VAR_3 = FUNC_1 (&VAR_1->PID);
  if (!VAR_3 || VAR_3->state == VAR_0) {
    return -1;
  }
  FUNC_0 (VAR_3, VAR_2);
  return 0;
}
