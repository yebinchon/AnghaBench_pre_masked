
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_socket {int dummy; } ;
struct udp_message {int port; int ipv6; } ;
struct raw_message {int dummy; } ;
struct process_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct process_id*,int,int ,int ,struct raw_message*) ;
 int FUNC_2 (struct raw_message*,int*,int) ;

void FUNC_3 (struct udp_socket *VAR_2, struct udp_message *VAR_3, struct process_id *VAR_4, struct process_id *VAR_5, int VAR_6) {
  static int VAR_7[10];
  VAR_7[0] = VAR_1;
  *(struct process_id *)(VAR_7 + 1) = *VAR_5;
  *(struct process_id *)(VAR_7 + 4) = *VAR_5;
  VAR_7[7] = VAR_6;

  struct raw_message VAR_8;
  FUNC_0 (FUNC_2 (&VAR_8, VAR_7, 32) == 32);

  FUNC_1 (&VAR_0, VAR_4, VAR_6, VAR_3->ipv6, VAR_3->port, &VAR_8);
}
