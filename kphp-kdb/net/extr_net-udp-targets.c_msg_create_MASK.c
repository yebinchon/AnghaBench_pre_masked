
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int max_confirmed; int send_num; } ;
struct udp_msg {int dummy; } ;
struct raw_message {int dummy; } ;


 int FUNC_0 (struct udp_target*,int) ;
 int FUNC_1 (struct udp_target*,int) ;
 scalar_t__ FUNC_2 (struct udp_target*,int) ;
 int FUNC_3 (struct raw_message*) ;
 struct udp_msg* FUNC_4 (struct raw_message*,int,struct udp_target*) ;
 int FUNC_5 (int,char*,int,int ,int ) ;

struct udp_msg *FUNC_6 (struct raw_message *VAR_0, int VAR_1, struct udp_target *VAR_2) {
  if (VAR_1 >= 0) {
    FUNC_0 (VAR_2, VAR_1);
    if (FUNC_2 (VAR_2, VAR_1)) {
      FUNC_5 (1, "msg_is_dup: duplicate message %d. S->send_num = %d, S->max_confirmed = %d\n", VAR_1, VAR_2->send_num, VAR_2->max_confirmed);
      FUNC_3 (VAR_0);
      return 0;
    }
    FUNC_1 (VAR_2, VAR_1);
  }
  struct udp_msg *VAR_3 = FUNC_4 (VAR_0, VAR_1, VAR_2);
  return VAR_3;
}
