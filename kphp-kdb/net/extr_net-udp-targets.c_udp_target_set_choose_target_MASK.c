
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target_set {int state; struct udp_target* last; struct udp_target* S; } ;
struct udp_target {int dummy; } ;


 int FUNC_0 (struct udp_target_set*) ;
 int FUNC_1 (struct udp_target_set*) ;

struct udp_target *FUNC_2 (struct udp_target_set *VAR_0) {
  FUNC_0 (VAR_0);
  switch (VAR_0->state) {
  case 0:
    return 0;
  case 1:
    FUNC_1 (VAR_0);
  case 2:
    return VAR_0->S;
  case 3:
    return VAR_0->last;
  default:
    FUNC_0 (0);
    return 0;
  }
}
