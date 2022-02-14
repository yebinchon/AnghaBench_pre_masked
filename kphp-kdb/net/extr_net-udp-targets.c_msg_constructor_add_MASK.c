
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int constructors; int max_confirmed; int send_num; } ;
struct udp_msg_constructor {int msg_num; int total_parts; int parts; struct raw_message* msgs; } ;
struct udp_msg {int dummy; } ;
struct raw_message {int magic; } ;


 int FUNC_0 (struct udp_target*,int) ;
 int FUNC_1 (struct udp_target*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct udp_msg_constructor*) ;
 int FUNC_4 () ;
 struct udp_msg_constructor* FUNC_5 (int) ;
 int FUNC_6 (struct raw_message*,int ,int) ;
 scalar_t__ FUNC_7 (struct udp_target*,int) ;
 int FUNC_8 (struct raw_message*) ;
 int FUNC_9 (struct raw_message*,struct raw_message*) ;
 int FUNC_10 (int ,struct udp_msg_constructor*) ;
 int FUNC_11 (int ,struct udp_msg_constructor*,int ) ;
 struct udp_msg_constructor** FUNC_12 (int ,void*) ;
 struct udp_msg* FUNC_13 (struct raw_message*,int,struct udp_target*) ;
 int FUNC_14 (int,char*,int,int,...) ;

struct udp_msg *FUNC_15 (struct raw_message *VAR_0, int VAR_1, int VAR_2, int VAR_3, struct udp_target *VAR_4) {
  FUNC_2 (VAR_1 >= 0);
  FUNC_0 (VAR_4, VAR_1 + VAR_2);
  if (FUNC_7 (VAR_4, VAR_1 + VAR_2)) {
    FUNC_14 (1, "msg_is_dup: duplicate message %d. S->send_num = %d, S->max_confirmed = %d\n", VAR_1, VAR_4->send_num, VAR_4->max_confirmed);
    FUNC_8 (VAR_0);
    return 0;
  }
  FUNC_1 (VAR_4, VAR_1 + VAR_2);
  struct udp_msg_constructor **VAR_5 = FUNC_12 (VAR_4->constructors, (void *)&VAR_1);
  struct udp_msg_constructor *VAR_6;
  if (VAR_5) {
    VAR_6 = *VAR_5;
  } else {
    VAR_6 = FUNC_5 (sizeof (*VAR_6) + VAR_3 * sizeof (struct raw_message));
    VAR_6->msg_num = VAR_1;
    VAR_6->total_parts = VAR_3;
    VAR_6->parts = VAR_3;
    FUNC_6 (VAR_6->msgs, 0, VAR_3 * sizeof (struct raw_message));
    VAR_4->constructors = FUNC_11 (VAR_4->constructors, VAR_6, FUNC_4 ());
  }

  VAR_6->msgs[VAR_2] = *VAR_0;
  VAR_6->parts --;
  FUNC_14 (3, "packet_id = %d. %d parts left\n", VAR_1, VAR_6->parts);
  if (VAR_6->parts) { return 0; }
  struct raw_message *VAR_7 = &VAR_6->msgs[0];
  int VAR_8;
  for (VAR_8 = 1; VAR_8 < VAR_6->total_parts; VAR_8++) {
    FUNC_2 (VAR_6->msgs[VAR_8].magic);
    FUNC_9 (VAR_7, &VAR_6->msgs[VAR_8]);
  }

  struct udp_msg *VAR_9 = FUNC_13 (VAR_7, VAR_1, VAR_4);

  VAR_4->constructors = FUNC_10 (VAR_4->constructors, VAR_6);
  FUNC_3 (VAR_6);

  return VAR_9;
}
