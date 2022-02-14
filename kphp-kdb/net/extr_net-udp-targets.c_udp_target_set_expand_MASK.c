
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target_set {int state; struct udp_target* S; int dst_port; int dst_ipv6; int generation; int utime; int pid; int port; int ip; } ;
struct udp_target {struct udp_target_set* ST; } ;
struct process_id {int utime; int pid; int port; int ip; } ;


 int FUNC_0 (int ) ;
 struct udp_target* FUNC_1 (struct process_id*,int ,int ,int ) ;

void FUNC_2 (struct udp_target_set *VAR_0) {
  FUNC_0 (VAR_0 && VAR_0->state == 1);
  struct process_id VAR_1;
  VAR_1.ip = VAR_0->ip;
  VAR_1.port = VAR_0->port;
  VAR_1.pid = VAR_0->pid;
  VAR_1.utime = VAR_0->utime;

  struct udp_target *VAR_2 = FUNC_1 (&VAR_1, VAR_0->generation, VAR_0->dst_ipv6, VAR_0->dst_port);

  VAR_0->state = 2;
  VAR_0->S = VAR_2;
  VAR_2->ST = VAR_0;
}
