
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int PID; } ;
struct udp_socket {int dummy; } ;
struct udp_message {int port; int ipv6; } ;
struct raw_message {int dummy; } ;
struct process_id {int dummy; } ;


 struct process_id VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct process_id*,int *,int,int ,int ,struct raw_message*) ;
 int FUNC_2 (struct raw_message*,int*,int) ;

void FUNC_3 (struct udp_socket *VAR_2, struct udp_message *VAR_3, struct udp_target *VAR_4, int VAR_5) {
  static int VAR_6[10];
  VAR_6[0] = VAR_1;
  *(struct process_id *)(VAR_6 + 1) = VAR_0;
  VAR_6[4] = VAR_5;

  struct raw_message VAR_7;
  FUNC_0 (FUNC_2 (&VAR_7, VAR_6, 20) == 20);

  FUNC_1 (&VAR_0, &VAR_4->PID, VAR_5, VAR_3->ipv6, VAR_3->port, &VAR_7);
}
