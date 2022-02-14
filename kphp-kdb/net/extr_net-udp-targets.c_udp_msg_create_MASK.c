
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int dummy; } ;
struct raw_message {int dummy; } ;
struct udp_msg {int msg_num; struct raw_message raw; struct udp_target* S; } ;


 struct udp_msg* FUNC_0 (int) ;

struct udp_msg *FUNC_1 (struct raw_message *VAR_0, int VAR_1, struct udp_target *VAR_2) {
  struct udp_msg *VAR_3 = FUNC_0 (sizeof (*VAR_3));
  VAR_3->msg_num = VAR_1;
  VAR_3->S = VAR_2;
  VAR_3->raw = *VAR_0;
  return VAR_3;
}
