
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_socket {int dummy; } ;
struct udp_message {int port; int ipv6; } ;
struct raw_message {int dummy; } ;
struct process_id {int dummy; } ;


 struct process_id VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct process_id*,int ,int ,int ,int ,struct raw_message*) ;
 int FUNC_2 (struct raw_message*,int*,int) ;

void FUNC_3 (struct udp_socket *VAR_2, struct udp_message *VAR_3, long long VAR_4) {
  static int VAR_5[10];
  VAR_5[0] = VAR_1;
  *(long long *)(VAR_5 + 1) = VAR_4;
  *(struct process_id *)(VAR_5 + 3) = VAR_0;

  struct raw_message VAR_6;
  FUNC_0 (FUNC_2 (&VAR_6, VAR_5, 24) == 24);

  FUNC_1 (&VAR_0, 0, 0, VAR_3->ipv6, VAR_3->port, &VAR_6);
}
